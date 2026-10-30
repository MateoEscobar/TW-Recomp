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

// Function: sub_00307248
// Address: 0x307248 - 0x307460
void sub_00307248_0x307248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307248_0x307248");
#endif

    switch (ctx->pc) {
        case 0x307248u: goto label_307248;
        case 0x30724cu: goto label_30724c;
        case 0x307250u: goto label_307250;
        case 0x307254u: goto label_307254;
        case 0x307258u: goto label_307258;
        case 0x30725cu: goto label_30725c;
        case 0x307260u: goto label_307260;
        case 0x307264u: goto label_307264;
        case 0x307268u: goto label_307268;
        case 0x30726cu: goto label_30726c;
        case 0x307270u: goto label_307270;
        case 0x307274u: goto label_307274;
        case 0x307278u: goto label_307278;
        case 0x30727cu: goto label_30727c;
        case 0x307280u: goto label_307280;
        case 0x307284u: goto label_307284;
        case 0x307288u: goto label_307288;
        case 0x30728cu: goto label_30728c;
        case 0x307290u: goto label_307290;
        case 0x307294u: goto label_307294;
        case 0x307298u: goto label_307298;
        case 0x30729cu: goto label_30729c;
        case 0x3072a0u: goto label_3072a0;
        case 0x3072a4u: goto label_3072a4;
        case 0x3072a8u: goto label_3072a8;
        case 0x3072acu: goto label_3072ac;
        case 0x3072b0u: goto label_3072b0;
        case 0x3072b4u: goto label_3072b4;
        case 0x3072b8u: goto label_3072b8;
        case 0x3072bcu: goto label_3072bc;
        case 0x3072c0u: goto label_3072c0;
        case 0x3072c4u: goto label_3072c4;
        case 0x3072c8u: goto label_3072c8;
        case 0x3072ccu: goto label_3072cc;
        case 0x3072d0u: goto label_3072d0;
        case 0x3072d4u: goto label_3072d4;
        case 0x3072d8u: goto label_3072d8;
        case 0x3072dcu: goto label_3072dc;
        case 0x3072e0u: goto label_3072e0;
        case 0x3072e4u: goto label_3072e4;
        case 0x3072e8u: goto label_3072e8;
        case 0x3072ecu: goto label_3072ec;
        case 0x3072f0u: goto label_3072f0;
        case 0x3072f4u: goto label_3072f4;
        case 0x3072f8u: goto label_3072f8;
        case 0x3072fcu: goto label_3072fc;
        case 0x307300u: goto label_307300;
        case 0x307304u: goto label_307304;
        case 0x307308u: goto label_307308;
        case 0x30730cu: goto label_30730c;
        case 0x307310u: goto label_307310;
        case 0x307314u: goto label_307314;
        case 0x307318u: goto label_307318;
        case 0x30731cu: goto label_30731c;
        case 0x307320u: goto label_307320;
        case 0x307324u: goto label_307324;
        case 0x307328u: goto label_307328;
        case 0x30732cu: goto label_30732c;
        case 0x307330u: goto label_307330;
        case 0x307334u: goto label_307334;
        case 0x307338u: goto label_307338;
        case 0x30733cu: goto label_30733c;
        case 0x307340u: goto label_307340;
        case 0x307344u: goto label_307344;
        case 0x307348u: goto label_307348;
        case 0x30734cu: goto label_30734c;
        case 0x307350u: goto label_307350;
        case 0x307354u: goto label_307354;
        case 0x307358u: goto label_307358;
        case 0x30735cu: goto label_30735c;
        case 0x307360u: goto label_307360;
        case 0x307364u: goto label_307364;
        case 0x307368u: goto label_307368;
        case 0x30736cu: goto label_30736c;
        case 0x307370u: goto label_307370;
        case 0x307374u: goto label_307374;
        case 0x307378u: goto label_307378;
        case 0x30737cu: goto label_30737c;
        case 0x307380u: goto label_307380;
        case 0x307384u: goto label_307384;
        case 0x307388u: goto label_307388;
        case 0x30738cu: goto label_30738c;
        case 0x307390u: goto label_307390;
        case 0x307394u: goto label_307394;
        case 0x307398u: goto label_307398;
        case 0x30739cu: goto label_30739c;
        case 0x3073a0u: goto label_3073a0;
        case 0x3073a4u: goto label_3073a4;
        case 0x3073a8u: goto label_3073a8;
        case 0x3073acu: goto label_3073ac;
        case 0x3073b0u: goto label_3073b0;
        case 0x3073b4u: goto label_3073b4;
        case 0x3073b8u: goto label_3073b8;
        case 0x3073bcu: goto label_3073bc;
        case 0x3073c0u: goto label_3073c0;
        case 0x3073c4u: goto label_3073c4;
        case 0x3073c8u: goto label_3073c8;
        case 0x3073ccu: goto label_3073cc;
        case 0x3073d0u: goto label_3073d0;
        case 0x3073d4u: goto label_3073d4;
        case 0x3073d8u: goto label_3073d8;
        case 0x3073dcu: goto label_3073dc;
        case 0x3073e0u: goto label_3073e0;
        case 0x3073e4u: goto label_3073e4;
        case 0x3073e8u: goto label_3073e8;
        case 0x3073ecu: goto label_3073ec;
        case 0x3073f0u: goto label_3073f0;
        case 0x3073f4u: goto label_3073f4;
        case 0x3073f8u: goto label_3073f8;
        case 0x3073fcu: goto label_3073fc;
        case 0x307400u: goto label_307400;
        case 0x307404u: goto label_307404;
        case 0x307408u: goto label_307408;
        case 0x30740cu: goto label_30740c;
        case 0x307410u: goto label_307410;
        case 0x307414u: goto label_307414;
        case 0x307418u: goto label_307418;
        case 0x30741cu: goto label_30741c;
        case 0x307420u: goto label_307420;
        case 0x307424u: goto label_307424;
        case 0x307428u: goto label_307428;
        case 0x30742cu: goto label_30742c;
        case 0x307430u: goto label_307430;
        case 0x307434u: goto label_307434;
        case 0x307438u: goto label_307438;
        case 0x30743cu: goto label_30743c;
        case 0x307440u: goto label_307440;
        case 0x307444u: goto label_307444;
        case 0x307448u: goto label_307448;
        case 0x30744cu: goto label_30744c;
        case 0x307450u: goto label_307450;
        case 0x307454u: goto label_307454;
        case 0x307458u: goto label_307458;
        case 0x30745cu: goto label_30745c;
        default: break;
    }

    ctx->pc = 0x307248u;

