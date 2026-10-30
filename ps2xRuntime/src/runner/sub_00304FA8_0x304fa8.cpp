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

// Function: sub_00304FA8
// Address: 0x304fa8 - 0x3052f0
void sub_00304FA8_0x304fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304FA8_0x304fa8");
#endif

    switch (ctx->pc) {
        case 0x304fa8u: goto label_304fa8;
        case 0x304facu: goto label_304fac;
        case 0x304fb0u: goto label_304fb0;
        case 0x304fb4u: goto label_304fb4;
        case 0x304fb8u: goto label_304fb8;
        case 0x304fbcu: goto label_304fbc;
        case 0x304fc0u: goto label_304fc0;
        case 0x304fc4u: goto label_304fc4;
        case 0x304fc8u: goto label_304fc8;
        case 0x304fccu: goto label_304fcc;
        case 0x304fd0u: goto label_304fd0;
        case 0x304fd4u: goto label_304fd4;
        case 0x304fd8u: goto label_304fd8;
        case 0x304fdcu: goto label_304fdc;
        case 0x304fe0u: goto label_304fe0;
        case 0x304fe4u: goto label_304fe4;
        case 0x304fe8u: goto label_304fe8;
        case 0x304fecu: goto label_304fec;
        case 0x304ff0u: goto label_304ff0;
        case 0x304ff4u: goto label_304ff4;
        case 0x304ff8u: goto label_304ff8;
        case 0x304ffcu: goto label_304ffc;
        case 0x305000u: goto label_305000;
        case 0x305004u: goto label_305004;
        case 0x305008u: goto label_305008;
        case 0x30500cu: goto label_30500c;
        case 0x305010u: goto label_305010;
        case 0x305014u: goto label_305014;
        case 0x305018u: goto label_305018;
        case 0x30501cu: goto label_30501c;
        case 0x305020u: goto label_305020;
        case 0x305024u: goto label_305024;
        case 0x305028u: goto label_305028;
        case 0x30502cu: goto label_30502c;
        case 0x305030u: goto label_305030;
        case 0x305034u: goto label_305034;
        case 0x305038u: goto label_305038;
        case 0x30503cu: goto label_30503c;
        case 0x305040u: goto label_305040;
        case 0x305044u: goto label_305044;
        case 0x305048u: goto label_305048;
        case 0x30504cu: goto label_30504c;
        case 0x305050u: goto label_305050;
        case 0x305054u: goto label_305054;
        case 0x305058u: goto label_305058;
        case 0x30505cu: goto label_30505c;
        case 0x305060u: goto label_305060;
        case 0x305064u: goto label_305064;
        case 0x305068u: goto label_305068;
        case 0x30506cu: goto label_30506c;
        case 0x305070u: goto label_305070;
        case 0x305074u: goto label_305074;
        case 0x305078u: goto label_305078;
        case 0x30507cu: goto label_30507c;
        case 0x305080u: goto label_305080;
        case 0x305084u: goto label_305084;
        case 0x305088u: goto label_305088;
        case 0x30508cu: goto label_30508c;
        case 0x305090u: goto label_305090;
        case 0x305094u: goto label_305094;
        case 0x305098u: goto label_305098;
        case 0x30509cu: goto label_30509c;
        case 0x3050a0u: goto label_3050a0;
        case 0x3050a4u: goto label_3050a4;
        case 0x3050a8u: goto label_3050a8;
        case 0x3050acu: goto label_3050ac;
        case 0x3050b0u: goto label_3050b0;
        case 0x3050b4u: goto label_3050b4;
        case 0x3050b8u: goto label_3050b8;
        case 0x3050bcu: goto label_3050bc;
        case 0x3050c0u: goto label_3050c0;
        case 0x3050c4u: goto label_3050c4;
        case 0x3050c8u: goto label_3050c8;
        case 0x3050ccu: goto label_3050cc;
        case 0x3050d0u: goto label_3050d0;
        case 0x3050d4u: goto label_3050d4;
        case 0x3050d8u: goto label_3050d8;
        case 0x3050dcu: goto label_3050dc;
        case 0x3050e0u: goto label_3050e0;
        case 0x3050e4u: goto label_3050e4;
        case 0x3050e8u: goto label_3050e8;
        case 0x3050ecu: goto label_3050ec;
        case 0x3050f0u: goto label_3050f0;
        case 0x3050f4u: goto label_3050f4;
        case 0x3050f8u: goto label_3050f8;
        case 0x3050fcu: goto label_3050fc;
        case 0x305100u: goto label_305100;
        case 0x305104u: goto label_305104;
        case 0x305108u: goto label_305108;
        case 0x30510cu: goto label_30510c;
        case 0x305110u: goto label_305110;
        case 0x305114u: goto label_305114;
        case 0x305118u: goto label_305118;
        case 0x30511cu: goto label_30511c;
        case 0x305120u: goto label_305120;
        case 0x305124u: goto label_305124;
        case 0x305128u: goto label_305128;
        case 0x30512cu: goto label_30512c;
        case 0x305130u: goto label_305130;
        case 0x305134u: goto label_305134;
        case 0x305138u: goto label_305138;
        case 0x30513cu: goto label_30513c;
        case 0x305140u: goto label_305140;
        case 0x305144u: goto label_305144;
        case 0x305148u: goto label_305148;
        case 0x30514cu: goto label_30514c;
        case 0x305150u: goto label_305150;
        case 0x305154u: goto label_305154;
        case 0x305158u: goto label_305158;
        case 0x30515cu: goto label_30515c;
        case 0x305160u: goto label_305160;
        case 0x305164u: goto label_305164;
        case 0x305168u: goto label_305168;
        case 0x30516cu: goto label_30516c;
        case 0x305170u: goto label_305170;
        case 0x305174u: goto label_305174;
        case 0x305178u: goto label_305178;
        case 0x30517cu: goto label_30517c;
        case 0x305180u: goto label_305180;
        case 0x305184u: goto label_305184;
        case 0x305188u: goto label_305188;
        case 0x30518cu: goto label_30518c;
        case 0x305190u: goto label_305190;
        case 0x305194u: goto label_305194;
        case 0x305198u: goto label_305198;
        case 0x30519cu: goto label_30519c;
        case 0x3051a0u: goto label_3051a0;
        case 0x3051a4u: goto label_3051a4;
        case 0x3051a8u: goto label_3051a8;
        case 0x3051acu: goto label_3051ac;
        case 0x3051b0u: goto label_3051b0;
        case 0x3051b4u: goto label_3051b4;
        case 0x3051b8u: goto label_3051b8;
        case 0x3051bcu: goto label_3051bc;
        case 0x3051c0u: goto label_3051c0;
        case 0x3051c4u: goto label_3051c4;
        case 0x3051c8u: goto label_3051c8;
        case 0x3051ccu: goto label_3051cc;
        case 0x3051d0u: goto label_3051d0;
        case 0x3051d4u: goto label_3051d4;
        case 0x3051d8u: goto label_3051d8;
        case 0x3051dcu: goto label_3051dc;
        case 0x3051e0u: goto label_3051e0;
        case 0x3051e4u: goto label_3051e4;
        case 0x3051e8u: goto label_3051e8;
        case 0x3051ecu: goto label_3051ec;
        case 0x3051f0u: goto label_3051f0;
        case 0x3051f4u: goto label_3051f4;
        case 0x3051f8u: goto label_3051f8;
        case 0x3051fcu: goto label_3051fc;
        case 0x305200u: goto label_305200;
        case 0x305204u: goto label_305204;
        case 0x305208u: goto label_305208;
        case 0x30520cu: goto label_30520c;
        case 0x305210u: goto label_305210;
        case 0x305214u: goto label_305214;
        case 0x305218u: goto label_305218;
        case 0x30521cu: goto label_30521c;
        case 0x305220u: goto label_305220;
        case 0x305224u: goto label_305224;
        case 0x305228u: goto label_305228;
        case 0x30522cu: goto label_30522c;
        case 0x305230u: goto label_305230;
        case 0x305234u: goto label_305234;
        case 0x305238u: goto label_305238;
        case 0x30523cu: goto label_30523c;
        case 0x305240u: goto label_305240;
        case 0x305244u: goto label_305244;
        case 0x305248u: goto label_305248;
        case 0x30524cu: goto label_30524c;
        case 0x305250u: goto label_305250;
        case 0x305254u: goto label_305254;
        case 0x305258u: goto label_305258;
        case 0x30525cu: goto label_30525c;
        case 0x305260u: goto label_305260;
        case 0x305264u: goto label_305264;
        case 0x305268u: goto label_305268;
        case 0x30526cu: goto label_30526c;
        case 0x305270u: goto label_305270;
        case 0x305274u: goto label_305274;
        case 0x305278u: goto label_305278;
        case 0x30527cu: goto label_30527c;
        case 0x305280u: goto label_305280;
        case 0x305284u: goto label_305284;
        case 0x305288u: goto label_305288;
        case 0x30528cu: goto label_30528c;
        case 0x305290u: goto label_305290;
        case 0x305294u: goto label_305294;
        case 0x305298u: goto label_305298;
        case 0x30529cu: goto label_30529c;
        case 0x3052a0u: goto label_3052a0;
        case 0x3052a4u: goto label_3052a4;
        case 0x3052a8u: goto label_3052a8;
        case 0x3052acu: goto label_3052ac;
        case 0x3052b0u: goto label_3052b0;
        case 0x3052b4u: goto label_3052b4;
        case 0x3052b8u: goto label_3052b8;
        case 0x3052bcu: goto label_3052bc;
        case 0x3052c0u: goto label_3052c0;
        case 0x3052c4u: goto label_3052c4;
        case 0x3052c8u: goto label_3052c8;
        case 0x3052ccu: goto label_3052cc;
        case 0x3052d0u: goto label_3052d0;
        case 0x3052d4u: goto label_3052d4;
        case 0x3052d8u: goto label_3052d8;
        case 0x3052dcu: goto label_3052dc;
        case 0x3052e0u: goto label_3052e0;
        case 0x3052e4u: goto label_3052e4;
        case 0x3052e8u: goto label_3052e8;
        case 0x3052ecu: goto label_3052ec;
        default: break;
    }

    ctx->pc = 0x304fa8u;

