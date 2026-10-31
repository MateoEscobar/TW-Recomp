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

// Function: sub_00269250
// Address: 0x269250 - 0x2693b0
void sub_00269250_0x269250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00269250_0x269250");
#endif

    switch (ctx->pc) {
        case 0x269250u: goto label_269250;
        case 0x269254u: goto label_269254;
        case 0x269258u: goto label_269258;
        case 0x26925cu: goto label_26925c;
        case 0x269260u: goto label_269260;
        case 0x269264u: goto label_269264;
        case 0x269268u: goto label_269268;
        case 0x26926cu: goto label_26926c;
        case 0x269270u: goto label_269270;
        case 0x269274u: goto label_269274;
        case 0x269278u: goto label_269278;
        case 0x26927cu: goto label_26927c;
        case 0x269280u: goto label_269280;
        case 0x269284u: goto label_269284;
        case 0x269288u: goto label_269288;
        case 0x26928cu: goto label_26928c;
        case 0x269290u: goto label_269290;
        case 0x269294u: goto label_269294;
        case 0x269298u: goto label_269298;
        case 0x26929cu: goto label_26929c;
        case 0x2692a0u: goto label_2692a0;
        case 0x2692a4u: goto label_2692a4;
        case 0x2692a8u: goto label_2692a8;
        case 0x2692acu: goto label_2692ac;
        case 0x2692b0u: goto label_2692b0;
        case 0x2692b4u: goto label_2692b4;
        case 0x2692b8u: goto label_2692b8;
        case 0x2692bcu: goto label_2692bc;
        case 0x2692c0u: goto label_2692c0;
        case 0x2692c4u: goto label_2692c4;
        case 0x2692c8u: goto label_2692c8;
        case 0x2692ccu: goto label_2692cc;
        case 0x2692d0u: goto label_2692d0;
        case 0x2692d4u: goto label_2692d4;
        case 0x2692d8u: goto label_2692d8;
        case 0x2692dcu: goto label_2692dc;
        case 0x2692e0u: goto label_2692e0;
        case 0x2692e4u: goto label_2692e4;
        case 0x2692e8u: goto label_2692e8;
        case 0x2692ecu: goto label_2692ec;
        case 0x2692f0u: goto label_2692f0;
        case 0x2692f4u: goto label_2692f4;
        case 0x2692f8u: goto label_2692f8;
        case 0x2692fcu: goto label_2692fc;
        case 0x269300u: goto label_269300;
        case 0x269304u: goto label_269304;
        case 0x269308u: goto label_269308;
        case 0x26930cu: goto label_26930c;
        case 0x269310u: goto label_269310;
        case 0x269314u: goto label_269314;
        case 0x269318u: goto label_269318;
        case 0x26931cu: goto label_26931c;
        case 0x269320u: goto label_269320;
        case 0x269324u: goto label_269324;
        case 0x269328u: goto label_269328;
        case 0x26932cu: goto label_26932c;
        case 0x269330u: goto label_269330;
        case 0x269334u: goto label_269334;
        case 0x269338u: goto label_269338;
        case 0x26933cu: goto label_26933c;
        case 0x269340u: goto label_269340;
        case 0x269344u: goto label_269344;
        case 0x269348u: goto label_269348;
        case 0x26934cu: goto label_26934c;
        case 0x269350u: goto label_269350;
        case 0x269354u: goto label_269354;
        case 0x269358u: goto label_269358;
        case 0x26935cu: goto label_26935c;
        case 0x269360u: goto label_269360;
        case 0x269364u: goto label_269364;
        case 0x269368u: goto label_269368;
        case 0x26936cu: goto label_26936c;
        case 0x269370u: goto label_269370;
        case 0x269374u: goto label_269374;
        case 0x269378u: goto label_269378;
        case 0x26937cu: goto label_26937c;
        case 0x269380u: goto label_269380;
        case 0x269384u: goto label_269384;
        case 0x269388u: goto label_269388;
        case 0x26938cu: goto label_26938c;
        case 0x269390u: goto label_269390;
        case 0x269394u: goto label_269394;
        case 0x269398u: goto label_269398;
        case 0x26939cu: goto label_26939c;
        case 0x2693a0u: goto label_2693a0;
        case 0x2693a4u: goto label_2693a4;
        case 0x2693a8u: goto label_2693a8;
        case 0x2693acu: goto label_2693ac;
        default: break;
    }

    ctx->pc = 0x269250u;