label_307248:
    // 0x307248: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x307248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_30724c:
    // 0x30724c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x30724cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_307250:
    // 0x307250: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x307250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_307254:
    // 0x307254: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x307254u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_307258:
    // 0x307258: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x307258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_30725c:
    // 0x30725c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x30725cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_307260:
    // 0x307260: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x307260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_307264:
    // 0x307264: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x307264u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_307268:
    // 0x307268: 0xc05959e  jal         func_165678
label_30726c:
    if (ctx->pc == 0x30726Cu) {
        ctx->pc = 0x30726Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307268u;
        // 0x30726c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307270u;
        goto label_307270;
    }
    ctx->pc = 0x307268u;
    SET_GPR_U32(ctx, 31, 0x307270u);
    ctx->pc = 0x30726Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307268u;
    // 0x30726c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x307268u, 0x307270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307270u;
label_307270:
    // 0x307270: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x307270u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_307274:
    // 0x307274: 0x12200072  beqz        $s1, . + 4 + (0x72 << 2)
label_307278:
    if (ctx->pc == 0x307278u) {
        ctx->pc = 0x307278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307274u;
        // 0x307278: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30727Cu;
        goto label_30727c;
    }
    ctx->pc = 0x307274u;
    {
        const bool branch_taken_0x307274 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x307278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307274u;
        // 0x307278: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307274) {
            ctx->pc = 0x307440u;
            goto label_307440;
        }
    }
    ctx->pc = 0x30727Cu;
label_30727c:
    // 0x30727c: 0xc05959e  jal         func_165678
