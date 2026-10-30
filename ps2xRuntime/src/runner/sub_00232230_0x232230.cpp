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

// Function: sub_00232230
// Address: 0x232230 - 0x2323d0
void sub_00232230_0x232230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232230_0x232230");
#endif

    switch (ctx->pc) {
        case 0x232230u: goto label_232230;
        case 0x232234u: goto label_232234;
        case 0x232238u: goto label_232238;
        case 0x23223cu: goto label_23223c;
        case 0x232240u: goto label_232240;
        case 0x232244u: goto label_232244;
        case 0x232248u: goto label_232248;
        case 0x23224cu: goto label_23224c;
        case 0x232250u: goto label_232250;
        case 0x232254u: goto label_232254;
        case 0x232258u: goto label_232258;
        case 0x23225cu: goto label_23225c;
        case 0x232260u: goto label_232260;
        case 0x232264u: goto label_232264;
        case 0x232268u: goto label_232268;
        case 0x23226cu: goto label_23226c;
        case 0x232270u: goto label_232270;
        case 0x232274u: goto label_232274;
        case 0x232278u: goto label_232278;
        case 0x23227cu: goto label_23227c;
        case 0x232280u: goto label_232280;
        case 0x232284u: goto label_232284;
        case 0x232288u: goto label_232288;
        case 0x23228cu: goto label_23228c;
        case 0x232290u: goto label_232290;
        case 0x232294u: goto label_232294;
        case 0x232298u: goto label_232298;
        case 0x23229cu: goto label_23229c;
        case 0x2322a0u: goto label_2322a0;
        case 0x2322a4u: goto label_2322a4;
        case 0x2322a8u: goto label_2322a8;
        case 0x2322acu: goto label_2322ac;
        case 0x2322b0u: goto label_2322b0;
        case 0x2322b4u: goto label_2322b4;
        case 0x2322b8u: goto label_2322b8;
        case 0x2322bcu: goto label_2322bc;
        case 0x2322c0u: goto label_2322c0;
        case 0x2322c4u: goto label_2322c4;
        case 0x2322c8u: goto label_2322c8;
        case 0x2322ccu: goto label_2322cc;
        case 0x2322d0u: goto label_2322d0;
        case 0x2322d4u: goto label_2322d4;
        case 0x2322d8u: goto label_2322d8;
        case 0x2322dcu: goto label_2322dc;
        case 0x2322e0u: goto label_2322e0;
        case 0x2322e4u: goto label_2322e4;
        case 0x2322e8u: goto label_2322e8;
        case 0x2322ecu: goto label_2322ec;
        case 0x2322f0u: goto label_2322f0;
        case 0x2322f4u: goto label_2322f4;
        case 0x2322f8u: goto label_2322f8;
        case 0x2322fcu: goto label_2322fc;
        case 0x232300u: goto label_232300;
        case 0x232304u: goto label_232304;
        case 0x232308u: goto label_232308;
        case 0x23230cu: goto label_23230c;
        case 0x232310u: goto label_232310;
        case 0x232314u: goto label_232314;
        case 0x232318u: goto label_232318;
        case 0x23231cu: goto label_23231c;
        case 0x232320u: goto label_232320;
        case 0x232324u: goto label_232324;
        case 0x232328u: goto label_232328;
        case 0x23232cu: goto label_23232c;
        case 0x232330u: goto label_232330;
        case 0x232334u: goto label_232334;
        case 0x232338u: goto label_232338;
        case 0x23233cu: goto label_23233c;
        case 0x232340u: goto label_232340;
        case 0x232344u: goto label_232344;
        case 0x232348u: goto label_232348;
        case 0x23234cu: goto label_23234c;
        case 0x232350u: goto label_232350;
        case 0x232354u: goto label_232354;
        case 0x232358u: goto label_232358;
        case 0x23235cu: goto label_23235c;
        case 0x232360u: goto label_232360;
        case 0x232364u: goto label_232364;
        case 0x232368u: goto label_232368;
        case 0x23236cu: goto label_23236c;
        case 0x232370u: goto label_232370;
        case 0x232374u: goto label_232374;
        case 0x232378u: goto label_232378;
        case 0x23237cu: goto label_23237c;
        case 0x232380u: goto label_232380;
        case 0x232384u: goto label_232384;
        case 0x232388u: goto label_232388;
        case 0x23238cu: goto label_23238c;
        case 0x232390u: goto label_232390;
        case 0x232394u: goto label_232394;
        case 0x232398u: goto label_232398;
        case 0x23239cu: goto label_23239c;
        case 0x2323a0u: goto label_2323a0;
        case 0x2323a4u: goto label_2323a4;
        case 0x2323a8u: goto label_2323a8;
        case 0x2323acu: goto label_2323ac;
        case 0x2323b0u: goto label_2323b0;
        case 0x2323b4u: goto label_2323b4;
        case 0x2323b8u: goto label_2323b8;
        case 0x2323bcu: goto label_2323bc;
        case 0x2323c0u: goto label_2323c0;
        case 0x2323c4u: goto label_2323c4;
        case 0x2323c8u: goto label_2323c8;
        case 0x2323ccu: goto label_2323cc;
        default: break;
    }

    ctx->pc = 0x232230u;

