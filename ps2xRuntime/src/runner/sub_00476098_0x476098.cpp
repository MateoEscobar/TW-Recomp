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

// Function: sub_00476098
// Address: 0x476098 - 0x476380
void sub_00476098_0x476098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00476098_0x476098");
#endif

    switch (ctx->pc) {
        case 0x476098u: goto label_476098;
        case 0x47609cu: goto label_47609c;
        case 0x4760a0u: goto label_4760a0;
        case 0x4760a4u: goto label_4760a4;
        case 0x4760a8u: goto label_4760a8;
        case 0x4760acu: goto label_4760ac;
        case 0x4760b0u: goto label_4760b0;
        case 0x4760b4u: goto label_4760b4;
        case 0x4760b8u: goto label_4760b8;
        case 0x4760bcu: goto label_4760bc;
        case 0x4760c0u: goto label_4760c0;
        case 0x4760c4u: goto label_4760c4;
        case 0x4760c8u: goto label_4760c8;
        case 0x4760ccu: goto label_4760cc;
        case 0x4760d0u: goto label_4760d0;
        case 0x4760d4u: goto label_4760d4;
        case 0x4760d8u: goto label_4760d8;
        case 0x4760dcu: goto label_4760dc;
        case 0x4760e0u: goto label_4760e0;
        case 0x4760e4u: goto label_4760e4;
        case 0x4760e8u: goto label_4760e8;
        case 0x4760ecu: goto label_4760ec;
        case 0x4760f0u: goto label_4760f0;
        case 0x4760f4u: goto label_4760f4;
        case 0x4760f8u: goto label_4760f8;
        case 0x4760fcu: goto label_4760fc;
        case 0x476100u: goto label_476100;
        case 0x476104u: goto label_476104;
        case 0x476108u: goto label_476108;
        case 0x47610cu: goto label_47610c;
        case 0x476110u: goto label_476110;
        case 0x476114u: goto label_476114;
        case 0x476118u: goto label_476118;
        case 0x47611cu: goto label_47611c;
        case 0x476120u: goto label_476120;
        case 0x476124u: goto label_476124;
        case 0x476128u: goto label_476128;
        case 0x47612cu: goto label_47612c;
        case 0x476130u: goto label_476130;
        case 0x476134u: goto label_476134;
        case 0x476138u: goto label_476138;
        case 0x47613cu: goto label_47613c;
        case 0x476140u: goto label_476140;
        case 0x476144u: goto label_476144;
        case 0x476148u: goto label_476148;
        case 0x47614cu: goto label_47614c;
        case 0x476150u: goto label_476150;
        case 0x476154u: goto label_476154;
        case 0x476158u: goto label_476158;
        case 0x47615cu: goto label_47615c;
        case 0x476160u: goto label_476160;
        case 0x476164u: goto label_476164;
        case 0x476168u: goto label_476168;
        case 0x47616cu: goto label_47616c;
        case 0x476170u: goto label_476170;
        case 0x476174u: goto label_476174;
        case 0x476178u: goto label_476178;
        case 0x47617cu: goto label_47617c;
        case 0x476180u: goto label_476180;
        case 0x476184u: goto label_476184;
        case 0x476188u: goto label_476188;
        case 0x47618cu: goto label_47618c;
        case 0x476190u: goto label_476190;
        case 0x476194u: goto label_476194;
        case 0x476198u: goto label_476198;
        case 0x47619cu: goto label_47619c;
        case 0x4761a0u: goto label_4761a0;
        case 0x4761a4u: goto label_4761a4;
        case 0x4761a8u: goto label_4761a8;
        case 0x4761acu: goto label_4761ac;
        case 0x4761b0u: goto label_4761b0;
        case 0x4761b4u: goto label_4761b4;
        case 0x4761b8u: goto label_4761b8;
        case 0x4761bcu: goto label_4761bc;
        case 0x4761c0u: goto label_4761c0;
        case 0x4761c4u: goto label_4761c4;
        case 0x4761c8u: goto label_4761c8;
        case 0x4761ccu: goto label_4761cc;
        case 0x4761d0u: goto label_4761d0;
        case 0x4761d4u: goto label_4761d4;
        case 0x4761d8u: goto label_4761d8;
        case 0x4761dcu: goto label_4761dc;
        case 0x4761e0u: goto label_4761e0;
        case 0x4761e4u: goto label_4761e4;
        case 0x4761e8u: goto label_4761e8;
        case 0x4761ecu: goto label_4761ec;
        case 0x4761f0u: goto label_4761f0;
        case 0x4761f4u: goto label_4761f4;
        case 0x4761f8u: goto label_4761f8;
        case 0x4761fcu: goto label_4761fc;
        case 0x476200u: goto label_476200;
        case 0x476204u: goto label_476204;
        case 0x476208u: goto label_476208;
        case 0x47620cu: goto label_47620c;
        case 0x476210u: goto label_476210;
        case 0x476214u: goto label_476214;
        case 0x476218u: goto label_476218;
        case 0x47621cu: goto label_47621c;
        case 0x476220u: goto label_476220;
        case 0x476224u: goto label_476224;
        case 0x476228u: goto label_476228;
        case 0x47622cu: goto label_47622c;
        case 0x476230u: goto label_476230;
        case 0x476234u: goto label_476234;
        case 0x476238u: goto label_476238;
        case 0x47623cu: goto label_47623c;
        case 0x476240u: goto label_476240;
        case 0x476244u: goto label_476244;
        case 0x476248u: goto label_476248;
        case 0x47624cu: goto label_47624c;
        case 0x476250u: goto label_476250;
        case 0x476254u: goto label_476254;
        case 0x476258u: goto label_476258;
        case 0x47625cu: goto label_47625c;
        case 0x476260u: goto label_476260;
        case 0x476264u: goto label_476264;
        case 0x476268u: goto label_476268;
        case 0x47626cu: goto label_47626c;
        case 0x476270u: goto label_476270;
        case 0x476274u: goto label_476274;
        case 0x476278u: goto label_476278;
        case 0x47627cu: goto label_47627c;
        case 0x476280u: goto label_476280;
        case 0x476284u: goto label_476284;
        case 0x476288u: goto label_476288;
        case 0x47628cu: goto label_47628c;
        case 0x476290u: goto label_476290;
        case 0x476294u: goto label_476294;
        case 0x476298u: goto label_476298;
        case 0x47629cu: goto label_47629c;
        case 0x4762a0u: goto label_4762a0;
        case 0x4762a4u: goto label_4762a4;
        case 0x4762a8u: goto label_4762a8;
        case 0x4762acu: goto label_4762ac;
        case 0x4762b0u: goto label_4762b0;
        case 0x4762b4u: goto label_4762b4;
        case 0x4762b8u: goto label_4762b8;
        case 0x4762bcu: goto label_4762bc;
        case 0x4762c0u: goto label_4762c0;
        case 0x4762c4u: goto label_4762c4;
        case 0x4762c8u: goto label_4762c8;
        case 0x4762ccu: goto label_4762cc;
        case 0x4762d0u: goto label_4762d0;
        case 0x4762d4u: goto label_4762d4;
        case 0x4762d8u: goto label_4762d8;
        case 0x4762dcu: goto label_4762dc;
        case 0x4762e0u: goto label_4762e0;
        case 0x4762e4u: goto label_4762e4;
        case 0x4762e8u: goto label_4762e8;
        case 0x4762ecu: goto label_4762ec;
        case 0x4762f0u: goto label_4762f0;
        case 0x4762f4u: goto label_4762f4;
        case 0x4762f8u: goto label_4762f8;
        case 0x4762fcu: goto label_4762fc;
        case 0x476300u: goto label_476300;
        case 0x476304u: goto label_476304;
        case 0x476308u: goto label_476308;
        case 0x47630cu: goto label_47630c;
        case 0x476310u: goto label_476310;
        case 0x476314u: goto label_476314;
        case 0x476318u: goto label_476318;
        case 0x47631cu: goto label_47631c;
        case 0x476320u: goto label_476320;
        case 0x476324u: goto label_476324;
        case 0x476328u: goto label_476328;
        case 0x47632cu: goto label_47632c;
        case 0x476330u: goto label_476330;
        case 0x476334u: goto label_476334;
        case 0x476338u: goto label_476338;
        case 0x47633cu: goto label_47633c;
        case 0x476340u: goto label_476340;
        case 0x476344u: goto label_476344;
        case 0x476348u: goto label_476348;
        case 0x47634cu: goto label_47634c;
        case 0x476350u: goto label_476350;
        case 0x476354u: goto label_476354;
        case 0x476358u: goto label_476358;
        case 0x47635cu: goto label_47635c;
        case 0x476360u: goto label_476360;
        case 0x476364u: goto label_476364;
        case 0x476368u: goto label_476368;
        case 0x47636cu: goto label_47636c;
        case 0x476370u: goto label_476370;
        case 0x476374u: goto label_476374;
        case 0x476378u: goto label_476378;
        case 0x47637cu: goto label_47637c;
        default: break;
    }

    ctx->pc = 0x476098u;