label_307280:
    if (ctx->pc == 0x307280u) {
        ctx->pc = 0x307280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30727Cu;
        // 0x307280: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307284u;
        goto label_307284;
    }
    ctx->pc = 0x30727Cu;
    SET_GPR_U32(ctx, 31, 0x307284u);
    ctx->pc = 0x307280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30727Cu;
    // 0x307280: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x30727Cu, 0x307284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307284u;
label_307284:
    // 0x307284: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x307284u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_307288:
    // 0x307288: 0x1240006c  beqz        $s2, . + 4 + (0x6C << 2)
label_30728c:
    if (ctx->pc == 0x30728Cu) {
        ctx->pc = 0x30728Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307288u;
        // 0x30728c: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307290u;
        goto label_307290;
    }
    ctx->pc = 0x307288u;
    {
        const bool branch_taken_0x307288 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x30728Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307288u;
        // 0x30728c: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307288) {
            ctx->pc = 0x30743Cu;
            goto label_30743c;
        }
    }
    ctx->pc = 0x307290u;
label_307290:
    // 0x307290: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x307290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_307294:
    // 0x307294: 0x1073006a  beq         $v1, $s3, . + 4 + (0x6A << 2)
label_307298:
    if (ctx->pc == 0x307298u) {
        ctx->pc = 0x307298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307294u;
        // 0x307298: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30729Cu;
        goto label_30729c;
    }
    ctx->pc = 0x307294u;
    {
        const bool branch_taken_0x307294 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x307298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307294u;
        // 0x307298: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307294) {
            ctx->pc = 0x307440u;
            goto label_307440;
        }
    }
    ctx->pc = 0x30729Cu;
label_30729c:
    // 0x30729c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30729cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3072a0:
    // 0x3072a0: 0x1462002e  bne         $v1, $v0, . + 4 + (0x2E << 2)
label_3072a4:
    if (ctx->pc == 0x3072A4u) {
        ctx->pc = 0x3072A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3072A0u;
        // 0x3072a4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3072A8u;
        goto label_3072a8;
    }
    ctx->pc = 0x3072A0u;
    {
        const bool branch_taken_0x3072a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3072A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3072A0u;
        // 0x3072a4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3072a0) {
            ctx->pc = 0x30735Cu;
            goto label_30735c;
        }
    }
    ctx->pc = 0x3072A8u;
label_3072a8:
    // 0x3072a8: 0xc087502  jal         func_21D408
label_3072ac:
    if (ctx->pc == 0x3072ACu) {
        ctx->pc = 0x3072ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3072A8u;
        // 0x3072ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3072B0u;
        goto label_3072b0;
    }
    ctx->pc = 0x3072A8u;
    SET_GPR_U32(ctx, 31, 0x3072B0u);
    ctx->pc = 0x3072ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3072A8u;
    // 0x3072ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x3072A8u, 0x3072B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3072B0u;
label_3072b0:
    // 0x3072b0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3072b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3072b4:
    // 0x3072b4: 0x8062002c  lb          $v0, 0x2C($v1)
    ctx->pc = 0x3072b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
label_3072b8:
    // 0x3072b8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3072bc:
    if (ctx->pc == 0x3072BCu) {
        ctx->pc = 0x3072BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3072B8u;
        // 0x3072bc: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3072C0u;
        goto label_3072c0;
    }
    ctx->pc = 0x3072B8u;
    {
        const bool branch_taken_0x3072b8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3072BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3072B8u;
        // 0x3072bc: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3072b8) {
            ctx->pc = 0x3072CCu;
            goto label_3072cc;
        }
    }
    ctx->pc = 0x3072C0u;
label_3072c0:
    // 0x3072c0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3072c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3072c4:
    // 0x3072c4: 0x10000002  b           . + 4 + (0x2 << 2)
label_3072c8:
    if (ctx->pc == 0x3072C8u) {
        ctx->pc = 0x3072C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3072C4u;
        // 0x3072c8: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3072CCu;
        goto label_3072cc;
    }
    ctx->pc = 0x3072C4u;
    {
        const bool branch_taken_0x3072c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3072C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3072C4u;
        // 0x3072c8: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3072c4) {
            ctx->pc = 0x3072D0u;
            goto label_3072d0;
        }
    }
    ctx->pc = 0x3072CCu;
