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

// Function: sub_0042E058
// Address: 0x42e058 - 0x42e158
void sub_0042E058_0x42e058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042E058_0x42e058");
#endif

    switch (ctx->pc) {
        case 0x42e0b0u: goto label_42e0b0;
        case 0x42e0f0u: goto label_42e0f0;
        default: break;
    }

    ctx->pc = 0x42e058u;

    // 0x42e058: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x42e058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x42e05c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x42e05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x42e060: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x42e060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x42e064: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x42e064u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42e068: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x42e068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x42e06c: 0x8cb80004  lw          $t8, 0x4($a1)
    ctx->pc = 0x42e06cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x42e070: 0x13000033  beqz        $t8, . + 4 + (0x33 << 2)
    ctx->pc = 0x42E070u;
    {
        const bool branch_taken_0x42e070 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x42E074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E070u;
        // 0x42e074: 0x300682d  daddu       $t5, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e070) {
            ctx->pc = 0x42E140u;
            goto label_42e140;
        }
    }
    ctx->pc = 0x42E078u;
    // 0x42e078: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x42e078u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x42e07c: 0x182080  sll         $a0, $t8, 2
    ctx->pc = 0x42e07cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 24), 2));
    // 0x42e080: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x42e080u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x42e084: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x42e084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x42e088: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x42e088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x42e08c: 0x320782d  daddu       $t7, $t9, $zero
    ctx->pc = 0x42e08cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42e090: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x42e090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x42e094: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x42e094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x42e098: 0x1e0902d  daddu       $s2, $t7, $zero
    ctx->pc = 0x42e098u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42e09c: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x42e09cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42e0a0: 0x8f2021  addu        $a0, $a0, $t7
    ctx->pc = 0x42e0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x42e0a4: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x42e0a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42e0a8: 0x4f5821  addu        $t3, $v0, $t7
    ctx->pc = 0x42e0a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x42e0ac: 0x0  nop
    ctx->pc = 0x42e0acu;
    // NOP
label_42e0b0:
    // 0x42e0b0: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x42e0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x42e0b4: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x42e0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x42e0b8: 0x8cae0000  lw          $t6, 0x0($a1)
    ctx->pc = 0x42e0b8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x42e0bc: 0x11200019  beqz        $t1, . + 4 + (0x19 << 2)
    ctx->pc = 0x42E0BCu;
    {
        const bool branch_taken_0x42e0bc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x42E0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E0BCu;
        // 0x42e0c0: 0x25adffff  addiu       $t5, $t5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e0bc) {
            ctx->pc = 0x42E124u;
            goto label_42e124;
        }
    }
    ctx->pc = 0x42E0C4u;
    // 0x42e0c4: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x42e0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x42e0c8: 0x8dc60008  lw          $a2, 0x8($t6)
    ctx->pc = 0x42e0c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x42e0cc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x42e0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x42e0d0: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x42e0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x42e0d4: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x42E0D4u;
    {
        const bool branch_taken_0x42e0d4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x42E0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E0D4u;
        // 0x42e0d8: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e0d4) {
            ctx->pc = 0x42E124u;
            goto label_42e124;
        }
    }
    ctx->pc = 0x42E0DCu;
    // 0x42e0dc: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x42e0dcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42e0e0: 0x444021  addu        $t0, $v0, $a0
    ctx->pc = 0x42e0e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x42e0e4: 0x1593821  addu        $a3, $t2, $t9
    ctx->pc = 0x42e0e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 25)));
    // 0x42e0e8: 0x1523021  addu        $a2, $t2, $s2
    ctx->pc = 0x42e0e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 18)));
    // 0x42e0ec: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x42e0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_42e0f0:
    // 0x42e0f0: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x42e0f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x42e0f4: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x42e0f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x42e0f8: 0x256bfffc  addiu       $t3, $t3, -0x4
    ctx->pc = 0x42e0f8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
    // 0x42e0fc: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x42e0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x42e100: 0x254afffc  addiu       $t2, $t2, -0x4
    ctx->pc = 0x42e100u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
    // 0x42e104: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x42e104u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x42e108: 0x11200006  beqz        $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x42E108u;
    {
        const bool branch_taken_0x42e108 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x42E10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E108u;
        // 0x42e10c: 0x2508fffc  addiu       $t0, $t0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e108) {
            ctx->pc = 0x42E124u;
            goto label_42e124;
        }
    }
    ctx->pc = 0x42E110u;
    // 0x42e110: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x42e110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x42e114: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x42e114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x42e118: 0x4c1023  subu        $v0, $v0, $t4
    ctx->pc = 0x42e118u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x42e11c: 0x5c40fff4  bgtzl       $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x42E11Cu;
    {
        const bool branch_taken_0x42e11c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x42e11c) {
            ctx->pc = 0x42E120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42E11Cu;
            // 0x42e120: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42E0F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42e0f0;
        }
    }
    ctx->pc = 0x42E124u;
label_42e124:
    // 0x42e124: 0x12d1021  addu        $v0, $t1, $t5
    ctx->pc = 0x42e124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
    // 0x42e128: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x42e128u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x42e12c: 0x4f1021  addu        $v0, $v0, $t7
    ctx->pc = 0x42e12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x42e130: 0x15a0ffdf  bnez        $t5, . + 4 + (-0x21 << 2)
    ctx->pc = 0x42E130u;
    {
        const bool branch_taken_0x42e130 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x42E134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E130u;
        // 0x42e134: 0xac4e0000  sw          $t6, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e130) {
            ctx->pc = 0x42E0B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42e0b0;
        }
    }
    ctx->pc = 0x42E138u;
    // 0x42e138: 0x2181021  addu        $v0, $s0, $t8
    ctx->pc = 0x42e138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 24)));
    // 0x42e13c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x42e13cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_42e140:
    // 0x42e140: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x42e140u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x42e144: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x42e144u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42e148: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x42e148u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42e14c: 0x3e00008  jr          $ra
    ctx->pc = 0x42E14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42E150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E14Cu;
        // 0x42e150: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42E14Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42E154u;
    // 0x42e154: 0x0  nop
    ctx->pc = 0x42e154u;
    // NOP
    ctx->pc = 0x42e158u;
}