label_232230:
    // 0x232230: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x232230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_232234:
    // 0x232234: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x232234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_232238:
    // 0x232238: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x232238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_23223c:
    // 0x23223c: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x23223cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_232240:
    // 0x232240: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x232240u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_232244:
    // 0x232244: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x232244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_232248:
    // 0x232248: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x232248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_23224c:
    // 0x23224c: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x23224cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_232250:
    // 0x232250: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x232250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_232254:
    // 0x232254: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x232254u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_232258:
    // 0x232258: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x232258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_23225c:
    // 0x23225c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x23225cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_232260:
    // 0x232260: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x232260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_232264:
    // 0x232264: 0xc454c394  lwc1        $f20, -0x3C6C($v0)
    ctx->pc = 0x232264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294951828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_232268:
    // 0x232268: 0x112400  sll         $a0, $s1, 16
    ctx->pc = 0x232268u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
label_23226c:
    // 0x23226c: 0x0  nop
    ctx->pc = 0x23226cu;
    // NOP
label_232270:
    // 0x232270: 0xc0e402c  jal         func_3900B0
label_232274:
    if (ctx->pc == 0x232274u) {
        ctx->pc = 0x232274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232270u;
        // 0x232274: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232278u;
        goto label_232278;
    }
    ctx->pc = 0x232270u;
    SET_GPR_U32(ctx, 31, 0x232278u);
    ctx->pc = 0x232274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232270u;
    // 0x232274: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3900B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3900B0u, 0x232270u, 0x232278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232278u;
label_232278:
    // 0x232278: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x232278u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23227c:
    // 0x23227c: 0x5200003c  beql        $s0, $zero, . + 4 + (0x3C << 2)
label_232280:
    if (ctx->pc == 0x232280u) {
        ctx->pc = 0x232280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23227Cu;
        // 0x232280: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232284u;
        goto label_232284;
    }
    ctx->pc = 0x23227Cu;
    {
        const bool branch_taken_0x23227c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x23227c) {
            ctx->pc = 0x232280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23227Cu;
            // 0x232280: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232370u;
            goto label_232370;
        }
    }
    ctx->pc = 0x232284u;
label_232284:
    // 0x232284: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x232284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_232288:
    // 0x232288: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
label_23228c:
    if (ctx->pc == 0x23228Cu) {
        ctx->pc = 0x23228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232288u;
        // 0x23228c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232290u;
        goto label_232290;
    }
    ctx->pc = 0x232288u;
    {
        const bool branch_taken_0x232288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232288) {
            ctx->pc = 0x23228Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232288u;
            // 0x23228c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232370u;
            goto label_232370;
        }
    }
    ctx->pc = 0x232290u;
label_232290:
    // 0x232290: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x232290u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
label_232294:
    // 0x232294: 0x210ba  dsrl        $v0, $v0, 2
    ctx->pc = 0x232294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 2);