label_476098:
    // 0x476098: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x476098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_47609c:
    // 0x47609c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x47609cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_4760a0:
    // 0x4760a0: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x4760a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_4760a4:
    // 0x4760a4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4760a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4760a8:
    // 0x4760a8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x4760a8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4760ac:
    // 0x4760ac: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x4760acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_4760b0:
    // 0x4760b0: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x4760b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_4760b4:
    // 0x4760b4: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x4760b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_4760b8:
    // 0x4760b8: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x4760b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_4760bc:
    // 0x4760bc: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x4760bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_4760c0:
    // 0x4760c0: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x4760c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_4760c4:
    // 0x4760c4: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x4760c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_4760c8:
    // 0x4760c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4760c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4760cc:
    // 0x4760cc: 0xc11c770  jal         func_471DC0
label_4760d0:
    if (ctx->pc == 0x4760D0u) {
        ctx->pc = 0x4760D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4760CCu;
        // 0x4760d0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4760D4u;
        goto label_4760d4;
    }
    ctx->pc = 0x4760CCu;
    SET_GPR_U32(ctx, 31, 0x4760D4u);
    ctx->pc = 0x4760D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4760CCu;
    // 0x4760d0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x471DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x471DC0u, 0x4760CCu, 0x4760D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4760D4u;
