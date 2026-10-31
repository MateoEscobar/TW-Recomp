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

// Function: sub_00269B18
// Address: 0x269b18 - 0x269b80
void sub_00269B18_0x269b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00269B18_0x269b18");
#endif

    switch (ctx->pc) {
        case 0x269b3cu: goto label_269b3c;
        case 0x269b58u: goto label_269b58;
        case 0x269b64u: goto label_269b64;
        default: break;
    }

    ctx->pc = 0x269b18u;

    // 0x269b18: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x269b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x269b1c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x269b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x269b20: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x269b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x269b24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x269b24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269b28: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x269b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x269b2c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x269b2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269b30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x269b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x269b34: 0xc0e409a  jal         func_390268
    ctx->pc = 0x269B34u;
    SET_GPR_U32(ctx, 31, 0x269B3Cu);
    ctx->pc = 0x269B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269B34u;
    // 0x269b38: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x269B34u, 0x269B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269B3Cu;
label_269b3c:
    // 0x269b3c: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x269b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x269b40: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x269b40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269b44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x269b44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269b48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x269b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269b4c: 0xa4600118  sh          $zero, 0x118($v1)
    ctx->pc = 0x269b4cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 280), (uint16_t)GPR_U32(ctx, 0));
    // 0x269b50: 0xc08b47e  jal         func_22D1F8
    ctx->pc = 0x269B50u;
    SET_GPR_U32(ctx, 31, 0x269B58u);
    ctx->pc = 0x269B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269B50u;
    // 0x269b54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D1F8u, 0x269B50u, 0x269B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269B58u;
label_269b58:
    // 0x269b58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x269b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269b5c: 0xc09a6ac  jal         func_269AB0
    ctx->pc = 0x269B5Cu;
    SET_GPR_U32(ctx, 31, 0x269B64u);
    ctx->pc = 0x269B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269B5Cu;
    // 0x269b60: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269AB0u, 0x269B5Cu, 0x269B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269B64u;
label_269b64:
    // 0x269b64: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x269b64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x269b68: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x269b68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x269b6c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x269b6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x269b70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x269b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x269b74: 0x3e00008  jr          $ra
    ctx->pc = 0x269B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269B74u;
        // 0x269b78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269B74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x269B7Cu;
    // 0x269b7c: 0x0  nop
    ctx->pc = 0x269b7cu;
    // NOP
    ctx->pc = 0x269b80u;
}