label_269250:
    // 0x269250: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x269250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_269254:
    // 0x269254: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x269254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_269258:
    // 0x269258: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x269258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_26925c:
    // 0x26925c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x26925cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_269260:
    // 0x269260: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x269260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_269264:
    // 0x269264: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x269264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_269268:
    // 0x269268: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x269268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_26926c:
    // 0x26926c: 0xc08bf92  jal         func_22FE48
label_269270:
    if (ctx->pc == 0x269270u) {
        ctx->pc = 0x269270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26926Cu;
        // 0x269270: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269274u;
        goto label_269274;
    }
    ctx->pc = 0x26926Cu;
    SET_GPR_U32(ctx, 31, 0x269274u);
    ctx->pc = 0x269270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26926Cu;
    // 0x269270: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE48u, 0x26926Cu, 0x269274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269274u;
label_269274:
    // 0x269274: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x269274u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_269278:
    // 0x269278: 0x8e3400d8  lw          $s4, 0xD8($s1)
    ctx->pc = 0x269278u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_26927c:
    // 0x26927c: 0x2610df28  addiu       $s0, $s0, -0x20D8
    ctx->pc = 0x26927cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958888));
label_269280:
    // 0x269280: 0xc041532  jal         func_1054C8
label_269284:
    if (ctx->pc == 0x269284u) {
        ctx->pc = 0x269284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269280u;
        // 0x269284: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269288u;
        goto label_269288;
    }
    ctx->pc = 0x269280u;
    SET_GPR_U32(ctx, 31, 0x269288u);
    ctx->pc = 0x269284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269280u;
    // 0x269284: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x269280u, 0x269288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269288u;
label_269288:
    // 0x269288: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x269288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26928c:
    // 0x26928c: 0xc041532  jal         func_1054C8
label_269290:
    if (ctx->pc == 0x269290u) {
        ctx->pc = 0x269290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26928Cu;
        // 0x269290: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269294u;
        goto label_269294;
    }
    ctx->pc = 0x26928Cu;
    SET_GPR_U32(ctx, 31, 0x269294u);
    ctx->pc = 0x269290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26928Cu;
    // 0x269290: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26928Cu, 0x269294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269294u;
label_269294:
    // 0x269294: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x269294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_269298:
    // 0x269298: 0xc041532  jal         func_1054C8
label_26929c:
    if (ctx->pc == 0x26929Cu) {
        ctx->pc = 0x26929Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269298u;
        // 0x26929c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2692A0u;
        goto label_2692a0;
    }
    ctx->pc = 0x269298u;
    SET_GPR_U32(ctx, 31, 0x2692A0u);
    ctx->pc = 0x26929Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269298u;
    // 0x26929c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x269298u, 0x2692A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2692A0u;
label_2692a0:
    // 0x2692a0: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_2692a4:
    if (ctx->pc == 0x2692A4u) {
        ctx->pc = 0x2692A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2692A0u;
        // 0x2692a4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2692A8u;
        goto label_2692a8;
    }
    ctx->pc = 0x2692A0u;
    {
        const bool branch_taken_0x2692a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2692A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2692A0u;
        // 0x2692a4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2692a0) {
            ctx->pc = 0x2692C8u;
            goto label_2692c8;
        }
    }
    ctx->pc = 0x2692A8u;
label_2692a8:
    // 0x2692a8: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x2692a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_2692ac:
    // 0x2692ac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2692acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2692b0:
    // 0x2692b0: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x2692b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2692b4:
    // 0x2692b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2692b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2692b8:
    // 0x2692b8: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x2692b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2692bc:
    // 0x2692bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2692bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2692c0:
    // 0x2692c0: 0xc04159e  jal         func_105678
