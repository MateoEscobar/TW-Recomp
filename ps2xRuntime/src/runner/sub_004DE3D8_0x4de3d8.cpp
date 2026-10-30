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

// Function: sub_004DE3D8
// Address: 0x4de3d8 - 0x4de458
void sub_004DE3D8_0x4de3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DE3D8_0x4de3d8");
#endif

    switch (ctx->pc) {
        case 0x4de3d8u: goto label_4de3d8;
        case 0x4de3dcu: goto label_4de3dc;
        case 0x4de3e0u: goto label_4de3e0;
        case 0x4de3e4u: goto label_4de3e4;
        case 0x4de3e8u: goto label_4de3e8;
        case 0x4de3ecu: goto label_4de3ec;
        case 0x4de3f0u: goto label_4de3f0;
        case 0x4de3f4u: goto label_4de3f4;
        case 0x4de3f8u: goto label_4de3f8;
        case 0x4de3fcu: goto label_4de3fc;
        case 0x4de400u: goto label_4de400;
        case 0x4de404u: goto label_4de404;
        case 0x4de408u: goto label_4de408;
        case 0x4de40cu: goto label_4de40c;
        case 0x4de410u: goto label_4de410;
        case 0x4de414u: goto label_4de414;
        case 0x4de418u: goto label_4de418;
        case 0x4de41cu: goto label_4de41c;
        case 0x4de420u: goto label_4de420;
        case 0x4de424u: goto label_4de424;
        case 0x4de428u: goto label_4de428;
        case 0x4de42cu: goto label_4de42c;
        case 0x4de430u: goto label_4de430;
        case 0x4de434u: goto label_4de434;
        case 0x4de438u: goto label_4de438;
        case 0x4de43cu: goto label_4de43c;
        case 0x4de440u: goto label_4de440;
        case 0x4de444u: goto label_4de444;
        case 0x4de448u: goto label_4de448;
        case 0x4de44cu: goto label_4de44c;
        case 0x4de450u: goto label_4de450;
        case 0x4de454u: goto label_4de454;
        default: break;
    }

    ctx->pc = 0x4de3d8u;

label_4de3d8:
    // 0x4de3d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4de3d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4de3dc:
    // 0x4de3dc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4de3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4de3e0:
    // 0x4de3e0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4de3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4de3e4:
    // 0x4de3e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4de3e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4de3e8:
    // 0x4de3e8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4de3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4de3ec:
    // 0x4de3ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4de3ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4de3f0:
    // 0x4de3f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4de3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4de3f4:
    // 0x4de3f4: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4de3f8:
    if (ctx->pc == 0x4DE3F8u) {
        ctx->pc = 0x4DE3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE3F4u;
        // 0x4de3f8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DE3FCu;
        goto label_4de3fc;
    }
    ctx->pc = 0x4DE3F4u;
    {
        const bool branch_taken_0x4de3f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DE3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE3F4u;
        // 0x4de3f8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4de3f4) {
            ctx->pc = 0x4DE43Cu;
            goto label_4de43c;
        }
    }
    ctx->pc = 0x4DE3FCu;
label_4de3fc:
    // 0x4de3fc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4de3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4de400:
    // 0x4de400: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4de400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4de404:
    // 0x4de404: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x4de404u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_4de408:
    // 0x4de408: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x4de408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4de40c:
    // 0x4de40c: 0x60f809  jalr        $v1
label_4de410:
    if (ctx->pc == 0x4DE410u) {
        ctx->pc = 0x4DE410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE40Cu;
        // 0x4de410: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DE414u;
        goto label_4de414;
    }
    ctx->pc = 0x4DE40Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4DE414u);
        ctx->pc = 0x4DE410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE40Cu;
        // 0x4de410: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DE40Cu, 0x4DE414u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DE414u;
label_4de414:
    // 0x4de414: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4de414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4de418:
    // 0x4de418: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4de418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4de41c:
    // 0x4de41c: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4de41cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4de420:
    // 0x4de420: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4de420u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4de424:
    // 0x4de424: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4de424u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4de428:
    // 0x4de428: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4de428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4de42c:
    // 0x4de42c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4de42cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4de430:
    // 0x4de430: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4de430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4de434:
    // 0x4de434: 0x60f809  jalr        $v1
label_4de438:
    if (ctx->pc == 0x4DE438u) {
        ctx->pc = 0x4DE438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE434u;
        // 0x4de438: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DE43Cu;
        goto label_4de43c;
    }
    ctx->pc = 0x4DE434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4DE43Cu);
        ctx->pc = 0x4DE438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE434u;
        // 0x4de438: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DE434u, 0x4DE43Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DE43Cu;
label_4de43c:
    // 0x4de43c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4de43cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4de440:
    // 0x4de440: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4de440u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4de444:
    // 0x4de444: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4de444u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4de448:
    // 0x4de448: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4de448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4de44c:
    // 0x4de44c: 0x3e00008  jr          $ra
label_4de450:
    if (ctx->pc == 0x4DE450u) {
        ctx->pc = 0x4DE450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE44Cu;
        // 0x4de450: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DE454u;
        goto label_4de454;
    }
    ctx->pc = 0x4DE44Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DE450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE44Cu;
        // 0x4de450: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DE44Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DE454u;
label_4de454:
    // 0x4de454: 0x0  nop
    ctx->pc = 0x4de454u;
    // NOP
    ctx->pc = 0x4de458u;
}