label_3072cc:
    // 0x3072cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3072ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3072d0:
    // 0x3072d0: 0x10a0005b  beqz        $a1, . + 4 + (0x5B << 2)
label_3072d4:
    if (ctx->pc == 0x3072D4u) {
        ctx->pc = 0x3072D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3072D0u;
        // 0x3072d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3072D8u;
        goto label_3072d8;
    }
    ctx->pc = 0x3072D0u;
    {
        const bool branch_taken_0x3072d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3072D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3072D0u;
        // 0x3072d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3072d0) {
            ctx->pc = 0x307440u;
            goto label_307440;
        }
    }
    ctx->pc = 0x3072D8u;
label_3072d8:
    // 0x3072d8: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x3072d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_3072dc:
    // 0x3072dc: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x3072dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_3072e0:
    // 0x3072e0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3072e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_3072e4:
    // 0x3072e4: 0x40f809  jalr        $v0
label_3072e8:
    if (ctx->pc == 0x3072E8u) {
        ctx->pc = 0x3072E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3072E4u;
        // 0x3072e8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3072ECu;
        goto label_3072ec;
    }
    ctx->pc = 0x3072E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3072ECu);
        ctx->pc = 0x3072E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3072E4u;
        // 0x3072e8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3072E4u, 0x3072ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3072ECu;
label_3072ec:
    // 0x3072ec: 0x3842002a  xori        $v0, $v0, 0x2A
    ctx->pc = 0x3072ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)42);
label_3072f0:
    // 0x3072f0: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
label_3072f4:
    if (ctx->pc == 0x3072F4u) {
        ctx->pc = 0x3072F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3072F0u;
        // 0x3072f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3072F8u;
        goto label_3072f8;
    }
    ctx->pc = 0x3072F0u;
    {
        const bool branch_taken_0x3072f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3072F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3072F0u;
        // 0x3072f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3072f0) {
            ctx->pc = 0x307440u;
            goto label_307440;
        }
    }
    ctx->pc = 0x3072F8u;
label_3072f8:
    // 0x3072f8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3072f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3072fc:
    // 0x3072fc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3072fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_307300:
    // 0x307300: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x307300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_307304:
    // 0x307304: 0x40f809  jalr        $v0
label_307308:
    if (ctx->pc == 0x307308u) {
        ctx->pc = 0x307308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307304u;
        // 0x307308: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30730Cu;
        goto label_30730c;
    }
    ctx->pc = 0x307304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30730Cu);
        ctx->pc = 0x307308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307304u;
        // 0x307308: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307304u, 0x30730Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30730Cu;
label_30730c:
    // 0x30730c: 0x92050044  lbu         $a1, 0x44($s0)
    ctx->pc = 0x30730cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 68)));
label_307310:
    // 0x307310: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x307310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_307314:
    // 0x307314: 0xc0a48cc  jal         func_292330
label_307318:
    if (ctx->pc == 0x307318u) {
        ctx->pc = 0x307318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307314u;
        // 0x307318: 0x5282b  sltu        $a1, $zero, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30731Cu;
        goto label_30731c;
    }
    ctx->pc = 0x307314u;
    SET_GPR_U32(ctx, 31, 0x30731Cu);
    ctx->pc = 0x307318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307314u;
    // 0x307318: 0x5282b  sltu        $a1, $zero, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x292330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292330u, 0x307314u, 0x30731Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30731Cu;
label_30731c:
    // 0x30731c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x30731cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_307320:
    // 0x307320: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x307320u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_307324:
    // 0x307324: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x307324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_307328:
    // 0x307328: 0x40f809  jalr        $v0
label_30732c:
    if (ctx->pc == 0x30732Cu) {
        ctx->pc = 0x30732Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307328u;
        // 0x30732c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307330u;
        goto label_307330;
    }
    ctx->pc = 0x307328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x307330u);
        ctx->pc = 0x30732Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307328u;
        // 0x30732c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307328u, 0x307330u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x307330u;