label_2692c4:
    if (ctx->pc == 0x2692C4u) {
        ctx->pc = 0x2692C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2692C0u;
        // 0x2692c4: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2692C8u;
        goto label_2692c8;
    }
    ctx->pc = 0x2692C0u;
    SET_GPR_U32(ctx, 31, 0x2692C8u);
    ctx->pc = 0x2692C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2692C0u;
    // 0x2692c4: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x2692C0u, 0x2692C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2692C8u;
label_2692c8:
    // 0x2692c8: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x2692c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_2692cc:
    // 0x2692cc: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2692ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2692d0:
    // 0x2692d0: 0x12600011  beqz        $s3, . + 4 + (0x11 << 2)
label_2692d4:
    if (ctx->pc == 0x2692D4u) {
        ctx->pc = 0x2692D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2692D0u;
        // 0x2692d4: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2692D8u;
        goto label_2692d8;
    }
    ctx->pc = 0x2692D0u;
    {
        const bool branch_taken_0x2692d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2692D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2692D0u;
        // 0x2692d4: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2692d0) {
            ctx->pc = 0x269318u;
            goto label_269318;
        }
    }
    ctx->pc = 0x2692D8u;
label_2692d8:
    // 0x2692d8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2692d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2692dc:
    // 0x2692dc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2692dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2692e0:
    // 0x2692e0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2692e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2692e4:
    // 0x2692e4: 0x40f809  jalr        $v0
label_2692e8:
    if (ctx->pc == 0x2692E8u) {
        ctx->pc = 0x2692E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2692E4u;
        // 0x2692e8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2692ECu;
        goto label_2692ec;
    }
    ctx->pc = 0x2692E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2692ECu);
        ctx->pc = 0x2692E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2692E4u;
        // 0x2692e8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2692E4u, 0x2692ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2692ECu;
label_2692ec:
    // 0x2692ec: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2692ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2692f0:
    // 0x2692f0: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x2692f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_2692f4:
    // 0x2692f4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2692f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2692f8:
    // 0x2692f8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2692f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2692fc:
    // 0x2692fc: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2692fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_269300:
    // 0x269300: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x269300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_269304:
    // 0x269304: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x269304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_269308:
    // 0x269308: 0x2406008a  addiu       $a2, $zero, 0x8A
    ctx->pc = 0x269308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
label_26930c:
    // 0x26930c: 0x3c084000  lui         $t0, 0x4000
    ctx->pc = 0x26930cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16384 << 16));
label_269310:
    // 0x269310: 0xc041664  jal         func_105990
label_269314:
    if (ctx->pc == 0x269314u) {
        ctx->pc = 0x269314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269310u;
        // 0x269314: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269318u;
        goto label_269318;
    }
    ctx->pc = 0x269310u;
    SET_GPR_U32(ctx, 31, 0x269318u);
    ctx->pc = 0x269314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269310u;
    // 0x269314: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x269310u, 0x269318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269318u;
label_269318:
    // 0x269318: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_26931c:
    if (ctx->pc == 0x26931Cu) {
        ctx->pc = 0x26931Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269318u;
        // 0x26931c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269320u;
        goto label_269320;
    }
    ctx->pc = 0x269318u;
    {
        const bool branch_taken_0x269318 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x26931Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269318u;
        // 0x26931c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269318) {
            ctx->pc = 0x269340u;
            goto label_269340;
        }
    }
    ctx->pc = 0x269320u;
label_269320:
    // 0x269320: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x269320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_269324:
    // 0x269324: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x269324u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_269328:
    // 0x269328: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x269328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26932c:
    // 0x26932c: 0x3c013e08  lui         $at, 0x3E08
    ctx->pc = 0x26932cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15880 << 16));
label_269330:
    // 0x269330: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x269330u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_269334:
    // 0x269334: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x269334u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_269338:
    // 0x269338: 0xc041b20  jal         func_106C80
label_26933c:
    if (ctx->pc == 0x26933Cu) {
        ctx->pc = 0x26933Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269338u;
        // 0x26933c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269340u;
        goto label_269340;
    }
    ctx->pc = 0x269338u;
    SET_GPR_U32(ctx, 31, 0x269340u);
    ctx->pc = 0x26933Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269338u;
    // 0x26933c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x269338u, 0x269340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269340u;
