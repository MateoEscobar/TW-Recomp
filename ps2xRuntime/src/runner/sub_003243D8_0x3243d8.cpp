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

// Function: sub_003243D8
// Address: 0x3243d8 - 0x324438
void sub_003243D8_0x3243d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003243D8_0x3243d8");
#endif

    switch (ctx->pc) {
        case 0x324400u: goto label_324400;
        case 0x324418u: goto label_324418;
        default: break;
    }

    ctx->pc = 0x3243d8u;

    // 0x3243d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3243d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3243dc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3243dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3243e0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3243e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3243e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3243e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3243e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3243e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3243ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3243ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3243f0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3243f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3243f4: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x3243f4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3243f8: 0xc0cd03e  jal         func_3340F8
    ctx->pc = 0x3243F8u;
    SET_GPR_U32(ctx, 31, 0x324400u);
    ctx->pc = 0x3243FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3243F8u;
    // 0x3243fc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3340F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3340F8u, 0x3243F8u, 0x324400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324400u;
label_324400:
    // 0x324400: 0x118900  sll         $s1, $s1, 4
    ctx->pc = 0x324400u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x324404: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x324404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324408: 0x2631fff0  addiu       $s1, $s1, -0x10
    ctx->pc = 0x324408u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    // 0x32440c: 0x2519023  subu        $s2, $s2, $s1
    ctx->pc = 0x32440cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x324410: 0xc0ca864  jal         func_32A190
    ctx->pc = 0x324410u;
    SET_GPR_U32(ctx, 31, 0x324418u);
    ctx->pc = 0x324414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324410u;
    // 0x324414: 0xae120000  sw          $s2, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A190u, 0x324410u, 0x324418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324418u;
label_324418:
    // 0x324418: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x324418u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32441c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x32441cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x324420: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x324420u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x324424: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x324424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x324428: 0x3e00008  jr          $ra
    ctx->pc = 0x324428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32442Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324428u;
        // 0x32442c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324430u;
    // 0x324430: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x324430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x324434: 0x0  nop
    ctx->pc = 0x324434u;
    // NOP
    ctx->pc = 0x324438u;
}
