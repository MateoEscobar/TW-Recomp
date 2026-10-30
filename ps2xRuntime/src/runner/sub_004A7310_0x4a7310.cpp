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

// Function: sub_004A7310
// Address: 0x4a7310 - 0x4a73a8
void sub_004A7310_0x4a7310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A7310_0x4a7310");
#endif

    ctx->pc = 0x4a7310u;

    // 0x4a7310: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x4a7310u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a7314: 0x11000022  beqz        $t0, . + 4 + (0x22 << 2)
    ctx->pc = 0x4A7314u;
    {
        const bool branch_taken_0x4a7314 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7314u;
        // 0x4a7318: 0xa0482d  daddu       $t1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7314) {
            ctx->pc = 0x4A73A0u;
            goto label_4a73a0;
        }
    }
    ctx->pc = 0x4A731Cu;
    // 0x4a731c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4a731cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4a7320: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x4A7320u;
    {
        const bool branch_taken_0x4a7320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a7320) {
            ctx->pc = 0x4A73A0u;
            goto label_4a73a0;
        }
    }
    ctx->pc = 0x4A7328u;
    // 0x4a7328: 0x1120001d  beqz        $t1, . + 4 + (0x1D << 2)
    ctx->pc = 0x4A7328u;
    {
        const bool branch_taken_0x4a7328 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a7328) {
            ctx->pc = 0x4A73A0u;
            goto label_4a73a0;
        }
    }
    ctx->pc = 0x4A7330u;
    // 0x4a7330: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4a7330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4a7334: 0x8d2a0000  lw          $t2, 0x0($t1)
    ctx->pc = 0x4a7334u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4a7338: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a7338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a733c: 0x15420018  bne         $t2, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x4A733Cu;
    {
        const bool branch_taken_0x4a733c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        if (branch_taken_0x4a733c) {
            ctx->pc = 0x4A73A0u;
            goto label_4a73a0;
        }
    }
    ctx->pc = 0x4A7344u;
    // 0x4a7344: 0x10c00016  beqz        $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x4A7344u;
    {
        const bool branch_taken_0x4a7344 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a7344) {
            ctx->pc = 0x4A73A0u;
            goto label_4a73a0;
        }
    }
    ctx->pc = 0x4A734Cu;
    // 0x4a734c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4a734cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a7350: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x4A7350u;
    {
        const bool branch_taken_0x4a7350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7350u;
        // 0x4a7354: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7350) {
            ctx->pc = 0x4A73A0u;
            goto label_4a73a0;
        }
    }
    ctx->pc = 0x4A7358u;
    // 0x4a7358: 0x8d050008  lw          $a1, 0x8($t0)
    ctx->pc = 0x4a7358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x4a735c: 0x3c03cccc  lui         $v1, 0xCCCC
    ctx->pc = 0x4a735cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52428 << 16));
    // 0x4a7360: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x4a7360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x4a7364: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x4a7364u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x4a7368: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4a7368u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4a736c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x4a736cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4a7370: 0x218c3  sra         $v1, $v0, 3
    ctx->pc = 0x4a7370u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
    // 0x4a7374: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x4a7374u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4a7378: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x4a7378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4a737c: 0x14860004  bne         $a0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A737Cu;
    {
        const bool branch_taken_0x4a737c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x4A7380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A737Cu;
        // 0x4a7380: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a737c) {
            ctx->pc = 0x4A7390u;
            goto label_4a7390;
        }
    }
    ctx->pc = 0x4A7384u;
    // 0x4a7384: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4a7384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x4a7388: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x4a7388u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4a738c: 0x62380b  movn        $a3, $v1, $v0
    ctx->pc = 0x4a738cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
label_4a7390:
    // 0x4a7390: 0x10ea0003  beq         $a3, $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A7390u;
    {
        const bool branch_taken_0x4a7390 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 10));
        ctx->pc = 0x4A7394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7390u;
        // 0x4a7394: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7390) {
            ctx->pc = 0x4A73A0u;
            goto label_4a73a0;
        }
    }
    ctx->pc = 0x4A7398u;
    // 0x4a7398: 0x3e00008  jr          $ra
    ctx->pc = 0x4A7398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A739Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7398u;
        // 0x4a739c: 0xad270000  sw          $a3, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A7398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A73A0u;
label_4a73a0:
    // 0x4a73a0: 0x3e00008  jr          $ra
    ctx->pc = 0x4A73A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A73A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A73A0u;
        // 0x4a73a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A73A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A73A8u;
}