label_304fa8:
    // 0x304fa8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x304fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_304fac:
    // 0x304fac: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x304facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_304fb0:
    // 0x304fb0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x304fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_304fb4:
    // 0x304fb4: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x304fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_304fb8:
    // 0x304fb8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x304fb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_304fbc:
    // 0x304fbc: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x304fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_304fc0:
    // 0x304fc0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x304fc0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_304fc4:
    // 0x304fc4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x304fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_304fc8:
    // 0x304fc8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x304fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_304fcc:
    // 0x304fcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x304fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_304fd0:
    // 0x304fd0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x304fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_304fd4:
    // 0x304fd4: 0x8e900020  lw          $s0, 0x20($s4)
    ctx->pc = 0x304fd4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_304fd8:
    // 0x304fd8: 0x120200a8  beq         $s0, $v0, . + 4 + (0xA8 << 2)
label_304fdc:
    if (ctx->pc == 0x304FDCu) {
        ctx->pc = 0x304FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304FD8u;
        // 0x304fdc: 0x8e750000  lw          $s5, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304FE0u;
        goto label_304fe0;
    }
    ctx->pc = 0x304FD8u;
    {
        const bool branch_taken_0x304fd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x304FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304FD8u;
        // 0x304fdc: 0x8e750000  lw          $s5, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304fd8) {
            ctx->pc = 0x30527Cu;
            goto label_30527c;
        }
    }
    ctx->pc = 0x304FE0u;
label_304fe0:
    // 0x304fe0: 0x2a020015  slti        $v0, $s0, 0x15
    ctx->pc = 0x304fe0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)21) ? 1 : 0);
label_304fe4:
    // 0x304fe4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_304fe8:
    if (ctx->pc == 0x304FE8u) {
        ctx->pc = 0x304FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304FE4u;
        // 0x304fe8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304FECu;
        goto label_304fec;
    }
    ctx->pc = 0x304FE4u;
    {
        const bool branch_taken_0x304fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x304FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304FE4u;
        // 0x304fe8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304fe4) {
            ctx->pc = 0x304FFCu;
            goto label_304ffc;
        }
    }
    ctx->pc = 0x304FECu;
label_304fec:
    // 0x304fec: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
label_304ff0:
    if (ctx->pc == 0x304FF0u) {
        ctx->pc = 0x304FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304FECu;
        // 0x304ff0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304FF4u;
        goto label_304ff4;
    }
    ctx->pc = 0x304FECu;
    {
        const bool branch_taken_0x304fec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x304FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304FECu;
        // 0x304ff0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304fec) {
            ctx->pc = 0x305010u;
            goto label_305010;
        }
    }
    ctx->pc = 0x304FF4u;
label_304ff4:
    // 0x304ff4: 0x100000b3  b           . + 4 + (0xB3 << 2)
