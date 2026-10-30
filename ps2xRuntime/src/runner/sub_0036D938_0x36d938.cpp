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

// Function: sub_0036D938
// Address: 0x36d938 - 0x36d990
void sub_0036D938_0x36d938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036D938_0x36d938");
#endif

    switch (ctx->pc) {
        case 0x36d954u: goto label_36d954;
        case 0x36d95cu: goto label_36d95c;
        case 0x36d96cu: goto label_36d96c;
        case 0x36d978u: goto label_36d978;
        default: break;
    }

    ctx->pc = 0x36d938u;

    // 0x36d938: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36d938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36d93c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36d93cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d940: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x36d940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x36d944: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36d944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36d948: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36d948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36d94c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36D94Cu;
    SET_GPR_U32(ctx, 31, 0x36D954u);
    ctx->pc = 0x36D950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D94Cu;
    // 0x36d950: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36D94Cu, 0x36D954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D954u;
label_36d954:
    // 0x36d954: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36D954u;
    SET_GPR_U32(ctx, 31, 0x36D95Cu);
    ctx->pc = 0x36D958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D954u;
    // 0x36d958: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36D954u, 0x36D95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D95Cu;
label_36d95c:
    // 0x36d95c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x36d95cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x36d960: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x36d960u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x36d964: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x36D964u;
    SET_GPR_U32(ctx, 31, 0x36D96Cu);
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x36D964u, 0x36D96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D96Cu;
label_36d96c:
    // 0x36d96c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36d96cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d970: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x36D970u;
    SET_GPR_U32(ctx, 31, 0x36D978u);
    ctx->pc = 0x36D974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D970u;
    // 0x36d974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x36D970u, 0x36D978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D978u;
label_36d978:
    // 0x36d978: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x36d978u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36d97c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36d97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36d980: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36d980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d984: 0x3e00008  jr          $ra
    ctx->pc = 0x36D984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D984u;
        // 0x36d988: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D98Cu;
    // 0x36d98c: 0x0  nop
    ctx->pc = 0x36d98cu;
    // NOP
    ctx->pc = 0x36d990u;
}