label_4760d4:
    // 0x4760d4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4760d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4760d8:
    // 0x4760d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4760d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4760dc:
    // 0x4760dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4760dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4760e0:
    // 0x4760e0: 0xc11eeae  jal         func_47BAB8
label_4760e4:
    if (ctx->pc == 0x4760E4u) {
        ctx->pc = 0x4760E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4760E0u;
        // 0x4760e4: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4760E8u;
        goto label_4760e8;
    }
    ctx->pc = 0x4760E0u;
    SET_GPR_U32(ctx, 31, 0x4760E8u);
    ctx->pc = 0x4760E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4760E0u;
    // 0x4760e4: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BAB8u, 0x4760E0u, 0x4760E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4760E8u;
label_4760e8:
    // 0x4760e8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_4760ec:
    if (ctx->pc == 0x4760ECu) {
        ctx->pc = 0x4760ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4760E8u;
        // 0x4760ec: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4760F0u;
        goto label_4760f0;
    }
    ctx->pc = 0x4760E8u;
    {
        const bool branch_taken_0x4760e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4760ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4760E8u;
        // 0x4760ec: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4760e8) {
            ctx->pc = 0x476128u;
            goto label_476128;
        }
    }
    ctx->pc = 0x4760F0u;
label_4760f0:
    // 0x4760f0: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x4760f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
label_4760f4:
    // 0x4760f4: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x4760f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
label_4760f8:
    // 0x4760f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4760f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4760fc:
    // 0x4760fc: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x4760fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
label_476100:
    // 0x476100: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_476104:
    if (ctx->pc == 0x476104u) {
        ctx->pc = 0x476104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476100u;
        // 0x476104: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x476108u;
        goto label_476108;
    }
    ctx->pc = 0x476100u;
    {
        const bool branch_taken_0x476100 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x476104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476100u;
        // 0x476104: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476100) {
            ctx->pc = 0x476130u;
            goto label_476130;
        }
    }
    ctx->pc = 0x476108u;
label_476108:
    // 0x476108: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x476108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_47610c:
    // 0x47610c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x47610cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_476110:
    // 0x476110: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x476110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_476114:
    // 0x476114: 0xc11eff2  jal         func_47BFC8
label_476118:
    if (ctx->pc == 0x476118u) {
        ctx->pc = 0x476118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476114u;
        // 0x476118: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x47611Cu;
        goto label_47611c;
    }
    ctx->pc = 0x476114u;
    SET_GPR_U32(ctx, 31, 0x47611Cu);
    ctx->pc = 0x476118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x476114u;
    // 0x476118: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x476114u, 0x47611Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47611Cu;
label_47611c:
    // 0x47611c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x47611cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_476120:
    // 0x476120: 0xc11f024  jal         func_47C090
label_476124:
    if (ctx->pc == 0x476124u) {
        ctx->pc = 0x476124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476120u;
        // 0x476124: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x476128u;
        goto label_476128;
    }
    ctx->pc = 0x476120u;
    SET_GPR_U32(ctx, 31, 0x476128u);
    ctx->pc = 0x476124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x476120u;
    // 0x476124: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x476120u, 0x476128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x476128u;