label_304ff8:
    if (ctx->pc == 0x304FF8u) {
        ctx->pc = 0x304FFCu;
        goto label_304ffc;
    }
    ctx->pc = 0x304FF4u;
    {
        const bool branch_taken_0x304ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x304ff4) {
            ctx->pc = 0x3052C4u;
            goto label_3052c4;
        }
    }
    ctx->pc = 0x304FFCu;
label_304ffc:
    // 0x304ffc: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x304ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_305000:
    // 0x305000: 0x120200aa  beq         $s0, $v0, . + 4 + (0xAA << 2)
label_305004:
    if (ctx->pc == 0x305004u) {
        ctx->pc = 0x305004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305000u;
        // 0x305004: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305008u;
        goto label_305008;
    }
    ctx->pc = 0x305000u;
    {
        const bool branch_taken_0x305000 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x305004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305000u;
        // 0x305004: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305000) {
            ctx->pc = 0x3052ACu;
            goto label_3052ac;
        }
    }
    ctx->pc = 0x305008u;
label_305008:
    // 0x305008: 0x100000ae  b           . + 4 + (0xAE << 2)
label_30500c:
    if (ctx->pc == 0x30500Cu) {
        ctx->pc = 0x305010u;
        goto label_305010;
    }
    ctx->pc = 0x305008u;
    {
        const bool branch_taken_0x305008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x305008) {
            ctx->pc = 0x3052C4u;
            goto label_3052c4;
        }
    }
    ctx->pc = 0x305010u;
label_305010:
    // 0x305010: 0x92820011  lbu         $v0, 0x11($s4)
    ctx->pc = 0x305010u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 17)));
label_305014:
    // 0x305014: 0x104000aa  beqz        $v0, . + 4 + (0xAA << 2)
label_305018:
    if (ctx->pc == 0x305018u) {
        ctx->pc = 0x305018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305014u;
        // 0x305018: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30501Cu;
        goto label_30501c;
    }
    ctx->pc = 0x305014u;
    {
        const bool branch_taken_0x305014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x305018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305014u;
        // 0x305018: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305014) {
            ctx->pc = 0x3052C0u;
            goto label_3052c0;
        }
    }
    ctx->pc = 0x30501Cu;
label_30501c:
    // 0x30501c: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x30501cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_305020:
    // 0x305020: 0xc088aa4  jal         func_222A90
label_305024:
    if (ctx->pc == 0x305024u) {
        ctx->pc = 0x305024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305020u;
        // 0x305024: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305028u;
        goto label_305028;
    }
    ctx->pc = 0x305020u;
    SET_GPR_U32(ctx, 31, 0x305028u);
    ctx->pc = 0x305024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305020u;
    // 0x305024: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A90u, 0x305020u, 0x305028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305028u;
label_305028:
    // 0x305028: 0x144000a6  bnez        $v0, . + 4 + (0xA6 << 2)
label_30502c:
    if (ctx->pc == 0x30502Cu) {
        ctx->pc = 0x30502Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305028u;
        // 0x30502c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305030u;
        goto label_305030;
    }
    ctx->pc = 0x305028u;
    {
        const bool branch_taken_0x305028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30502Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305028u;
        // 0x30502c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305028) {
            ctx->pc = 0x3052C4u;
            goto label_3052c4;
        }
    }
    ctx->pc = 0x305030u;
label_305030:
    // 0x305030: 0xc08a076  jal         func_2281D8
label_305034:
    if (ctx->pc == 0x305034u) {
        ctx->pc = 0x305034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305030u;
        // 0x305034: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305038u;
        goto label_305038;
    }
    ctx->pc = 0x305030u;
    SET_GPR_U32(ctx, 31, 0x305038u);
    ctx->pc = 0x305034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305030u;
    // 0x305034: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2281D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2281D8u, 0x305030u, 0x305038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305038u;
label_305038:
    // 0x305038: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x305038u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30503c:
    // 0x30503c: 0x16300006  bne         $s1, $s0, . + 4 + (0x6 << 2)
label_305040:
    if (ctx->pc == 0x305040u) {
        ctx->pc = 0x305040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30503Cu;
        // 0x305040: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305044u;
        goto label_305044;
    }
    ctx->pc = 0x30503Cu;
    {
        const bool branch_taken_0x30503c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x305040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30503Cu;
        // 0x305040: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30503c) {
            ctx->pc = 0x305058u;
            goto label_305058;
        }
    }
    ctx->pc = 0x305044u;
label_305044:
    // 0x305044: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x305044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_305048:
    // 0x305048: 0xc0a4742  jal         func_291D08
label_30504c:
    if (ctx->pc == 0x30504Cu) {
        ctx->pc = 0x30504Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305048u;
        // 0x30504c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305050u;
        goto label_305050;
    }
    ctx->pc = 0x305048u;
    SET_GPR_U32(ctx, 31, 0x305050u);
    ctx->pc = 0x30504Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305048u;
    // 0x30504c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291D08u, 0x305048u, 0x305050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305050u;
label_305050:
    // 0x305050: 0x10510026  beq         $v0, $s1, . + 4 + (0x26 << 2)
label_305054:
    if (ctx->pc == 0x305054u) {
        ctx->pc = 0x305054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305050u;
        // 0x305054: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305058u;
        goto label_305058;
    }
    ctx->pc = 0x305050u;
    {
        const bool branch_taken_0x305050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x305054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305050u;
        // 0x305054: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305050) {
            ctx->pc = 0x3050ECu;
            goto label_3050ec;
        }
    }
    ctx->pc = 0x305058u;
label_305058:
    // 0x305058: 0xc088a92  jal         func_222A48
label_30505c:
    if (ctx->pc == 0x30505Cu) {
        ctx->pc = 0x30505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305058u;
        // 0x30505c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305060u;
        goto label_305060;
    }
    ctx->pc = 0x305058u;
    SET_GPR_U32(ctx, 31, 0x305060u);
    ctx->pc = 0x30505Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305058u;
    // 0x30505c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A48u, 0x305058u, 0x305060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305060u;
label_305060:
    // 0x305060: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_305064:
    if (ctx->pc == 0x305064u) {
        ctx->pc = 0x305064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305060u;
        // 0x305064: 0x8262002c  lb          $v0, 0x2C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305068u;
        goto label_305068;
    }
    ctx->pc = 0x305060u;
    {
        const bool branch_taken_0x305060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x305060) {
            ctx->pc = 0x305064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305060u;
            // 0x305064: 0x8262002c  lb          $v0, 0x2C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305080u;
            goto label_305080;
        }
    }
    ctx->pc = 0x305068u;
