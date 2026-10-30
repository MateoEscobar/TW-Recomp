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

// Function: sub_004B0E48
// Address: 0x4b0e48 - 0x4b0ed0
void sub_004B0E48_0x4b0e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B0E48_0x4b0e48");
#endif

    switch (ctx->pc) {
        case 0x4b0e90u: goto label_4b0e90;
        default: break;
    }

    ctx->pc = 0x4b0e48u;

    // 0x4b0e48: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4b0e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4b0e4c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x4b0e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x4b0e50: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4b0e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4b0e54: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4b0e54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0e58: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4b0e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4b0e5c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x4b0e5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0e60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b0e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b0e64: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4b0e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4b0e68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b0e68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0e6c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x4b0e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x4b0e70: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4B0E70u;
    {
        const bool branch_taken_0x4b0e70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0E70u;
        // 0x4b0e74: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0e70) {
            ctx->pc = 0x4B0E90u;
            goto label_4b0e90;
        }
    }
    ctx->pc = 0x4B0E78u;
    // 0x4b0e78: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4b0e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b0e7c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x4b0e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4b0e80: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B0E80u;
    {
        const bool branch_taken_0x4b0e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b0e80) {
            ctx->pc = 0x4B0E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B0E80u;
            // 0x4b0e84: 0xae13001c  sw          $s3, 0x1C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B0E98u;
            goto label_4b0e98;
        }
    }
    ctx->pc = 0x4B0E88u;
    // 0x4b0e88: 0xc10ceec  jal         func_433BB0
    ctx->pc = 0x4B0E88u;
    SET_GPR_U32(ctx, 31, 0x4B0E90u);
    ctx->pc = 0x433BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433BB0u, 0x4B0E88u, 0x4B0E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0E90u;
label_4b0e90:
    // 0x4b0e90: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4b0e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b0e94: 0xae13001c  sw          $s3, 0x1C($s0)
    ctx->pc = 0x4b0e94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 19));
label_4b0e98:
    // 0x4b0e98: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B0E98u;
    {
        const bool branch_taken_0x4b0e98 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0E98u;
        // 0x4b0e9c: 0xae110020  sw          $s1, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0e98) {
            ctx->pc = 0x4B0EACu;
            goto label_4b0eac;
        }
    }
    ctx->pc = 0x4B0EA0u;
    // 0x4b0ea0: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x4b0ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x4b0ea4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4B0EA4u;
    {
        const bool branch_taken_0x4b0ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0EA4u;
        // 0x4b0ea8: 0x621024  and         $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0ea4) {
            ctx->pc = 0x4B0EB0u;
            goto label_4b0eb0;
        }
    }
    ctx->pc = 0x4B0EACu;
label_4b0eac:
    // 0x4b0eac: 0x34620001  ori         $v0, $v1, 0x1
    ctx->pc = 0x4b0eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_4b0eb0:
    // 0x4b0eb0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4b0eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4b0eb4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4b0eb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b0eb8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x4b0eb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b0ebc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4b0ebcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b0ec0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4b0ec0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b0ec4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b0ec4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b0ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x4B0EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B0ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0EC8u;
        // 0x4b0ecc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B0EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B0ED0u;
}
