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

// Function: sub_00379900
// Address: 0x379900 - 0x379978
void sub_00379900_0x379900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00379900_0x379900");
#endif

    switch (ctx->pc) {
        case 0x379928u: goto label_379928;
        case 0x379930u: goto label_379930;
        case 0x379944u: goto label_379944;
        case 0x37994cu: goto label_37994c;
        case 0x379958u: goto label_379958;
        default: break;
    }

    ctx->pc = 0x379900u;

    // 0x379900: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x379900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x379904: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x379904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379908: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x379908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x37990c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x37990cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x379910: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x379910u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379914: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x379914u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379918: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x379918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x37991c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37991cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x379920: 0xc102472  jal         func_4091C8
    ctx->pc = 0x379920u;
    SET_GPR_U32(ctx, 31, 0x379928u);
    ctx->pc = 0x379924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379920u;
    // 0x379924: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x379920u, 0x379928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379928u;
label_379928:
    // 0x379928: 0xc10b108  jal         func_42C420
    ctx->pc = 0x379928u;
    SET_GPR_U32(ctx, 31, 0x379930u);
    ctx->pc = 0x37992Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379928u;
    // 0x37992c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x379928u, 0x379930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379930u;
label_379930:
    // 0x379930: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x379930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379934: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x379934u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379938: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x379938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37993c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37993Cu;
    SET_GPR_U32(ctx, 31, 0x379944u);
    ctx->pc = 0x379940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37993Cu;
    // 0x379940: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37993Cu, 0x379944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379944u;
label_379944:
    // 0x379944: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x379944u;
    SET_GPR_U32(ctx, 31, 0x37994Cu);
    ctx->pc = 0x379948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379944u;
    // 0x379948: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x379944u, 0x37994Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37994Cu;
label_37994c:
    // 0x37994c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37994cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379950: 0xc0e5b8a  jal         func_396E28
    ctx->pc = 0x379950u;
    SET_GPR_U32(ctx, 31, 0x379958u);
    ctx->pc = 0x379954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379950u;
    // 0x379954: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396E28u, 0x379950u, 0x379958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379958u;
label_379958:
    // 0x379958: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x379958u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37995c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37995cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379960: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x379960u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x379964: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x379964u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x379968: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x379968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37996c: 0x3e00008  jr          $ra
    ctx->pc = 0x37996Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x379970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37996Cu;
        // 0x379970: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37996Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x379974u;
    // 0x379974: 0x0  nop
    ctx->pc = 0x379974u;
    // NOP
    ctx->pc = 0x379978u;
}