label_476128:
    // 0x476128: 0x10000089  b           . + 4 + (0x89 << 2)
label_47612c:
    if (ctx->pc == 0x47612Cu) {
        ctx->pc = 0x47612Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476128u;
        // 0x47612c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x476130u;
        goto label_476130;
    }
    ctx->pc = 0x476128u;
    {
        const bool branch_taken_0x476128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47612Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476128u;
        // 0x47612c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476128) {
            ctx->pc = 0x476350u;
            goto label_476350;
        }
    }
    ctx->pc = 0x476130u;
label_476130:
    // 0x476130: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x476130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_476134:
    // 0x476134: 0xc11fb56  jal         func_47ED58
label_476138:
    if (ctx->pc == 0x476138u) {
        ctx->pc = 0x476138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476134u;
        // 0x476138: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47613Cu;
        goto label_47613c;
    }
    ctx->pc = 0x476134u;
    SET_GPR_U32(ctx, 31, 0x47613Cu);
    ctx->pc = 0x476138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x476134u;
    // 0x476138: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47ED58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47ED58u, 0x476134u, 0x47613Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47613Cu;
label_47613c:
    // 0x47613c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x47613cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_476140:
    // 0x476140: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x476140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_476144:
    // 0x476144: 0x14620082  bne         $v1, $v0, . + 4 + (0x82 << 2)
label_476148:
    if (ctx->pc == 0x476148u) {
        ctx->pc = 0x476148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476144u;
        // 0x476148: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47614Cu;
        goto label_47614c;
    }
    ctx->pc = 0x476144u;
    {
        const bool branch_taken_0x476144 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x476148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476144u;
        // 0x476148: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476144) {
            ctx->pc = 0x476350u;
            goto label_476350;
        }
    }
    ctx->pc = 0x47614Cu;
label_47614c:
    // 0x47614c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x47614cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_476150:
    // 0x476150: 0x1443007f  bne         $v0, $v1, . + 4 + (0x7F << 2)
label_476154:
    if (ctx->pc == 0x476154u) {
        ctx->pc = 0x476154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476150u;
        // 0x476154: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x476158u;
        goto label_476158;
    }
    ctx->pc = 0x476150u;
    {
        const bool branch_taken_0x476150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x476154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476150u;
        // 0x476154: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476150) {
            ctx->pc = 0x476350u;
            goto label_476350;
        }
    }
    ctx->pc = 0x476158u;
label_476158:
    // 0x476158: 0x8f828918  lw          $v0, -0x76E8($gp)
    ctx->pc = 0x476158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936856)));
label_47615c:
    // 0x47615c: 0x8ec50078  lw          $a1, 0x78($s6)
    ctx->pc = 0x47615cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 120)));
label_476160:
    // 0x476160: 0x2c22021  addu        $a0, $s6, $v0
    ctx->pc = 0x476160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_476164:
    // 0x476164: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x476164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_476168:
    // 0x476168: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_47616c:
    if (ctx->pc == 0x47616Cu) {
        ctx->pc = 0x47616Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476168u;
        // 0x47616c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x476170u;
        goto label_476170;
    }
    ctx->pc = 0x476168u;
    {
        const bool branch_taken_0x476168 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x47616Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476168u;
        // 0x47616c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476168) {
            ctx->pc = 0x476188u;
            goto label_476188;
        }
    }
    ctx->pc = 0x476170u;
label_476170:
    // 0x476170: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x476170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_476174:
    // 0x476174: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x476174u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_476178:
    // 0x476178: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_47617c:
    if (ctx->pc == 0x47617Cu) {
        ctx->pc = 0x47617Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476178u;
        // 0x47617c: 0x94a50004  lhu         $a1, 0x4($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x476180u;
        goto label_476180;
    }
    ctx->pc = 0x476178u;
    {
        const bool branch_taken_0x476178 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x476178) {
            ctx->pc = 0x47617Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x476178u;
            // 0x47617c: 0x94a50004  lhu         $a1, 0x4($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47618Cu;
            goto label_47618c;
        }
    }
    ctx->pc = 0x476180u;
label_476180:
    // 0x476180: 0x10000004  b           . + 4 + (0x4 << 2)