label_305068:
    // 0x305068: 0xc087502  jal         func_21D408
label_30506c:
    if (ctx->pc == 0x30506Cu) {
        ctx->pc = 0x30506Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305068u;
        // 0x30506c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305070u;
        goto label_305070;
    }
    ctx->pc = 0x305068u;
    SET_GPR_U32(ctx, 31, 0x305070u);
    ctx->pc = 0x30506Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305068u;
    // 0x30506c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x305068u, 0x305070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305070u;
label_305070:
    // 0x305070: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x305070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_305074:
    // 0x305074: 0xc0a40ca  jal         func_290328
label_305078:
    if (ctx->pc == 0x305078u) {
        ctx->pc = 0x305078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305074u;
        // 0x305078: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30507Cu;
        goto label_30507c;
    }
    ctx->pc = 0x305074u;
    SET_GPR_U32(ctx, 31, 0x30507Cu);
    ctx->pc = 0x305078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305074u;
    // 0x305078: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290328u, 0x305074u, 0x30507Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30507Cu;
label_30507c:
    // 0x30507c: 0x8262002c  lb          $v0, 0x2C($s3)
    ctx->pc = 0x30507cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 44)));
label_305080:
    // 0x305080: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_305084:
    if (ctx->pc == 0x305084u) {
        ctx->pc = 0x305084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305080u;
        // 0x305084: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305088u;
        goto label_305088;
    }
    ctx->pc = 0x305080u;
    {
        const bool branch_taken_0x305080 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x305084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305080u;
        // 0x305084: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305080) {
            ctx->pc = 0x305094u;
            goto label_305094;
        }
    }
    ctx->pc = 0x305088u;
label_305088:
    // 0x305088: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x305088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_30508c:
    // 0x30508c: 0x10000002  b           . + 4 + (0x2 << 2)
label_305090:
    if (ctx->pc == 0x305090u) {
        ctx->pc = 0x305090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30508Cu;
        // 0x305090: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305094u;
        goto label_305094;
    }
    ctx->pc = 0x30508Cu;
    {
        const bool branch_taken_0x30508c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30508Cu;
        // 0x305090: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30508c) {
            ctx->pc = 0x305098u;
            goto label_305098;
        }
    }
    ctx->pc = 0x305094u;
label_305094:
    // 0x305094: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x305094u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_305098:
    // 0x305098: 0x1200004c  beqz        $s0, . + 4 + (0x4C << 2)
label_30509c:
    if (ctx->pc == 0x30509Cu) {
        ctx->pc = 0x3050A0u;
        goto label_3050a0;
    }
    ctx->pc = 0x305098u;
    {
        const bool branch_taken_0x305098 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x305098) {
            ctx->pc = 0x3051CCu;
            goto label_3051cc;
        }
    }
    ctx->pc = 0x3050A0u;
label_3050a0:
    // 0x3050a0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x3050a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3050a4:
    // 0x3050a4: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x3050a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_3050a8:
    // 0x3050a8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3050a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_3050ac:
    // 0x3050ac: 0x40f809  jalr        $v0
label_3050b0:
    if (ctx->pc == 0x3050B0u) {
        ctx->pc = 0x3050B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3050ACu;
        // 0x3050b0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3050B4u;
        goto label_3050b4;
    }
    ctx->pc = 0x3050ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3050B4u);
        ctx->pc = 0x3050B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3050ACu;
        // 0x3050b0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3050ACu, 0x3050B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3050B4u;
label_3050b4:
    // 0x3050b4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3050b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3050b8:
    // 0x3050b8: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x3050b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_3050bc:
    // 0x3050bc: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_3050c0:
    if (ctx->pc == 0x3050C0u) {
        ctx->pc = 0x3050C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3050BCu;
        // 0x3050c0: 0x2402004f  addiu       $v0, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3050C4u;
        goto label_3050c4;
    }
    ctx->pc = 0x3050BCu;
    {
        const bool branch_taken_0x3050bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3050C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3050BCu;
        // 0x3050c0: 0x2402004f  addiu       $v0, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3050bc) {
            ctx->pc = 0x3050D8u;
            goto label_3050d8;
        }
    }
    ctx->pc = 0x3050C4u;
label_3050c4:
    // 0x3050c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3050c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3050c8:
    // 0x3050c8: 0xc0aedee  jal         func_2BB7B8
label_3050cc:
    if (ctx->pc == 0x3050CCu) {
        ctx->pc = 0x3050CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3050C8u;
        // 0x3050cc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3050D0u;
        goto label_3050d0;
    }
    ctx->pc = 0x3050C8u;
    SET_GPR_U32(ctx, 31, 0x3050D0u);
    ctx->pc = 0x3050CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3050C8u;
    // 0x3050cc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB7B8u, 0x3050C8u, 0x3050D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3050D0u;
label_3050d0:
    // 0x3050d0: 0x1000007c  b           . + 4 + (0x7C << 2)
label_3050d4:
    if (ctx->pc == 0x3050D4u) {
        ctx->pc = 0x3050D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3050D0u;
        // 0x3050d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3050D8u;
        goto label_3050d8;
    }
    ctx->pc = 0x3050D0u;
    {
        const bool branch_taken_0x3050d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3050D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3050D0u;
        // 0x3050d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3050d0) {
            ctx->pc = 0x3052C4u;
            goto label_3052c4;
        }
    }
    ctx->pc = 0x3050D8u;
label_3050d8:
    // 0x3050d8: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_3050dc:
    if (ctx->pc == 0x3050DCu) {
        ctx->pc = 0x3050DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3050D8u;
        // 0x3050dc: 0x2402008b  addiu       $v0, $zero, 0x8B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3050E0u;
        goto label_3050e0;
    }
    ctx->pc = 0x3050D8u;
    {
        const bool branch_taken_0x3050d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3050DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3050D8u;
        // 0x3050dc: 0x2402008b  addiu       $v0, $zero, 0x8B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3050d8) {
            ctx->pc = 0x3050F4u;
            goto label_3050f4;
        }
    }
    ctx->pc = 0x3050E0u;
label_3050e0:
    // 0x3050e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3050e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3050e4:
    // 0x3050e4: 0xc0ab116  jal         func_2AC458
label_3050e8:
    if (ctx->pc == 0x3050E8u) {
        ctx->pc = 0x3050E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3050E4u;
        // 0x3050e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3050ECu;
        goto label_3050ec;
    }
    ctx->pc = 0x3050E4u;
    SET_GPR_U32(ctx, 31, 0x3050ECu);
    ctx->pc = 0x3050E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3050E4u;
    // 0x3050e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC458u, 0x3050E4u, 0x3050ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3050ECu;
