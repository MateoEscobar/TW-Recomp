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

// Function: sub_003C6E18
// Address: 0x3c6e18 - 0x3c6ee0
void sub_003C6E18_0x3c6e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C6E18_0x3c6e18");
#endif

    switch (ctx->pc) {
        case 0x3c6e48u: goto label_3c6e48;
        case 0x3c6e70u: goto label_3c6e70;
        case 0x3c6ebcu: goto label_3c6ebc;
        default: break;
    }

    ctx->pc = 0x3c6e18u;

    // 0x3c6e18: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3c6e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3c6e1c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3c6e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3c6e20: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3c6e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3c6e24: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3c6e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3c6e28: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3c6e28u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x3c6e2c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3c6e2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6e30: 0x8e05447c  lw          $a1, 0x447C($s0)
    ctx->pc = 0x3c6e30u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x51447Cu));
    // 0x3c6e34: 0x8c44cd4c  lw          $a0, -0x32B4($v0)
    ctx->pc = 0x3c6e34u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50CD4Cu));
    // 0x3c6e38: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3c6e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3c6e3c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c6e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3c6e40: 0xc0616ac  jal         func_185AB0
    ctx->pc = 0x3C6E40u;
    SET_GPR_U32(ctx, 31, 0x3C6E48u);
    ctx->pc = 0x3C6E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6E40u;
    // 0x3c6e44: 0x52c02  srl         $a1, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x3C6E40u, 0x3C6E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6E48u;
label_3c6e48:
    // 0x3c6e48: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3C6E48u;
    {
        const bool branch_taken_0x3c6e48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c6e48) {
            ctx->pc = 0x3C6E4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C6E48u;
            // 0x3c6e4c: 0xae00447c  sw          $zero, 0x447C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 17532), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C6E50u;
            goto label_3c6e50;
        }
    }
    ctx->pc = 0x3C6E50u;
label_3c6e50:
    // 0x3c6e50: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x3c6e50u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x3c6e54: 0x8e224480  lw          $v0, 0x4480($s1)
    ctx->pc = 0x3c6e54u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x514480u));
    // 0x3c6e58: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3C6E58u;
    {
        const bool branch_taken_0x3c6e58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6E58u;
        // 0x3c6e5c: 0x8e04447c  lw          $a0, 0x447C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6e58) {
            ctx->pc = 0x3C6E80u;
            goto label_3c6e80;
        }
    }
    ctx->pc = 0x3C6E60u;
    // 0x3c6e60: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C6E60u;
    {
        const bool branch_taken_0x3c6e60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c6e60) {
            ctx->pc = 0x3C6E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C6E60u;
            // 0x3c6e64: 0xae204480  sw          $zero, 0x4480($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 17536), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C6E78u;
            goto label_3c6e78;
        }
    }
    ctx->pc = 0x3C6E68u;
    // 0x3c6e68: 0xc0e93de  jal         func_3A4F78
    ctx->pc = 0x3C6E68u;
    SET_GPR_U32(ctx, 31, 0x3C6E70u);
    ctx->pc = 0x3A4F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4F78u, 0x3C6E68u, 0x3C6E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6E70u;
label_3c6e70:
    // 0x3c6e70: 0xae00447c  sw          $zero, 0x447C($s0)
    ctx->pc = 0x3c6e70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 17532), GPR_U32(ctx, 0));
    // 0x3c6e74: 0xae204480  sw          $zero, 0x4480($s1)
    ctx->pc = 0x3c6e74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 17536), GPR_U32(ctx, 0));
label_3c6e78:
    // 0x3c6e78: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3C6E78u;
    {
        const bool branch_taken_0x3c6e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6E78u;
        // 0x3c6e7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6e78) {
            ctx->pc = 0x3C6EC4u;
            goto label_3c6ec4;
        }
    }
    ctx->pc = 0x3C6E80u;
label_3c6e80:
    // 0x3c6e80: 0x8e02447c  lw          $v0, 0x447C($s0)
    ctx->pc = 0x3c6e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17532)));
    // 0x3c6e84: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x3C6E84u;
    {
        const bool branch_taken_0x3c6e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c6e84) {
            ctx->pc = 0x3C6E88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C6E84u;
            // 0x3c6e88: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C6EC8u;
            goto label_3c6ec8;
        }
    }
    ctx->pc = 0x3C6E8Cu;
    // 0x3c6e8c: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x3c6e8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3c6e90: 0x3c04001b  lui         $a0, 0x1B
    ctx->pc = 0x3c6e90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27 << 16));
    // 0x3c6e94: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x3c6e94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x3c6e98: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c6e98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3c6e9c: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x3c6e9cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x3c6ea0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3c6ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x3c6ea4: 0x34840024  ori         $a0, $a0, 0x24
    ctx->pc = 0x3c6ea4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)36);
    // 0x3c6ea8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3c6ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6eac: 0x2406004b  addiu       $a2, $zero, 0x4B
    ctx->pc = 0x3c6eacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x3c6eb0: 0x34e70001  ori         $a3, $a3, 0x1
    ctx->pc = 0x3c6eb0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1);
    // 0x3c6eb4: 0xc0e93a2  jal         func_3A4E88
    ctx->pc = 0x3C6EB4u;
    SET_GPR_U32(ctx, 31, 0x3C6EBCu);
    ctx->pc = 0x3C6EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6EB4u;
    // 0x3c6eb8: 0x240800ff  addiu       $t0, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4E88u, 0x3C6EB4u, 0x3C6EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6EBCu;
label_3c6ebc:
    // 0x3c6ebc: 0xae02447c  sw          $v0, 0x447C($s0)
    ctx->pc = 0x3c6ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 17532), GPR_U32(ctx, 2));
    // 0x3c6ec0: 0x8e02447c  lw          $v0, 0x447C($s0)
    ctx->pc = 0x3c6ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17532)));
label_3c6ec4:
    // 0x3c6ec4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3c6ec4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c6ec8:
    // 0x3c6ec8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3c6ec8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c6ecc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c6eccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c6ed0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c6ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c6ed4: 0x3e00008  jr          $ra
    ctx->pc = 0x3C6ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C6ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6ED4u;
        // 0x3c6ed8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C6ED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C6EDCu;
    // 0x3c6edc: 0x0  nop
    ctx->pc = 0x3c6edcu;
    // NOP
    ctx->pc = 0x3c6ee0u;
}