label_476184:
    if (ctx->pc == 0x476184u) {
        ctx->pc = 0x476184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476180u;
        // 0x476184: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x476188u;
        goto label_476188;
    }
    ctx->pc = 0x476180u;
    {
        const bool branch_taken_0x476180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x476184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476180u;
        // 0x476184: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476180) {
            ctx->pc = 0x476194u;
            goto label_476194;
        }
    }
    ctx->pc = 0x476188u;
label_476188:
    // 0x476188: 0x94a50004  lhu         $a1, 0x4($a1)
    ctx->pc = 0x476188u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_47618c:
    // 0x47618c: 0xc11d5b0  jal         func_4756C0
label_476190:
    if (ctx->pc == 0x476190u) {
        ctx->pc = 0x476190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47618Cu;
        // 0x476190: 0x2c62021  addu        $a0, $s6, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x476194u;
        goto label_476194;
    }
    ctx->pc = 0x47618Cu;
    SET_GPR_U32(ctx, 31, 0x476194u);
    ctx->pc = 0x476190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47618Cu;
    // 0x476190: 0x2c62021  addu        $a0, $s6, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4756C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4756C0u, 0x47618Cu, 0x476194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x476194u;
label_476194:
    // 0x476194: 0x8c5e0000  lw          $fp, 0x0($v0)
    ctx->pc = 0x476194u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_476198:
    // 0x476198: 0x8fd70000  lw          $s7, 0x0($fp)
    ctx->pc = 0x476198u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_47619c:
    // 0x47619c: 0x1ae0006b  blez        $s7, . + 4 + (0x6B << 2)
label_4761a0:
    if (ctx->pc == 0x4761A0u) {
        ctx->pc = 0x4761A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47619Cu;
        // 0x4761a0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4761A4u;
        goto label_4761a4;
    }
    ctx->pc = 0x47619Cu;
    {
        const bool branch_taken_0x47619c = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x4761A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47619Cu;
        // 0x4761a0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47619c) {
            ctx->pc = 0x47634Cu;
            goto label_47634c;
        }
    }
    ctx->pc = 0x4761A4u;
label_4761a4:
    // 0x4761a4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4761a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4761a8:
    // 0x4761a8: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x4761a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_4761ac:
    // 0x4761ac: 0xc11fb56  jal         func_47ED58
label_4761b0:
    if (ctx->pc == 0x4761B0u) {
        ctx->pc = 0x4761B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4761ACu;
        // 0x4761b0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4761B4u;
        goto label_4761b4;
    }
    ctx->pc = 0x4761ACu;
    SET_GPR_U32(ctx, 31, 0x4761B4u);
    ctx->pc = 0x4761B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4761ACu;
    // 0x4761b0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47ED58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47ED58u, 0x4761ACu, 0x4761B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4761B4u;
label_4761b4:
    // 0x4761b4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4761b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4761b8:
    // 0x4761b8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4761b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4761bc:
    // 0x4761bc: 0x1682ffda  bne         $s4, $v0, . + 4 + (-0x26 << 2)
label_4761c0:
    if (ctx->pc == 0x4761C0u) {
        ctx->pc = 0x4761C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4761BCu;
        // 0x4761c0: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4761C4u;
        goto label_4761c4;
    }
    ctx->pc = 0x4761BCu;
    {
        const bool branch_taken_0x4761bc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x4761C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4761BCu;
        // 0x4761c0: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4761bc) {
            ctx->pc = 0x476128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_476128;
        }
    }
    ctx->pc = 0x4761C4u;
label_4761c4:
    // 0x4761c4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x4761c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_4761c8:
    // 0x4761c8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x4761c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_4761cc:
    // 0x4761cc: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4761ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_4761d0:
    // 0x4761d0: 0x3c29021  addu        $s2, $fp, $v0
    ctx->pc = 0x4761d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_4761d4:
    // 0x4761d4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4761d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_4761d8:
    // 0x4761d8: 0x8c62ae20  lw          $v0, -0x51E0($v1)
    ctx->pc = 0x4761d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946336)));
label_4761dc:
    // 0x4761dc: 0x24840267  addiu       $a0, $a0, 0x267
    ctx->pc = 0x4761dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 615));
label_4761e0:
    // 0x4761e0: 0x40f809  jalr        $v0
label_4761e4:
    if (ctx->pc == 0x4761E4u) {
        ctx->pc = 0x4761E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4761E0u;
        // 0x4761e4: 0x34a5050d  ori         $a1, $a1, 0x50D (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1293);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4761E8u;
        goto label_4761e8;
    }
    ctx->pc = 0x4761E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4761E8u);
        ctx->pc = 0x4761E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4761E0u;
        // 0x4761e4: 0x34a5050d  ori         $a1, $a1, 0x50D (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1293);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4761E0u, 0x4761E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4761E8u;