label_232298:
    // 0x232298: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x232298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_23229c:
    // 0x23229c: 0x54400034  bnel        $v0, $zero, . + 4 + (0x34 << 2)
label_2322a0:
    if (ctx->pc == 0x2322A0u) {
        ctx->pc = 0x2322A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23229Cu;
        // 0x2322a0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2322A4u;
        goto label_2322a4;
    }
    ctx->pc = 0x23229Cu;
    {
        const bool branch_taken_0x23229c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23229c) {
            ctx->pc = 0x2322A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23229Cu;
            // 0x2322a0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232370u;
            goto label_232370;
        }
    }
    ctx->pc = 0x2322A4u;
label_2322a4:
    // 0x2322a4: 0xc089f98  jal         func_227E60
label_2322a8:
    if (ctx->pc == 0x2322A8u) {
        ctx->pc = 0x2322A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2322A4u;
        // 0x2322a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2322ACu;
        goto label_2322ac;
    }
    ctx->pc = 0x2322A4u;
    SET_GPR_U32(ctx, 31, 0x2322ACu);
    ctx->pc = 0x2322A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2322A4u;
    // 0x2322a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x2322A4u, 0x2322ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2322ACu;
label_2322ac:
    // 0x2322ac: 0x50400030  beql        $v0, $zero, . + 4 + (0x30 << 2)
label_2322b0:
    if (ctx->pc == 0x2322B0u) {
        ctx->pc = 0x2322B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2322ACu;
        // 0x2322b0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2322B4u;
        goto label_2322b4;
    }
    ctx->pc = 0x2322ACu;
    {
        const bool branch_taken_0x2322ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2322ac) {
            ctx->pc = 0x2322B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2322ACu;
            // 0x2322b0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232370u;
            goto label_232370;
        }
    }
    ctx->pc = 0x2322B4u;
label_2322b4:
    // 0x2322b4: 0xc08a0f2  jal         func_2283C8
label_2322b8:
    if (ctx->pc == 0x2322B8u) {
        ctx->pc = 0x2322B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2322B4u;
        // 0x2322b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2322BCu;
        goto label_2322bc;
    }
    ctx->pc = 0x2322B4u;
    SET_GPR_U32(ctx, 31, 0x2322BCu);
    ctx->pc = 0x2322B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2322B4u;
    // 0x2322b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2283C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2283C8u, 0x2322B4u, 0x2322BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2322BCu;
label_2322bc:
    // 0x2322bc: 0x5440002c  bnel        $v0, $zero, . + 4 + (0x2C << 2)
label_2322c0:
    if (ctx->pc == 0x2322C0u) {
        ctx->pc = 0x2322C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2322BCu;
        // 0x2322c0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2322C4u;
        goto label_2322c4;
    }
    ctx->pc = 0x2322BCu;
    {
        const bool branch_taken_0x2322bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2322bc) {
            ctx->pc = 0x2322C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2322BCu;
            // 0x2322c0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232370u;
            goto label_232370;
        }
    }
    ctx->pc = 0x2322C4u;
label_2322c4:
    // 0x2322c4: 0x16800024  bnez        $s4, . + 4 + (0x24 << 2)
label_2322c8:
    if (ctx->pc == 0x2322C8u) {
        ctx->pc = 0x2322C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2322C4u;
        // 0x2322c8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2322CCu;
        goto label_2322cc;
    }
    ctx->pc = 0x2322C4u;
    {
        const bool branch_taken_0x2322c4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2322C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2322C4u;
        // 0x2322c8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2322c4) {
            ctx->pc = 0x232358u;
            goto label_232358;
        }
    }
    ctx->pc = 0x2322CCu;
label_2322cc:
    // 0x2322cc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2322ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2322d0:
    // 0x2322d0: 0x844500a0  lh          $a1, 0xA0($v0)
    ctx->pc = 0x2322d0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_2322d4:
    // 0x2322d4: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x2322d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_2322d8:
    // 0x2322d8: 0x60f809  jalr        $v1
