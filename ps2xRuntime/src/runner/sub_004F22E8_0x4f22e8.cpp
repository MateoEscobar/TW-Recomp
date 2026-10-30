#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004F22E8
// Address: 0x4f22e8 - 0x4f23e8
void sub_004F22E8_0x4f22e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F22E8_0x4f22e8");
#endif

    switch (ctx->pc) {
        case 0x4f2330u: goto label_4f2330;
        case 0x4f23a8u: goto label_4f23a8;
        default: break;
    }

    ctx->pc = 0x4f22e8u;

    // 0x4f22e8: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x4f22e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f22ec: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x4f22ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4f22f0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4f22f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4f22f4: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x4F22F4u;
    {
        const bool branch_taken_0x4f22f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F22F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F22F4u;
        // 0x4f22f8: 0xad220000  sw          $v0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f22f4) {
            ctx->pc = 0x4F23DCu;
            goto label_4f23dc;
        }
    }
    ctx->pc = 0x4F22FCu;
    // 0x4f22fc: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x4f22fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x4f2300: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4f2300u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f2304: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x4f2304u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4f2308: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x4f2308u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f230c: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x4f230cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f2310: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x4f2310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x4f2314: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x4f2314u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f2318: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x4f2318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4f231c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4f231cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4f2320: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x4f2320u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f2324: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4f2324u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4f2328: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x4F2328u;
    {
        const bool branch_taken_0x4f2328 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F232Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2328u;
        // 0x4f232c: 0x24083  sra         $t0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2328) {
            ctx->pc = 0x4F2354u;
            goto label_4f2354;
        }
    }
    ctx->pc = 0x4F2330u;
label_4f2330:
    // 0x4f2330: 0x3163c  dsll32      $v0, $v1, 24
    ctx->pc = 0x4f2330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 24));
    // 0x4f2334: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4f2334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4f2338: 0x718b8  dsll        $v1, $a3, 2
    ctx->pc = 0x4f2338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << 2);
    // 0x4f233c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x4f233cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x4f2340: 0x67182d  daddu       $v1, $v1, $a3
    ctx->pc = 0x4f2340u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 7));
    // 0x4f2344: 0x80c40000  lb          $a0, 0x0($a2)
    ctx->pc = 0x4f2344u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f2348: 0x62382d  daddu       $a3, $v1, $v0
    ctx->pc = 0x4f2348u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x4f234c: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x4F234Cu;
    {
        const bool branch_taken_0x4f234c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F2350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F234Cu;
        // 0x4f2350: 0x90c30000  lbu         $v1, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f234c) {
            ctx->pc = 0x4F2330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f2330;
        }
    }
    ctx->pc = 0x4F2354u;
label_4f2354:
    // 0x4f2354: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x4f2354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x4f2358: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4f2358u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4f235c: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4F235Cu;
    {
        const bool branch_taken_0x4f235c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f235c) {
            ctx->pc = 0x4F2360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F235Cu;
            // 0x4f2360: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F2364u;
            goto label_4f2364;
        }
    }
    ctx->pc = 0x4F2364u;
label_4f2364:
    // 0x4f2364: 0x48001b  divu        $zero, $v0, $t0
    ctx->pc = 0x4f2364u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x4f2368: 0x1810  mfhi        $v1
    ctx->pc = 0x4f2368u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x4f236c: 0x1560001b  bnez        $t3, . + 4 + (0x1B << 2)
    ctx->pc = 0x4F236Cu;
    {
        const bool branch_taken_0x4f236c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F2370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F236Cu;
        // 0x4f2370: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f236c) {
            ctx->pc = 0x4F23DCu;
            goto label_4f23dc;
        }
    }
    ctx->pc = 0x4F2374u;
    // 0x4f2374: 0x25420004  addiu       $v0, $t2, 0x4
    ctx->pc = 0x4f2374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x4f2378: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4f2378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4f237c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4f237cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4f2380: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x4f2380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4f2384: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x4f2384u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4f2388: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x4f2388u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x4f238c: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x4f238cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4f2390: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x4F2390u;
    {
        const bool branch_taken_0x4f2390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f2390) {
            ctx->pc = 0x4F23DCu;
            goto label_4f23dc;
        }
    }
    ctx->pc = 0x4F2398u;
    // 0x4f2398: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x4f2398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x4f239c: 0x24460004  addiu       $a2, $v0, 0x4
    ctx->pc = 0x4f239cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4f23a0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x4f23a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4f23a4: 0x0  nop
    ctx->pc = 0x4f23a4u;
    // NOP
label_4f23a8:
    // 0x4f23a8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x4f23a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4f23ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4f23acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4f23b0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4f23b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4f23b4: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4F23B4u;
    {
        const bool branch_taken_0x4f23b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F23B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F23B4u;
        // 0x4f23b8: 0xad240000  sw          $a0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f23b4) {
            ctx->pc = 0x4F23DCu;
            goto label_4f23dc;
        }
    }
    ctx->pc = 0x4F23BCu;
    // 0x4f23bc: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x4f23bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x4f23c0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4f23c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4f23c4: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x4f23c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4f23c8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4f23c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4f23cc: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4f23ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x4f23d0: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x4f23d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4f23d4: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x4F23D4u;
    {
        const bool branch_taken_0x4f23d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f23d4) {
            ctx->pc = 0x4F23D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F23D4u;
            // 0x4f23d8: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F23A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f23a8;
        }
    }
    ctx->pc = 0x4F23DCu;
label_4f23dc:
    // 0x4f23dc: 0x3e00008  jr          $ra
    ctx->pc = 0x4F23DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F23E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F23DCu;
        // 0x4f23e0: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F23DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F23E4u;
    // 0x4f23e4: 0x0  nop
    ctx->pc = 0x4f23e4u;
    // NOP
    ctx->pc = 0x4f23e8u;
}