label_4761e8:
    // 0x4761e8: 0x1040ffcf  beqz        $v0, . + 4 + (-0x31 << 2)
label_4761ec:
    if (ctx->pc == 0x4761ECu) {
        ctx->pc = 0x4761ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4761E8u;
        // 0x4761ec: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4761F0u;
        goto label_4761f0;
    }
    ctx->pc = 0x4761E8u;
    {
        const bool branch_taken_0x4761e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4761ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4761E8u;
        // 0x4761ec: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4761e8) {
            ctx->pc = 0x476128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_476128;
        }
    }
    ctx->pc = 0x4761F0u;
label_4761f0:
    // 0x4761f0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4761f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_4761f4:
    // 0x4761f4: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x4761f4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
label_4761f8:
    // 0x4761f8: 0x25085690  addiu       $t0, $t0, 0x5690
    ctx->pc = 0x4761f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 22160));
label_4761fc:
    // 0x4761fc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4761fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_476200:
    // 0x476200: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x476200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_476204:
    // 0x476204: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x476204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_476208:
    // 0x476208: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x476208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_47620c:
    // 0x47620c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x47620cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_476210:
    // 0x476210: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x476210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_476214:
    // 0x476214: 0xac56000c  sw          $s6, 0xC($v0)
    ctx->pc = 0x476214u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 22));
label_476218:
    // 0x476218: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x476218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_47621c:
    // 0x47621c: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x47621cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_476220:
    // 0x476220: 0x2463024f  addiu       $v1, $v1, 0x24F
    ctx->pc = 0x476220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 591));
label_476224:
    // 0x476224: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x476224u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
label_476228:
    // 0x476228: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x476228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_47622c:
    // 0x47622c: 0xac520010  sw          $s2, 0x10($v0)
    ctx->pc = 0x47622cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 18));
label_476230:
    // 0x476230: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x476230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_476234:
    // 0x476234: 0xac680014  sw          $t0, 0x14($v1)
    ctx->pc = 0x476234u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 8));
label_476238:
    // 0x476238: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x476238u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_47623c:
    // 0x47623c: 0xc11fb56  jal         func_47ED58
label_476240:
    if (ctx->pc == 0x476240u) {
        ctx->pc = 0x476240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47623Cu;
        // 0x476240: 0x26110018  addiu       $s1, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x476244u;
        goto label_476244;
    }
    ctx->pc = 0x47623Cu;
    SET_GPR_U32(ctx, 31, 0x476244u);
    ctx->pc = 0x476240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47623Cu;
    // 0x476240: 0x26110018  addiu       $s1, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47ED58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47ED58u, 0x47623Cu, 0x476244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x476244u;
label_476244:
    // 0x476244: 0x1454ffb8  bne         $v0, $s4, . + 4 + (-0x48 << 2)
label_476248:
    if (ctx->pc == 0x476248u) {
        ctx->pc = 0x476248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476244u;
        // 0x476248: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47624Cu;
        goto label_47624c;
    }
    ctx->pc = 0x476244u;
    {
        const bool branch_taken_0x476244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x476248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476244u;
        // 0x476248: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476244) {
            ctx->pc = 0x476128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_476128;
        }
    }
    ctx->pc = 0x47624Cu;
label_47624c:
    // 0x47624c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x47624cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_476250:
    // 0x476250: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x476250u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_476254:
    // 0x476254: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x476254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_476258:
    // 0x476258: 0xc10c1fa  jal         func_4307E8
label_47625c:
    if (ctx->pc == 0x47625Cu) {
        ctx->pc = 0x47625Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476258u;
        // 0x47625c: 0x240601d0  addiu       $a2, $zero, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x476260u;
        goto label_476260;
    }
    ctx->pc = 0x476258u;
    SET_GPR_U32(ctx, 31, 0x476260u);
    ctx->pc = 0x47625Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x476258u;
    // 0x47625c: 0x240601d0  addiu       $a2, $zero, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x476258u, 0x476260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x476260u;
label_476260:
    // 0x476260: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x476260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_476264:
    // 0x476264: 0x26020227  addiu       $v0, $s0, 0x227
    ctx->pc = 0x476264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 551));
label_476268:
    // 0x476268: 0x3463ffc0  ori         $v1, $v1, 0xFFC0
    ctx->pc = 0x476268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65472);