label_2322dc:
    if (ctx->pc == 0x2322DCu) {
        ctx->pc = 0x2322DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2322D8u;
        // 0x2322dc: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2322E0u;
        goto label_2322e0;
    }
    ctx->pc = 0x2322D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2322E0u);
        ctx->pc = 0x2322DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2322D8u;
        // 0x2322dc: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2322D8u, 0x2322E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2322E0u;
label_2322e0:
    // 0x2322e0: 0xc047e6c  jal         func_11F9B0
label_2322e4:
    if (ctx->pc == 0x2322E4u) {
        ctx->pc = 0x2322E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2322E0u;
        // 0x2322e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2322E8u;
        goto label_2322e8;
    }
    ctx->pc = 0x2322E0u;
    SET_GPR_U32(ctx, 31, 0x2322E8u);
    ctx->pc = 0x2322E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2322E0u;
    // 0x2322e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x2322E0u, 0x2322E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2322E8u;
label_2322e8:
    // 0x2322e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2322e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2322ec:
    // 0x2322ec: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x2322ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_2322f0:
    // 0x2322f0: 0x8c65021c  lw          $a1, 0x21C($v1)
    ctx->pc = 0x2322f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_2322f4:
    // 0x2322f4: 0xa0f809  jalr        $a1
label_2322f8:
    if (ctx->pc == 0x2322F8u) {
        ctx->pc = 0x2322F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2322F4u;
        // 0x2322f8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2322FCu;
        goto label_2322fc;
    }
    ctx->pc = 0x2322F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2322FCu);
        ctx->pc = 0x2322F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2322F4u;
        // 0x2322f8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2322F4u, 0x2322FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2322FCu;
label_2322fc:
    // 0x2322fc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2322fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_232300:
    // 0x232300: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x232300u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_232304:
    // 0x232304: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x232304u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_232308:
    // 0x232308: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x232308u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_23230c:
    // 0x23230c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x23230cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_232310:
    // 0x232310: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x232310u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_232314:
    // 0x232314: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x232314u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_232318:
    // 0x232318: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x232318u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_23231c:
    // 0x23231c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x23231cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_232320:
    // 0x232320: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x232320u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_232324:
    // 0x232324: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x232324u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_232328:
    // 0x232328: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x232328u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_23232c:
    // 0x23232c: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x23232cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
label_232330:
    // 0x232330: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x232330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_232334:
    // 0x232334: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x232334u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_232338:
    // 0x232338: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x232338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_23233c:
    // 0x23233c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x23233cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_232340:
    // 0x232340: 0x0  nop
    ctx->pc = 0x232340u;
    // NOP
label_232344:
    // 0x232344: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_232348:
    if (ctx->pc == 0x232348u) {
        ctx->pc = 0x232348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232344u;
        // 0x232348: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23234Cu;
        goto label_23234c;
    }
    ctx->pc = 0x232344u;
    {
        const bool branch_taken_0x232344 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x232348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232344u;
        // 0x232348: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232344) {
            ctx->pc = 0x23236Cu;
            goto label_23236c;
        }
    }
    ctx->pc = 0x23234Cu;
label_23234c:
    // 0x23234c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x23234cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_232350:
    // 0x232350: 0x10000006  b           . + 4 + (0x6 << 2)
label_232354:
    if (ctx->pc == 0x232354u) {
        ctx->pc = 0x232354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232350u;
        // 0x232354: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232358u;
        goto label_232358;
    }
    ctx->pc = 0x232350u;
    {
        const bool branch_taken_0x232350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232350u;
        // 0x232354: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232350) {
            ctx->pc = 0x23236Cu;
            goto label_23236c;
        }
    }
    ctx->pc = 0x232358u;
label_232358:
    // 0x232358: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x232358u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_23235c:
    // 0x23235c: 0x52cb8  dsll        $a1, $a1, 18
    ctx->pc = 0x23235cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 18);
label_232360:
    // 0x232360: 0xc089974  jal         func_2265D0