label_3050ec:
    // 0x3050ec: 0x10000077  b           . + 4 + (0x77 << 2)
label_3050f0:
    if (ctx->pc == 0x3050F0u) {
        ctx->pc = 0x3050F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3050ECu;
        // 0x3050f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3050F4u;
        goto label_3050f4;
    }
    ctx->pc = 0x3050ECu;
    {
        const bool branch_taken_0x3050ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3050F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3050ECu;
        // 0x3050f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3050ec) {
            ctx->pc = 0x3052CCu;
            goto label_3052cc;
        }
    }
    ctx->pc = 0x3050F4u;
label_3050f4:
    // 0x3050f4: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_3050f8:
    if (ctx->pc == 0x3050F8u) {
        ctx->pc = 0x3050F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3050F4u;
        // 0x3050f8: 0x2402008a  addiu       $v0, $zero, 0x8A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3050FCu;
        goto label_3050fc;
    }
    ctx->pc = 0x3050F4u;
    {
        const bool branch_taken_0x3050f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3050F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3050F4u;
        // 0x3050f8: 0x2402008a  addiu       $v0, $zero, 0x8A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3050f4) {
            ctx->pc = 0x305110u;
            goto label_305110;
        }
    }
    ctx->pc = 0x3050FCu;
label_3050fc:
    // 0x3050fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3050fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_305100:
    // 0x305100: 0xc0bd662  jal         func_2F5988
label_305104:
    if (ctx->pc == 0x305104u) {
        ctx->pc = 0x305104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305100u;
        // 0x305104: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305108u;
        goto label_305108;
    }
    ctx->pc = 0x305100u;
    SET_GPR_U32(ctx, 31, 0x305108u);
    ctx->pc = 0x305104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305100u;
    // 0x305104: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5988u, 0x305100u, 0x305108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305108u;
label_305108:
    // 0x305108: 0x1000002c  b           . + 4 + (0x2C << 2)
label_30510c:
    if (ctx->pc == 0x30510Cu) {
        ctx->pc = 0x30510Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305108u;
        // 0x30510c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305110u;
        goto label_305110;
    }
    ctx->pc = 0x305108u;
    {
        const bool branch_taken_0x305108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30510Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305108u;
        // 0x30510c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305108) {
            ctx->pc = 0x3051BCu;
            goto label_3051bc;
        }
    }
    ctx->pc = 0x305110u;
label_305110:
    // 0x305110: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_305114:
    if (ctx->pc == 0x305114u) {
        ctx->pc = 0x305114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305110u;
        // 0x305114: 0x24020085  addiu       $v0, $zero, 0x85 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305118u;
        goto label_305118;
    }
    ctx->pc = 0x305110u;
    {
        const bool branch_taken_0x305110 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x305114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305110u;
        // 0x305114: 0x24020085  addiu       $v0, $zero, 0x85 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305110) {
            ctx->pc = 0x30512Cu;
            goto label_30512c;
        }
    }
    ctx->pc = 0x305118u;
label_305118:
    // 0x305118: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x305118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30511c:
    // 0x30511c: 0xc0bb982  jal         func_2EE608
label_305120:
    if (ctx->pc == 0x305120u) {
        ctx->pc = 0x305120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30511Cu;
        // 0x305120: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305124u;
        goto label_305124;
    }
    ctx->pc = 0x30511Cu;
    SET_GPR_U32(ctx, 31, 0x305124u);
    ctx->pc = 0x305120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30511Cu;
    // 0x305120: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE608u, 0x30511Cu, 0x305124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305124u;
label_305124:
    // 0x305124: 0x10000025  b           . + 4 + (0x25 << 2)
label_305128:
    if (ctx->pc == 0x305128u) {
        ctx->pc = 0x305128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305124u;
        // 0x305128: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30512Cu;
        goto label_30512c;
    }
    ctx->pc = 0x305124u;
    {
        const bool branch_taken_0x305124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305124u;
        // 0x305128: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305124) {
            ctx->pc = 0x3051BCu;
            goto label_3051bc;
        }
    }
    ctx->pc = 0x30512Cu;
label_30512c:
    // 0x30512c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_305130:
    if (ctx->pc == 0x305130u) {
        ctx->pc = 0x305130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30512Cu;
        // 0x305130: 0x24020086  addiu       $v0, $zero, 0x86 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305134u;
        goto label_305134;
    }
    ctx->pc = 0x30512Cu;
    {
        const bool branch_taken_0x30512c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x305130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30512Cu;
        // 0x305130: 0x24020086  addiu       $v0, $zero, 0x86 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30512c) {
            ctx->pc = 0x305148u;
            goto label_305148;
        }
    }
    ctx->pc = 0x305134u;
label_305134:
    // 0x305134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x305134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_305138:
    // 0x305138: 0xc0ba886  jal         func_2EA218
label_30513c:
    if (ctx->pc == 0x30513Cu) {
        ctx->pc = 0x30513Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305138u;
        // 0x30513c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305140u;
        goto label_305140;
    }
    ctx->pc = 0x305138u;
    SET_GPR_U32(ctx, 31, 0x305140u);
    ctx->pc = 0x30513Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305138u;
    // 0x30513c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EA218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA218u, 0x305138u, 0x305140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305140u;
label_305140:
    // 0x305140: 0x1000001e  b           . + 4 + (0x1E << 2)
label_305144:
    if (ctx->pc == 0x305144u) {
        ctx->pc = 0x305144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305140u;
        // 0x305144: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305148u;
        goto label_305148;
    }
    ctx->pc = 0x305140u;
    {
        const bool branch_taken_0x305140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305140u;
        // 0x305144: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305140) {
            ctx->pc = 0x3051BCu;
            goto label_3051bc;
        }
    }
    ctx->pc = 0x305148u;
label_305148:
    // 0x305148: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_30514c:
    if (ctx->pc == 0x30514Cu) {
        ctx->pc = 0x30514Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305148u;
        // 0x30514c: 0x24020089  addiu       $v0, $zero, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305150u;
        goto label_305150;
    }
    ctx->pc = 0x305148u;
    {
        const bool branch_taken_0x305148 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30514Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305148u;
        // 0x30514c: 0x24020089  addiu       $v0, $zero, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305148) {
            ctx->pc = 0x305164u;
            goto label_305164;
        }
    }
    ctx->pc = 0x305150u;