label_47626c:
    // 0x47626c: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x47626cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_476270:
    // 0x476270: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x476270u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_476274:
    // 0x476274: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x476274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_476278:
    // 0x476278: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_47627c:
    if (ctx->pc == 0x47627Cu) {
        ctx->pc = 0x47627Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476278u;
        // 0x47627c: 0x2463007f  addiu       $v1, $v1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x476280u;
        goto label_476280;
    }
    ctx->pc = 0x476278u;
    {
        const bool branch_taken_0x476278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47627Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476278u;
        // 0x47627c: 0x2463007f  addiu       $v1, $v1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476278) {
            ctx->pc = 0x476290u;
            goto label_476290;
        }
    }
    ctx->pc = 0x476280u;
label_476280:
    // 0x476280: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x476280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_476284:
    // 0x476284: 0x3442ff80  ori         $v0, $v0, 0xFF80
    ctx->pc = 0x476284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
label_476288:
    // 0x476288: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x476288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_47628c:
    // 0x47628c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x47628cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_476290:
    // 0x476290: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x476290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_476294:
    // 0x476294: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x476294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_476298:
    // 0x476298: 0xc11fb56  jal         func_47ED58
label_47629c:
    if (ctx->pc == 0x47629Cu) {
        ctx->pc = 0x47629Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476298u;
        // 0x47629c: 0x8fa60018  lw          $a2, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4762A0u;
        goto label_4762a0;
    }
    ctx->pc = 0x476298u;
    SET_GPR_U32(ctx, 31, 0x4762A0u);
    ctx->pc = 0x47629Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x476298u;
    // 0x47629c: 0x8fa60018  lw          $a2, 0x18($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47ED58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47ED58u, 0x476298u, 0x4762A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4762A0u;
label_4762a0:
    // 0x4762a0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x4762a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_4762a4:
    // 0x4762a4: 0x1443ffa0  bne         $v0, $v1, . + 4 + (-0x60 << 2)
label_4762a8:
    if (ctx->pc == 0x4762A8u) {
        ctx->pc = 0x4762A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4762A4u;
        // 0x4762a8: 0x26700001  addiu       $s0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4762ACu;
        goto label_4762ac;
    }
    ctx->pc = 0x4762A4u;
    {
        const bool branch_taken_0x4762a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4762A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4762A4u;
        // 0x4762a8: 0x26700001  addiu       $s0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4762a4) {
            ctx->pc = 0x476128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_476128;
        }
    }
    ctx->pc = 0x4762ACu;
label_4762ac:
    // 0x4762ac: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x4762acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4762b0:
    // 0x4762b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4762b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4762b4:
    // 0x4762b4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4762b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4762b8:
    // 0x4762b8: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x4762b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_4762bc:
    // 0x4762bc: 0x21702  srl         $v0, $v0, 28
    ctx->pc = 0x4762bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 28));
label_4762c0:
    // 0x4762c0: 0x30440007  andi        $a0, $v0, 0x7
    ctx->pc = 0x4762c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_4762c4:
    // 0x4762c4: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x4762c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_4762c8:
    // 0x4762c8: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_4762cc:
    if (ctx->pc == 0x4762CCu) {
        ctx->pc = 0x4762CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4762C8u;
        // 0x4762cc: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4762D0u;
        goto label_4762d0;
    }
    ctx->pc = 0x4762C8u;
    {
        const bool branch_taken_0x4762c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4762CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4762C8u;
        // 0x4762cc: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4762c8) {
            ctx->pc = 0x47631Cu;
            goto label_47631c;
        }
    }
    ctx->pc = 0x4762D0u;
label_4762d0:
    // 0x4762d0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x4762d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4762d4:
    // 0x4762d4: 0x2442eb40  addiu       $v0, $v0, -0x14C0
    ctx->pc = 0x4762d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961984));
label_4762d8:
    // 0x4762d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4762d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4762dc:
    // 0x4762dc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4762dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4762e0:
    // 0x4762e0: 0x800008  jr          $a0
label_4762e4:
    if (ctx->pc == 0x4762E4u) {
        ctx->pc = 0x4762E8u;
        goto label_4762e8;
    }
    ctx->pc = 0x4762E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4762E8u: goto label_4762e8;
            case 0x4762F8u: goto label_4762f8;
            case 0x476318u: goto label_476318;
            case 0x47631Cu: goto label_47631c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4762E0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4762E8u;