label_232364:
    if (ctx->pc == 0x232364u) {
        ctx->pc = 0x232364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232360u;
        // 0x232364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232368u;
        goto label_232368;
    }
    ctx->pc = 0x232360u;
    SET_GPR_U32(ctx, 31, 0x232368u);
    ctx->pc = 0x232364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232360u;
    // 0x232364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x232360u, 0x232368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232368u;
label_232368:
    // 0x232368: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x232368u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23236c:
    // 0x23236c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x23236cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_232370:
    // 0x232370: 0x2e22003c  sltiu       $v0, $s1, 0x3C
    ctx->pc = 0x232370u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
label_232374:
    // 0x232374: 0x5440ffbe  bnel        $v0, $zero, . + 4 + (-0x42 << 2)
label_232378:
    if (ctx->pc == 0x232378u) {
        ctx->pc = 0x232378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232374u;
        // 0x232378: 0x112400  sll         $a0, $s1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23237Cu;
        goto label_23237c;
    }
    ctx->pc = 0x232374u;
    {
        const bool branch_taken_0x232374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x232374) {
            ctx->pc = 0x232378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232374u;
            // 0x232378: 0x112400  sll         $a0, $s1, 16 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_232270;
        }
    }
    ctx->pc = 0x23237Cu;
label_23237c:
    // 0x23237c: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
label_232380:
    if (ctx->pc == 0x232380u) {
        ctx->pc = 0x232380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23237Cu;
        // 0x232380: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232384u;
        goto label_232384;
    }
    ctx->pc = 0x23237Cu;
    {
        const bool branch_taken_0x23237c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x232380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23237Cu;
        // 0x232380: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23237c) {
            ctx->pc = 0x2323A8u;
            goto label_2323a8;
        }
    }
    ctx->pc = 0x232384u;
label_232384:
    // 0x232384: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x232384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_232388:
    // 0x232388: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_23238c:
    if (ctx->pc == 0x23238Cu) {
        ctx->pc = 0x23238Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232388u;
        // 0x23238c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232390u;
        goto label_232390;
    }
    ctx->pc = 0x232388u;
    {
        const bool branch_taken_0x232388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23238Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232388u;
        // 0x23238c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232388) {
            ctx->pc = 0x2323A8u;
            goto label_2323a8;
        }
    }
    ctx->pc = 0x232390u;
label_232390:
    // 0x232390: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x232390u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_232394:
    // 0x232394: 0x52cb8  dsll        $a1, $a1, 18
    ctx->pc = 0x232394u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 18);
label_232398:
    // 0x232398: 0xc089974  jal         func_2265D0
label_23239c:
    if (ctx->pc == 0x23239Cu) {
        ctx->pc = 0x23239Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232398u;
        // 0x23239c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2323A0u;
        goto label_2323a0;
    }
    ctx->pc = 0x232398u;
    SET_GPR_U32(ctx, 31, 0x2323A0u);
    ctx->pc = 0x23239Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232398u;
    // 0x23239c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x232398u, 0x2323A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2323A0u;
label_2323a0:
    // 0x2323a0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2323a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2323a4:
    // 0x2323a4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2323a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2323a8:
    // 0x2323a8: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2323a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2323ac:
    // 0x2323ac: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2323acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2323b0:
    // 0x2323b0: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2323b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2323b4:
    // 0x2323b4: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2323b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2323b8:
    // 0x2323b8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2323b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2323bc:
    // 0x2323bc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2323bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2323c0:
    // 0x2323c0: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x2323c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2323c4:
    // 0x2323c4: 0x3e00008  jr          $ra
label_2323c8:
    if (ctx->pc == 0x2323C8u) {
        ctx->pc = 0x2323C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2323C4u;
        // 0x2323c8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2323CCu;
        goto label_2323cc;
    }
    ctx->pc = 0x2323C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2323C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2323C4u;
        // 0x2323c8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2323C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2323CCu;
label_2323cc:
    // 0x2323cc: 0x0  nop
    ctx->pc = 0x2323ccu;
    // NOP
    ctx->pc = 0x2323d0u;
}
