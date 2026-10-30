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

// Function: sub_003702F0
// Address: 0x3702f0 - 0x370368
void sub_003702F0_0x3702f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003702F0_0x3702f0");
#endif

    switch (ctx->pc) {
        case 0x370318u: goto label_370318;
        case 0x370320u: goto label_370320;
        case 0x370338u: goto label_370338;
        case 0x370340u: goto label_370340;
        case 0x37034cu: goto label_37034c;
        default: break;
    }

    ctx->pc = 0x3702f0u;

    // 0x3702f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3702f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3702f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3702f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3702f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3702f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3702fc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3702fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x370300: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x370300u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370304: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x370304u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370308: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x370308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x37030c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37030cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x370310: 0xc102472  jal         func_4091C8
    ctx->pc = 0x370310u;
    SET_GPR_U32(ctx, 31, 0x370318u);
    ctx->pc = 0x370314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370310u;
    // 0x370314: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x370310u, 0x370318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370318u;
label_370318:
    // 0x370318: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x370318u;
    SET_GPR_U32(ctx, 31, 0x370320u);
    ctx->pc = 0x37031Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370318u;
    // 0x37031c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x370318u, 0x370320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370320u;
label_370320:
    // 0x370320: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x370320u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x370324: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x370324u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370328: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x370328u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x37032c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37032cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370330: 0xc102472  jal         func_4091C8
    ctx->pc = 0x370330u;
    SET_GPR_U32(ctx, 31, 0x370338u);
    ctx->pc = 0x370334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370330u;
    // 0x370334: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x370330u, 0x370338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370338u;
label_370338:
    // 0x370338: 0xc10b108  jal         func_42C420
    ctx->pc = 0x370338u;
    SET_GPR_U32(ctx, 31, 0x370340u);
    ctx->pc = 0x37033Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370338u;
    // 0x37033c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x370338u, 0x370340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370340u;
label_370340:
    // 0x370340: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x370340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370344: 0xc106b64  jal         func_41AD90
    ctx->pc = 0x370344u;
    SET_GPR_U32(ctx, 31, 0x37034Cu);
    ctx->pc = 0x370348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370344u;
    // 0x370348: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41AD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41AD90u, 0x370344u, 0x37034Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37034Cu;
label_37034c:
    // 0x37034c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x37034cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x370350: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x370350u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370354: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x370354u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x370358: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x370358u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37035c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37035cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370360: 0x3e00008  jr          $ra
    ctx->pc = 0x370360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370360u;
        // 0x370364: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370368u;
}