label_307330:
    // 0x307330: 0x92050045  lbu         $a1, 0x45($s0)
    ctx->pc = 0x307330u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
label_307334:
    // 0x307334: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x307334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_307338:
    // 0x307338: 0xc0a48cc  jal         func_292330
label_30733c:
    if (ctx->pc == 0x30733Cu) {
        ctx->pc = 0x30733Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307338u;
        // 0x30733c: 0x5282b  sltu        $a1, $zero, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x307340u;
        goto label_307340;
    }
    ctx->pc = 0x307338u;
    SET_GPR_U32(ctx, 31, 0x307340u);
    ctx->pc = 0x30733Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307338u;
    // 0x30733c: 0x5282b  sltu        $a1, $zero, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x292330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292330u, 0x307338u, 0x307340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307340u;
label_307340:
    // 0x307340: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x307340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_307344:
    // 0x307344: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x307344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_307348:
    // 0x307348: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x307348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_30734c:
    // 0x30734c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x30734cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_307350:
    // 0x307350: 0xa0600411  sb          $zero, 0x411($v1)
    ctx->pc = 0x307350u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1041), (uint8_t)GPR_U32(ctx, 0));
label_307354:
    // 0x307354: 0x1000003a  b           . + 4 + (0x3A << 2)
label_307358:
    if (ctx->pc == 0x307358u) {
        ctx->pc = 0x307358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307354u;
        // 0x307358: 0xae040034  sw          $a0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30735Cu;
        goto label_30735c;
    }
    ctx->pc = 0x307354u;
    {
        const bool branch_taken_0x307354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307354u;
        // 0x307358: 0xae040034  sw          $a0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307354) {
            ctx->pc = 0x307440u;
            goto label_307440;
        }
    }
    ctx->pc = 0x30735Cu;
label_30735c:
    // 0x30735c: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x30735cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_307360:
    // 0x307360: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x307360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_307364:
    // 0x307364: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x307364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_307368:
    // 0x307368: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x307368u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_30736c:
    // 0x30736c: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
label_307370:
    if (ctx->pc == 0x307370u) {
        ctx->pc = 0x307370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30736Cu;
        // 0x307370: 0x244303e8  addiu       $v1, $v0, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307374u;
        goto label_307374;
    }
    ctx->pc = 0x30736Cu;
    {
        const bool branch_taken_0x30736c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x307370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30736Cu;
        // 0x307370: 0x244303e8  addiu       $v1, $v0, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30736c) {
            ctx->pc = 0x30743Cu;
            goto label_30743c;
        }
    }
    ctx->pc = 0x307374u;
label_307374:
    // 0x307374: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x307374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
label_307378:
    // 0x307378: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x307378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_30737c:
    // 0x30737c: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x30737cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_307380:
    // 0x307380: 0x86240092  lh          $a0, 0x92($s1)
    ctx->pc = 0x307380u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_307384:
    // 0x307384: 0x86450092  lh          $a1, 0x92($s2)
    ctx->pc = 0x307384u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_307388:
    // 0x307388: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x307388u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_30738c:
    // 0x30738c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x30738cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_307390:
    // 0x307390: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x307390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_307394:
    // 0x307394: 0xc0cdb38  jal         func_336CE0
label_307398:
    if (ctx->pc == 0x307398u) {
        ctx->pc = 0x307398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307394u;
        // 0x307398: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30739Cu;
        goto label_30739c;
    }
    ctx->pc = 0x307394u;
    SET_GPR_U32(ctx, 31, 0x30739Cu);
    ctx->pc = 0x307398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307394u;
    // 0x307398: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x307394u, 0x30739Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30739Cu;
label_30739c:
    // 0x30739c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x30739cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3073a0:
    // 0x3073a0: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x3073a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3073a4:
    // 0x3073a4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x3073a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_3073a8:
    // 0x3073a8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3073a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3073ac:
    // 0x3073ac: 0x0  nop
    ctx->pc = 0x3073acu;
    // NOP
label_3073b0:
    // 0x3073b0: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
