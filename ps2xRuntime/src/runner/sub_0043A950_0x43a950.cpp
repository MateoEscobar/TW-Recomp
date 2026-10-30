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

// Function: sub_0043A950
// Address: 0x43a950 - 0x43a9b0
void sub_0043A950_0x43a950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043A950_0x43a950");
#endif

    switch (ctx->pc) {
        case 0x43a978u: goto label_43a978;
        default: break;
    }

    ctx->pc = 0x43a950u;

    // 0x43a950: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x43a950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x43a954: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x43a954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x43a958: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x43a958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x43a95c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x43a95cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a960: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x43a960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a964: 0x3c110059  lui         $s1, 0x59
    ctx->pc = 0x43a964u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)89 << 16));
    // 0x43a968: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x43a968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x43a96c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x43a96cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a970: 0xc10f614  jal         func_43D850
    ctx->pc = 0x43A970u;
    SET_GPR_U32(ctx, 31, 0x43A978u);
    ctx->pc = 0x43A974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A970u;
    // 0x43a974: 0xae2071d8  sw          $zero, 0x71D8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 29144), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D850u, 0x43A970u, 0x43A978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A978u;
label_43a978:
    // 0x43a978: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x43a978u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a97c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x43a97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x43a980: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x43A980u;
    {
        const bool branch_taken_0x43a980 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x43a980) {
            ctx->pc = 0x43A984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43A980u;
            // 0x43a984: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43A998u;
            goto label_43a998;
        }
    }
    ctx->pc = 0x43A988u;
    // 0x43a988: 0x8e2271d8  lw          $v0, 0x71D8($s1)
    ctx->pc = 0x43a988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 29144)));
    // 0x43a98c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x43A98Cu;
    {
        const bool branch_taken_0x43a98c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43a98c) {
            ctx->pc = 0x43A990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43A98Cu;
            // 0x43a990: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43A994u;
            goto label_43a994;
        }
    }
    ctx->pc = 0x43A994u;
label_43a994:
    // 0x43a994: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x43a994u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_43a998:
    // 0x43a998: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x43a998u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a99c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x43a99cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43a9a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x43a9a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43a9a4: 0x3e00008  jr          $ra
    ctx->pc = 0x43A9A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43A9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43A9A4u;
        // 0x43a9a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43A9A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43A9ACu;
    // 0x43a9ac: 0x0  nop
    ctx->pc = 0x43a9acu;
    // NOP
    ctx->pc = 0x43a9b0u;
}