label_305150:
    // 0x305150: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x305150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_305154:
    // 0x305154: 0xc0bafe6  jal         func_2EBF98
label_305158:
    if (ctx->pc == 0x305158u) {
        ctx->pc = 0x305158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305154u;
        // 0x305158: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30515Cu;
        goto label_30515c;
    }
    ctx->pc = 0x305154u;
    SET_GPR_U32(ctx, 31, 0x30515Cu);
    ctx->pc = 0x305158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305154u;
    // 0x305158: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBF98u, 0x305154u, 0x30515Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30515Cu;
label_30515c:
    // 0x30515c: 0x10000017  b           . + 4 + (0x17 << 2)
label_305160:
    if (ctx->pc == 0x305160u) {
        ctx->pc = 0x305160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30515Cu;
        // 0x305160: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305164u;
        goto label_305164;
    }
    ctx->pc = 0x30515Cu;
    {
        const bool branch_taken_0x30515c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30515Cu;
        // 0x305160: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30515c) {
            ctx->pc = 0x3051BCu;
            goto label_3051bc;
        }
    }
    ctx->pc = 0x305164u;
label_305164:
    // 0x305164: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_305168:
    if (ctx->pc == 0x305168u) {
        ctx->pc = 0x305168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305164u;
        // 0x305168: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30516Cu;
        goto label_30516c;
    }
    ctx->pc = 0x305164u;
    {
        const bool branch_taken_0x305164 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x305168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305164u;
        // 0x305168: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305164) {
            ctx->pc = 0x305180u;
            goto label_305180;
        }
    }
    ctx->pc = 0x30516Cu;
label_30516c:
    // 0x30516c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30516cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_305170:
    // 0x305170: 0xc0bdcca  jal         func_2F7328
label_305174:
    if (ctx->pc == 0x305174u) {
        ctx->pc = 0x305174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305170u;
        // 0x305174: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305178u;
        goto label_305178;
    }
    ctx->pc = 0x305170u;
    SET_GPR_U32(ctx, 31, 0x305178u);
    ctx->pc = 0x305174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305170u;
    // 0x305174: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7328u, 0x305170u, 0x305178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305178u;
label_305178:
    // 0x305178: 0x10000010  b           . + 4 + (0x10 << 2)
label_30517c:
    if (ctx->pc == 0x30517Cu) {
        ctx->pc = 0x30517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305178u;
        // 0x30517c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305180u;
        goto label_305180;
    }
    ctx->pc = 0x305178u;
    {
        const bool branch_taken_0x305178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305178u;
        // 0x30517c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305178) {
            ctx->pc = 0x3051BCu;
            goto label_3051bc;
        }
    }
    ctx->pc = 0x305180u;
label_305180:
    // 0x305180: 0xc0a3658  jal         func_28D960
label_305184:
    if (ctx->pc == 0x305184u) {
        ctx->pc = 0x305184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305180u;
        // 0x305184: 0x24050054  addiu       $a1, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305188u;
        goto label_305188;
    }
    ctx->pc = 0x305180u;
    SET_GPR_U32(ctx, 31, 0x305188u);
    ctx->pc = 0x305184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305180u;
    // 0x305184: 0x24050054  addiu       $a1, $zero, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x305180u, 0x305188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305188u;
label_305188:
    // 0x305188: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x305188u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30518c:
    // 0x30518c: 0x460000f  bltz        $v1, . + 4 + (0xF << 2)
label_305190:
    if (ctx->pc == 0x305190u) {
        ctx->pc = 0x305194u;
        goto label_305194;
    }
    ctx->pc = 0x30518Cu;
    {
        const bool branch_taken_0x30518c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x30518c) {
            ctx->pc = 0x3051CCu;
            goto label_3051cc;
        }
    }
    ctx->pc = 0x305194u;
label_305194:
    // 0x305194: 0x8262002c  lb          $v0, 0x2C($s3)
    ctx->pc = 0x305194u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 44)));
label_305198:
    // 0x305198: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x305198u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_30519c:
    // 0x30519c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_3051a0:
    if (ctx->pc == 0x3051A0u) {
        ctx->pc = 0x3051A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30519Cu;
        // 0x3051a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3051A4u;
        goto label_3051a4;
    }
    ctx->pc = 0x30519Cu;
    {
        const bool branch_taken_0x30519c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3051A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30519Cu;
        // 0x3051a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30519c) {
            ctx->pc = 0x3051B0u;
            goto label_3051b0;
        }
    }
    ctx->pc = 0x3051A4u;
label_3051a4:
    // 0x3051a4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3051a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3051a8:
    // 0x3051a8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x3051a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_3051ac:
    // 0x3051ac: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x3051acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_3051b0:
    // 0x3051b0: 0xc0b4440  jal         func_2D1100
label_3051b4:
    if (ctx->pc == 0x3051B4u) {
        ctx->pc = 0x3051B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3051B0u;
        // 0x3051b4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3051B8u;
        goto label_3051b8;
    }
    ctx->pc = 0x3051B0u;
    SET_GPR_U32(ctx, 31, 0x3051B8u);
    ctx->pc = 0x3051B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3051B0u;
    // 0x3051b4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1100u, 0x3051B0u, 0x3051B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3051B8u;
label_3051b8:
    // 0x3051b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3051b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3051bc:
    // 0x3051bc: 0x14430041  bne         $v0, $v1, . + 4 + (0x41 << 2)
label_3051c0:
    if (ctx->pc == 0x3051C0u) {
        ctx->pc = 0x3051C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3051BCu;
        // 0x3051c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3051C4u;
        goto label_3051c4;
    }
    ctx->pc = 0x3051BCu;
    {
        const bool branch_taken_0x3051bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3051C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3051BCu;
        // 0x3051c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3051bc) {
            ctx->pc = 0x3052C4u;
            goto label_3052c4;
        }
    }
    ctx->pc = 0x3051C4u;
label_3051c4:
    // 0x3051c4: 0x10000041  b           . + 4 + (0x41 << 2)
label_3051c8:
    if (ctx->pc == 0x3051C8u) {
        ctx->pc = 0x3051C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3051C4u;
        // 0x3051c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3051CCu;
        goto label_3051cc;
    }
    ctx->pc = 0x3051C4u;
    {
        const bool branch_taken_0x3051c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3051C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3051C4u;
        // 0x3051c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3051c4) {
            ctx->pc = 0x3052CCu;
            goto label_3052cc;
        }
    }
    ctx->pc = 0x3051CCu;
label_3051cc:
    // 0x3051cc: 0xc08a096  jal         func_228258