label_4762e8:
    // 0x4762e8: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x4762e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_4762ec:
    // 0x4762ec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4762ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_4762f0:
    // 0x4762f0: 0x1000000a  b           . + 4 + (0xA << 2)
label_4762f4:
    if (ctx->pc == 0x4762F4u) {
        ctx->pc = 0x4762F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4762F0u;
        // 0x4762f4: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4762F8u;
        goto label_4762f8;
    }
    ctx->pc = 0x4762F0u;
    {
        const bool branch_taken_0x4762f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4762F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4762F0u;
        // 0x4762f4: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4762f0) {
            ctx->pc = 0x47631Cu;
            goto label_47631c;
        }
    }
    ctx->pc = 0x4762F8u;
label_4762f8:
    // 0x4762f8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x4762f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_4762fc:
    // 0x4762fc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x4762fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_476300:
    // 0x476300: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x476300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_476304:
    // 0x476304: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x476304u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_476308:
    // 0x476308: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x476308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_47630c:
    // 0x47630c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x47630cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_476310:
    // 0x476310: 0x10000002  b           . + 4 + (0x2 << 2)
label_476314:
    if (ctx->pc == 0x476314u) {
        ctx->pc = 0x476314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476310u;
        // 0x476314: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x476318u;
        goto label_476318;
    }
    ctx->pc = 0x476310u;
    {
        const bool branch_taken_0x476310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x476314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476310u;
        // 0x476314: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476310) {
            ctx->pc = 0x47631Cu;
            goto label_47631c;
        }
    }
    ctx->pc = 0x476318u;
label_476318:
    // 0x476318: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x476318u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47631c:
    // 0x47631c: 0x50e0ffe6  beql        $a3, $zero, . + 4 + (-0x1A << 2)
label_476320:
    if (ctx->pc == 0x476320u) {
        ctx->pc = 0x476320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47631Cu;
        // 0x476320: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x476324u;
        goto label_476324;
    }
    ctx->pc = 0x47631Cu;
    {
        const bool branch_taken_0x47631c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x47631c) {
            ctx->pc = 0x476320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47631Cu;
            // 0x476320: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4762B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4762b8;
        }
    }
    ctx->pc = 0x476324u;
label_476324:
    // 0x476324: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x476324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_476328:
    // 0x476328: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x476328u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_47632c:
    // 0x47632c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x47632cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_476330:
    // 0x476330: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x476330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_476334:
    // 0x476334: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x476334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_476338:
    // 0x476338: 0xc10f644  jal         func_43D910
label_47633c:
    if (ctx->pc == 0x47633Cu) {
        ctx->pc = 0x47633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476338u;
        // 0x47633c: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x476340u;
        goto label_476340;
    }
    ctx->pc = 0x476338u;
    SET_GPR_U32(ctx, 31, 0x476340u);
    ctx->pc = 0x47633Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x476338u;
    // 0x47633c: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D910u, 0x476338u, 0x476340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x476340u;
label_476340:
    // 0x476340: 0x277102a  slt         $v0, $s3, $s7
    ctx->pc = 0x476340u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_476344:
    // 0x476344: 0x1440ff98  bnez        $v0, . + 4 + (-0x68 << 2)
label_476348:
    if (ctx->pc == 0x476348u) {
        ctx->pc = 0x476348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476344u;
        // 0x476348: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47634Cu;
        goto label_47634c;
    }
    ctx->pc = 0x476344u;
    {
        const bool branch_taken_0x476344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x476348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476344u;
        // 0x476348: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476344) {
            ctx->pc = 0x4761A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4761a8;
        }
    }
    ctx->pc = 0x47634Cu;
label_47634c:
    // 0x47634c: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x47634cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_476350:
    // 0x476350: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x476350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_476354:
    // 0x476354: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x476354u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_476358:
    // 0x476358: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x476358u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_47635c:
    // 0x47635c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x47635cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_476360:
    // 0x476360: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x476360u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_476364:
    // 0x476364: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x476364u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_476368:
    // 0x476368: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x476368u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_47636c:
    // 0x47636c: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x47636cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_476370:
    // 0x476370: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x476370u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_476374:
    // 0x476374: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x476374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_476378:
    // 0x476378: 0x3e00008  jr          $ra
label_47637c:
    if (ctx->pc == 0x47637Cu) {
        ctx->pc = 0x47637Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476378u;
        // 0x47637c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x476380u;
        goto label_fallthrough_0x476378;
    }
    ctx->pc = 0x476378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47637Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476378u;
        // 0x47637c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x476378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x476378:
    ctx->pc = 0x476380u;
}