label_269340:
    // 0x269340: 0xc05d484  jal         func_175210
label_269344:
    if (ctx->pc == 0x269344u) {
        ctx->pc = 0x269344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269340u;
        // 0x269344: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269348u;
        goto label_269348;
    }
    ctx->pc = 0x269340u;
    SET_GPR_U32(ctx, 31, 0x269348u);
    ctx->pc = 0x269344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269340u;
    // 0x269344: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x269340u, 0x269348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269348u;
label_269348:
    // 0x269348: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x269348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26934c:
    // 0x26934c: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x26934cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_269350:
    // 0x269350: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x269350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_269354:
    // 0x269354: 0xa0f809  jalr        $a1
label_269358:
    if (ctx->pc == 0x269358u) {
        ctx->pc = 0x269358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269354u;
        // 0x269358: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26935Cu;
        goto label_26935c;
    }
    ctx->pc = 0x269354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x26935Cu);
        ctx->pc = 0x269358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269354u;
        // 0x269358: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269354u, 0x26935Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26935Cu;
label_26935c:
    // 0x26935c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26935cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_269360:
    // 0x269360: 0xc087016  jal         func_21C058
label_269364:
    if (ctx->pc == 0x269364u) {
        ctx->pc = 0x269364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269360u;
        // 0x269364: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269368u;
        goto label_269368;
    }
    ctx->pc = 0x269360u;
    SET_GPR_U32(ctx, 31, 0x269368u);
    ctx->pc = 0x269364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269360u;
    // 0x269364: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x269360u, 0x269368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269368u;
label_269368:
    // 0x269368: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x269368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26936c:
    // 0x26936c: 0xc05d53a  jal         func_1754E8
label_269370:
    if (ctx->pc == 0x269370u) {
        ctx->pc = 0x269370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26936Cu;
        // 0x269370: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269374u;
        goto label_269374;
    }
    ctx->pc = 0x26936Cu;
    SET_GPR_U32(ctx, 31, 0x269374u);
    ctx->pc = 0x269370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26936Cu;
    // 0x269370: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x26936Cu, 0x269374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269374u;
label_269374:
    // 0x269374: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x269374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_269378:
    // 0x269378: 0xc05d4f6  jal         func_1753D8
label_26937c:
    if (ctx->pc == 0x26937Cu) {
        ctx->pc = 0x26937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269378u;
        // 0x26937c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269380u;
        goto label_269380;
    }
    ctx->pc = 0x269378u;
    SET_GPR_U32(ctx, 31, 0x269380u);
    ctx->pc = 0x26937Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269378u;
    // 0x26937c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x269378u, 0x269380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269380u;
label_269380:
    // 0x269380: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x269380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_269384:
    // 0x269384: 0xc089990  jal         func_226640
label_269388:
    if (ctx->pc == 0x269388u) {
        ctx->pc = 0x269388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269384u;
        // 0x269388: 0x3c054000  lui         $a1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26938Cu;
        goto label_26938c;
    }
    ctx->pc = 0x269384u;
    SET_GPR_U32(ctx, 31, 0x26938Cu);
    ctx->pc = 0x269388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269384u;
    // 0x269388: 0x3c054000  lui         $a1, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x269384u, 0x26938Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26938Cu;
label_26938c:
    // 0x26938c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x26938cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_269390:
    // 0x269390: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x269390u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_269394:
    // 0x269394: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x269394u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_269398:
    // 0x269398: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x269398u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_26939c:
    // 0x26939c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x26939cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2693a0:
    // 0x2693a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2693a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2693a4:
    // 0x2693a4: 0x3e00008  jr          $ra
label_2693a8:
    if (ctx->pc == 0x2693A8u) {
        ctx->pc = 0x2693A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2693A4u;
        // 0x2693a8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2693ACu;
        goto label_2693ac;
    }
    ctx->pc = 0x2693A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2693A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2693A4u;
        // 0x2693a8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2693A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2693ACu;
label_2693ac:
    // 0x2693ac: 0x0  nop
    ctx->pc = 0x2693acu;
    // NOP
    ctx->pc = 0x2693b0u;
}
