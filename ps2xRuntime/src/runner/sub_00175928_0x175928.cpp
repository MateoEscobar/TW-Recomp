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

// Function: sub_00175928
// Address: 0x175928 - 0x175980
void sub_00175928_0x175928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175928_0x175928");
#endif

    switch (ctx->pc) {
        case 0x175944u: goto label_175944;
        case 0x175958u: goto label_175958;
        case 0x175968u: goto label_175968;
        default: break;
    }

    ctx->pc = 0x175928u;

    // 0x175928: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x175928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17592c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17592cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x175930: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x175930u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175934: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x175934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x175938: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x175938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17593c: 0xc05d610  jal         func_175840
    ctx->pc = 0x17593Cu;
    SET_GPR_U32(ctx, 31, 0x175944u);
    ctx->pc = 0x175940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17593Cu;
    // 0x175940: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175840u, 0x17593Cu, 0x175944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175944u;
label_175944:
    // 0x175944: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x175944u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x175948: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x175948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17594c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x17594cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x175950: 0xc05d610  jal         func_175840
    ctx->pc = 0x175950u;
    SET_GPR_U32(ctx, 31, 0x175958u);
    ctx->pc = 0x175954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175950u;
    // 0x175954: 0xac510304  sw          $s1, 0x304($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 772), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175840u, 0x175950u, 0x175958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175958u;
label_175958:
    // 0x175958: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x175958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17595c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17595cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175960: 0xc05d612  jal         func_175848
    ctx->pc = 0x175960u;
    SET_GPR_U32(ctx, 31, 0x175968u);
    ctx->pc = 0x175964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175960u;
    // 0x175964: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x175848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175848u, 0x175960u, 0x175968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175968u;
label_175968:
    // 0x175968: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x175968u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17596c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17596cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175970: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x175970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175974: 0x3e00008  jr          $ra
    ctx->pc = 0x175974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175974u;
        // 0x175978: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17597Cu;
    // 0x17597c: 0x0  nop
    ctx->pc = 0x17597cu;
    // NOP
    ctx->pc = 0x175980u;
}