label_3073b4:
    if (ctx->pc == 0x3073B4u) {
        ctx->pc = 0x3073B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3073B0u;
        // 0x3073b4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3073B8u;
        goto label_3073b8;
    }
    ctx->pc = 0x3073B0u;
    {
        const bool branch_taken_0x3073b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3073B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3073B0u;
        // 0x3073b4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3073b0) {
            ctx->pc = 0x307424u;
            goto label_307424;
        }
    }
    ctx->pc = 0x3073B8u;
label_3073b8:
    // 0x3073b8: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x3073b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_3073bc:
    // 0x3073bc: 0x84640322  lh          $a0, 0x322($v1)
    ctx->pc = 0x3073bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 802)));
label_3073c0:
    // 0x3073c0: 0x1c80001f  bgtz        $a0, . + 4 + (0x1F << 2)
label_3073c4:
    if (ctx->pc == 0x3073C4u) {
        ctx->pc = 0x3073C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3073C0u;
        // 0x3073c4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3073C8u;
        goto label_3073c8;
    }
    ctx->pc = 0x3073C0u;
    {
        const bool branch_taken_0x3073c0 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x3073C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3073C0u;
        // 0x3073c4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3073c0) {
            ctx->pc = 0x307440u;
            goto label_307440;
        }
    }
    ctx->pc = 0x3073C8u;
label_3073c8:
    // 0x3073c8: 0xc0d4ede  jal         func_353B78
label_3073cc:
    if (ctx->pc == 0x3073CCu) {
        ctx->pc = 0x3073CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3073C8u;
        // 0x3073cc: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3073D0u;
        goto label_3073d0;
    }
    ctx->pc = 0x3073C8u;
    SET_GPR_U32(ctx, 31, 0x3073D0u);
    ctx->pc = 0x3073CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3073C8u;
    // 0x3073cc: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353B78u, 0x3073C8u, 0x3073D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3073D0u;
label_3073d0:
    // 0x3073d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3073d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3073d4:
    // 0x3073d4: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
label_3073d8:
    if (ctx->pc == 0x3073D8u) {
        ctx->pc = 0x3073DCu;
        goto label_3073dc;
    }
    ctx->pc = 0x3073D4u;
    {
        const bool branch_taken_0x3073d4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3073d4) {
            ctx->pc = 0x3073E8u;
            goto label_3073e8;
        }
    }
    ctx->pc = 0x3073DCu;
label_3073dc:
    // 0x3073dc: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x3073dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_3073e0:
    // 0x3073e0: 0xc0d4ebc  jal         func_353AF0
label_3073e4:
    if (ctx->pc == 0x3073E4u) {
        ctx->pc = 0x3073E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3073E0u;
        // 0x3073e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3073E8u;
        goto label_3073e8;
    }
    ctx->pc = 0x3073E0u;
    SET_GPR_U32(ctx, 31, 0x3073E8u);
    ctx->pc = 0x3073E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3073E0u;
    // 0x3073e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353AF0u, 0x3073E0u, 0x3073E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3073E8u;
label_3073e8:
    // 0x3073e8: 0x16330015  bne         $s1, $s3, . + 4 + (0x15 << 2)
label_3073ec:
    if (ctx->pc == 0x3073ECu) {
        ctx->pc = 0x3073ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3073E8u;
        // 0x3073ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3073F0u;
        goto label_3073f0;
    }
    ctx->pc = 0x3073E8u;
    {
        const bool branch_taken_0x3073e8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x3073ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3073E8u;
        // 0x3073ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3073e8) {
            ctx->pc = 0x307440u;
            goto label_307440;
        }
    }
    ctx->pc = 0x3073F0u;
label_3073f0:
    // 0x3073f0: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x3073f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3073f4:
    // 0x3073f4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x3073f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_3073f8:
    // 0x3073f8: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x3073f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3073fc:
    // 0x3073fc: 0x0  nop
    ctx->pc = 0x3073fcu;
    // NOP
label_307400:
    // 0x307400: 0x45020010  bc1fl       . + 4 + (0x10 << 2)