label_3051d0:
    if (ctx->pc == 0x3051D0u) {
        ctx->pc = 0x3051D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3051CCu;
        // 0x3051d0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3051D4u;
        goto label_3051d4;
    }
    ctx->pc = 0x3051CCu;
    SET_GPR_U32(ctx, 31, 0x3051D4u);
    ctx->pc = 0x3051D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3051CCu;
    // 0x3051d0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228258u, 0x3051CCu, 0x3051D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3051D4u;
label_3051d4:
    // 0x3051d4: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_3051d8:
    if (ctx->pc == 0x3051D8u) {
        ctx->pc = 0x3051DCu;
        goto label_3051dc;
    }
    ctx->pc = 0x3051D4u;
    {
        const bool branch_taken_0x3051d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3051d4) {
            ctx->pc = 0x305228u;
            goto label_305228;
        }
    }
    ctx->pc = 0x3051DCu;
label_3051dc:
    // 0x3051dc: 0xc0a40d2  jal         func_290348
label_3051e0:
    if (ctx->pc == 0x3051E0u) {
        ctx->pc = 0x3051E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3051DCu;
        // 0x3051e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3051E4u;
        goto label_3051e4;
    }
    ctx->pc = 0x3051DCu;
    SET_GPR_U32(ctx, 31, 0x3051E4u);
    ctx->pc = 0x3051E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3051DCu;
    // 0x3051e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290348u, 0x3051DCu, 0x3051E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3051E4u;
label_3051e4:
    // 0x3051e4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_3051e8:
    if (ctx->pc == 0x3051E8u) {
        ctx->pc = 0x3051E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3051E4u;
        // 0x3051e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3051ECu;
        goto label_3051ec;
    }
    ctx->pc = 0x3051E4u;
    {
        const bool branch_taken_0x3051e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3051E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3051E4u;
        // 0x3051e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3051e4) {
            ctx->pc = 0x305208u;
            goto label_305208;
        }
    }
    ctx->pc = 0x3051ECu;
label_3051ec:
    // 0x3051ec: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x3051ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_3051f0:
    // 0x3051f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3051f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3051f4:
    // 0x3051f4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x3051f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_3051f8:
    // 0x3051f8: 0xc0a34ba  jal         func_28D2E8
label_3051fc:
    if (ctx->pc == 0x3051FCu) {
        ctx->pc = 0x3051FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3051F8u;
        // 0x3051fc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305200u;
        goto label_305200;
    }
    ctx->pc = 0x3051F8u;
    SET_GPR_U32(ctx, 31, 0x305200u);
    ctx->pc = 0x3051FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3051F8u;
    // 0x3051fc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D2E8u, 0x3051F8u, 0x305200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305200u;
label_305200:
    // 0x305200: 0x10000030  b           . + 4 + (0x30 << 2)
label_305204:
    if (ctx->pc == 0x305204u) {
        ctx->pc = 0x305204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305200u;
        // 0x305204: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305208u;
        goto label_305208;
    }
    ctx->pc = 0x305200u;
    {
        const bool branch_taken_0x305200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305200u;
        // 0x305204: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305200) {
            ctx->pc = 0x3052C4u;
            goto label_3052c4;
        }
    }
    ctx->pc = 0x305208u;
label_305208:
    // 0x305208: 0xc0a354e  jal         func_28D538
label_30520c:
    if (ctx->pc == 0x30520Cu) {
        ctx->pc = 0x30520Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305208u;
        // 0x30520c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305210u;
        goto label_305210;
    }
    ctx->pc = 0x305208u;
    SET_GPR_U32(ctx, 31, 0x305210u);
    ctx->pc = 0x30520Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305208u;
    // 0x30520c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D538u, 0x305208u, 0x305210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305210u;
label_305210:
    // 0x305210: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x305210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_305214:
    // 0x305214: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x305214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_305218:
    // 0x305218: 0xc0a33f8  jal         func_28CFE0
label_30521c:
    if (ctx->pc == 0x30521Cu) {
        ctx->pc = 0x30521Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305218u;
        // 0x30521c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305220u;
        goto label_305220;
    }
    ctx->pc = 0x305218u;
    SET_GPR_U32(ctx, 31, 0x305220u);
    ctx->pc = 0x30521Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305218u;
    // 0x30521c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x305218u, 0x305220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305220u;
label_305220:
    // 0x305220: 0x10000028  b           . + 4 + (0x28 << 2)
label_305224:
    if (ctx->pc == 0x305224u) {
        ctx->pc = 0x305224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305220u;
        // 0x305224: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305228u;
        goto label_305228;
    }
    ctx->pc = 0x305220u;
    {
        const bool branch_taken_0x305220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305220u;
        // 0x305224: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305220) {
            ctx->pc = 0x3052C4u;
            goto label_3052c4;
        }
    }
    ctx->pc = 0x305228u;
label_305228:
    // 0x305228: 0xc0874fa  jal         func_21D3E8
label_30522c:
    if (ctx->pc == 0x30522Cu) {
        ctx->pc = 0x30522Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305228u;
        // 0x30522c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305230u;
        goto label_305230;
    }
    ctx->pc = 0x305228u;
    SET_GPR_U32(ctx, 31, 0x305230u);
    ctx->pc = 0x30522Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305228u;
    // 0x30522c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x305228u, 0x305230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305230u;
label_305230:
    // 0x305230: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x305230u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_305234:
    // 0x305234: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
label_305238:
    if (ctx->pc == 0x305238u) {
        ctx->pc = 0x305238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305234u;
        // 0x305238: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30523Cu;
        goto label_30523c;
    }
    ctx->pc = 0x305234u;
    {
        const bool branch_taken_0x305234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x305238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305234u;
        // 0x305238: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305234) {
            ctx->pc = 0x3052C0u;
            goto label_3052c0;
        }
    }
    ctx->pc = 0x30523Cu;
label_30523c:
    // 0x30523c: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x30523cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_305240:
    // 0x305240: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x305240u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_305244:
    // 0x305244: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x305244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_305248:
    // 0x305248: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x305248u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30524c:
    // 0x30524c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30524cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_305250:
    // 0x305250: 0xc0a4d90  jal         func_293640
label_305254:
    if (ctx->pc == 0x305254u) {
        ctx->pc = 0x305254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305250u;
        // 0x305254: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305258u;
        goto label_305258;
    }
    ctx->pc = 0x305250u;
    SET_GPR_U32(ctx, 31, 0x305258u);
    ctx->pc = 0x305254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305250u;
    // 0x305254: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293640u, 0x305250u, 0x305258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305258u;
label_305258:
    // 0x305258: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x305258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_30525c:
    // 0x30525c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x30525cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_305260:
    // 0x305260: 0x26440284  addiu       $a0, $s2, 0x284
    ctx->pc = 0x305260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 644));
label_305264:
    // 0x305264: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x305264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_305268:
    // 0x305268: 0x24060bb8  addiu       $a2, $zero, 0xBB8
    ctx->pc = 0x305268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
label_30526c:
    // 0x30526c: 0xc0a6800  jal         func_29A000
label_305270:
    if (ctx->pc == 0x305270u) {
        ctx->pc = 0x305270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30526Cu;
        // 0x305270: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305274u;
        goto label_305274;
    }
    ctx->pc = 0x30526Cu;
    SET_GPR_U32(ctx, 31, 0x305274u);
    ctx->pc = 0x305270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30526Cu;
    // 0x305270: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x30526Cu, 0x305274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305274u;
label_305274:
    // 0x305274: 0x10000013  b           . + 4 + (0x13 << 2)
label_305278:
    if (ctx->pc == 0x305278u) {
        ctx->pc = 0x305278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305274u;
        // 0x305278: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30527Cu;
        goto label_30527c;
    }
    ctx->pc = 0x305274u;
    {
        const bool branch_taken_0x305274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305274u;
        // 0x305278: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305274) {
            ctx->pc = 0x3052C4u;
            goto label_3052c4;
        }
    }
    ctx->pc = 0x30527Cu;
label_30527c:
    // 0x30527c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x30527cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_305280:
    // 0x305280: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_305284:
    if (ctx->pc == 0x305284u) {
        ctx->pc = 0x305284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305280u;
        // 0x305284: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305288u;
        goto label_305288;
    }
    ctx->pc = 0x305280u;
    {
        const bool branch_taken_0x305280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305280u;
        // 0x305284: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305280) {
            ctx->pc = 0x3052C4u;
            goto label_3052c4;
        }
    }
    ctx->pc = 0x305288u;
label_305288:
    // 0x305288: 0x8e63020c  lw          $v1, 0x20C($s3)
    ctx->pc = 0x305288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 524)));
label_30528c:
    // 0x30528c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x30528cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_305290:
    // 0x305290: 0x38420017  xori        $v0, $v0, 0x17
    ctx->pc = 0x305290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)23);
label_305294:
    // 0x305294: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_305298:
    if (ctx->pc == 0x305298u) {
        ctx->pc = 0x30529Cu;
        goto label_30529c;
    }
    ctx->pc = 0x305294u;
    {
        const bool branch_taken_0x305294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x305294) {
            ctx->pc = 0x3052C4u;
            goto label_3052c4;
        }
    }
    ctx->pc = 0x30529Cu;
label_30529c:
    // 0x30529c: 0xc0a4658  jal         func_291960
label_3052a0:
    if (ctx->pc == 0x3052A0u) {
        ctx->pc = 0x3052A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30529Cu;
        // 0x3052a0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3052A4u;
        goto label_3052a4;
    }
    ctx->pc = 0x30529Cu;
    SET_GPR_U32(ctx, 31, 0x3052A4u);
    ctx->pc = 0x3052A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30529Cu;
    // 0x3052a0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291960u, 0x30529Cu, 0x3052A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3052A4u;
label_3052a4:
    // 0x3052a4: 0x10000007  b           . + 4 + (0x7 << 2)
label_3052a8:
    if (ctx->pc == 0x3052A8u) {
        ctx->pc = 0x3052A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3052A4u;
        // 0x3052a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3052ACu;
        goto label_3052ac;
    }
    ctx->pc = 0x3052A4u;
    {
        const bool branch_taken_0x3052a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3052A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3052A4u;
        // 0x3052a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3052a4) {
            ctx->pc = 0x3052C4u;
            goto label_3052c4;
        }
    }
    ctx->pc = 0x3052ACu;
label_3052ac:
    // 0x3052ac: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3052acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3052b0:
    // 0x3052b0: 0xc0a459a  jal         func_291668
label_3052b4:
    if (ctx->pc == 0x3052B4u) {
        ctx->pc = 0x3052B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3052B0u;
        // 0x3052b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3052B8u;
        goto label_3052b8;
    }
    ctx->pc = 0x3052B0u;
    SET_GPR_U32(ctx, 31, 0x3052B8u);
    ctx->pc = 0x3052B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3052B0u;
    // 0x3052b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291668u, 0x3052B0u, 0x3052B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3052B8u;
label_3052b8:
    // 0x3052b8: 0x10000004  b           . + 4 + (0x4 << 2)
label_3052bc:
    if (ctx->pc == 0x3052BCu) {
        ctx->pc = 0x3052BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3052B8u;
        // 0x3052bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3052C0u;
        goto label_3052c0;
    }
    ctx->pc = 0x3052B8u;
    {
        const bool branch_taken_0x3052b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3052BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3052B8u;
        // 0x3052bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3052b8) {
            ctx->pc = 0x3052CCu;
            goto label_3052cc;
        }
    }
    ctx->pc = 0x3052C0u;
label_3052c0:
    // 0x3052c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3052c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3052c4:
    // 0x3052c4: 0xc0a4b60  jal         func_292D80
label_3052c8:
    if (ctx->pc == 0x3052C8u) {
        ctx->pc = 0x3052C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3052C4u;
        // 0x3052c8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3052CCu;
        goto label_3052cc;
    }
    ctx->pc = 0x3052C4u;
    SET_GPR_U32(ctx, 31, 0x3052CCu);
    ctx->pc = 0x3052C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3052C4u;
    // 0x3052c8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292D80u, 0x3052C4u, 0x3052CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3052CCu;
label_3052cc:
    // 0x3052cc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3052ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3052d0:
    // 0x3052d0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3052d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3052d4:
    // 0x3052d4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3052d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3052d8:
    // 0x3052d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3052d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3052dc:
    // 0x3052dc: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3052dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3052e0:
    // 0x3052e0: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x3052e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3052e4:
    // 0x3052e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3052e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3052e8:
    // 0x3052e8: 0x3e00008  jr          $ra
label_3052ec:
    if (ctx->pc == 0x3052ECu) {
        ctx->pc = 0x3052ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3052E8u;
        // 0x3052ec: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3052F0u;
        goto label_fallthrough_0x3052e8;
    }
    ctx->pc = 0x3052E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3052ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3052E8u;
        // 0x3052ec: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3052E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3052e8:
    ctx->pc = 0x3052F0u;
}