label_307404:
    if (ctx->pc == 0x307404u) {
        ctx->pc = 0x307404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307400u;
        // 0x307404: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307408u;
        goto label_307408;
    }
    ctx->pc = 0x307400u;
    {
        const bool branch_taken_0x307400 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x307400) {
            ctx->pc = 0x307404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307400u;
            // 0x307404: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307444u;
            goto label_307444;
        }
    }
    ctx->pc = 0x307408u;
label_307408:
    // 0x307408: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x307408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_30740c:
    // 0x30740c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_307410:
    if (ctx->pc == 0x307410u) {
        ctx->pc = 0x307410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30740Cu;
        // 0x307410: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307414u;
        goto label_307414;
    }
    ctx->pc = 0x30740Cu;
    {
        const bool branch_taken_0x30740c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x307410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30740Cu;
        // 0x307410: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30740c) {
            ctx->pc = 0x307440u;
            goto label_307440;
        }
    }
    ctx->pc = 0x307414u;
label_307414:
    // 0x307414: 0xc0c1bb0  jal         func_306EC0
label_307418:
    if (ctx->pc == 0x307418u) {
        ctx->pc = 0x307418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307414u;
        // 0x307418: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30741Cu;
        goto label_30741c;
    }
    ctx->pc = 0x307414u;
    SET_GPR_U32(ctx, 31, 0x30741Cu);
    ctx->pc = 0x307418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307414u;
    // 0x307418: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306EC0u, 0x307414u, 0x30741Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30741Cu;
label_30741c:
    // 0x30741c: 0x10000008  b           . + 4 + (0x8 << 2)
label_307420:
    if (ctx->pc == 0x307420u) {
        ctx->pc = 0x307420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30741Cu;
        // 0x307420: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307424u;
        goto label_307424;
    }
    ctx->pc = 0x30741Cu;
    {
        const bool branch_taken_0x30741c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30741Cu;
        // 0x307420: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30741c) {
            ctx->pc = 0x307440u;
            goto label_307440;
        }
    }
    ctx->pc = 0x307424u;
label_307424:
    // 0x307424: 0xc0d4ede  jal         func_353B78
label_307428:
    if (ctx->pc == 0x307428u) {
        ctx->pc = 0x307428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307424u;
        // 0x307428: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30742Cu;
        goto label_30742c;
    }
    ctx->pc = 0x307424u;
    SET_GPR_U32(ctx, 31, 0x30742Cu);
    ctx->pc = 0x307428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307424u;
    // 0x307428: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353B78u, 0x307424u, 0x30742Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30742Cu;
label_30742c:
    // 0x30742c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_307430:
    if (ctx->pc == 0x307430u) {
        ctx->pc = 0x307430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30742Cu;
        // 0x307430: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307434u;
        goto label_307434;
    }
    ctx->pc = 0x30742Cu;
    {
        const bool branch_taken_0x30742c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x307430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30742Cu;
        // 0x307430: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30742c) {
            ctx->pc = 0x307440u;
            goto label_307440;
        }
    }
    ctx->pc = 0x307434u;
label_307434:
    // 0x307434: 0xc0d4efc  jal         func_353BF0
label_307438:
    if (ctx->pc == 0x307438u) {
        ctx->pc = 0x307438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307434u;
        // 0x307438: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30743Cu;
        goto label_30743c;
    }
    ctx->pc = 0x307434u;
    SET_GPR_U32(ctx, 31, 0x30743Cu);
    ctx->pc = 0x307438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307434u;
    // 0x307438: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353BF0u, 0x307434u, 0x30743Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30743Cu;
label_30743c:
    // 0x30743c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30743cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_307440:
    // 0x307440: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x307440u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_307444:
    // 0x307444: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x307444u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_307448:
    // 0x307448: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x307448u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_30744c:
    // 0x30744c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x30744cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_307450:
    // 0x307450: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x307450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_307454:
    // 0x307454: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x307454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_307458:
    // 0x307458: 0x3e00008  jr          $ra
label_30745c:
    if (ctx->pc == 0x30745Cu) {
        ctx->pc = 0x30745Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307458u;
        // 0x30745c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307460u;
        goto label_fallthrough_0x307458;
    }
    ctx->pc = 0x307458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30745Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307458u;
        // 0x30745c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x307458:
    ctx->pc = 0x307460u;
}
