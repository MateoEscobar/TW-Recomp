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

// Function: sub_00301248
// Address: 0x301248 - 0x301538
void sub_00301248_0x301248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00301248_0x301248");
#endif

    switch (ctx->pc) {
        case 0x301248u: goto label_301248;
        case 0x30124cu: goto label_30124c;
        case 0x301250u: goto label_301250;
        case 0x301254u: goto label_301254;
        case 0x301258u: goto label_301258;
        case 0x30125cu: goto label_30125c;
        case 0x301260u: goto label_301260;
        case 0x301264u: goto label_301264;
        case 0x301268u: goto label_301268;
        case 0x30126cu: goto label_30126c;
        case 0x301270u: goto label_301270;
        case 0x301274u: goto label_301274;
        case 0x301278u: goto label_301278;
        case 0x30127cu: goto label_30127c;
        case 0x301280u: goto label_301280;
        case 0x301284u: goto label_301284;
        case 0x301288u: goto label_301288;
        case 0x30128cu: goto label_30128c;
        case 0x301290u: goto label_301290;
        case 0x301294u: goto label_301294;
        case 0x301298u: goto label_301298;
        case 0x30129cu: goto label_30129c;
        case 0x3012a0u: goto label_3012a0;
        case 0x3012a4u: goto label_3012a4;
        case 0x3012a8u: goto label_3012a8;
        case 0x3012acu: goto label_3012ac;
        case 0x3012b0u: goto label_3012b0;
        case 0x3012b4u: goto label_3012b4;
        case 0x3012b8u: goto label_3012b8;
        case 0x3012bcu: goto label_3012bc;
        case 0x3012c0u: goto label_3012c0;
        case 0x3012c4u: goto label_3012c4;
        case 0x3012c8u: goto label_3012c8;
        case 0x3012ccu: goto label_3012cc;
        case 0x3012d0u: goto label_3012d0;
        case 0x3012d4u: goto label_3012d4;
        case 0x3012d8u: goto label_3012d8;
        case 0x3012dcu: goto label_3012dc;
        case 0x3012e0u: goto label_3012e0;
        case 0x3012e4u: goto label_3012e4;
        case 0x3012e8u: goto label_3012e8;
        case 0x3012ecu: goto label_3012ec;
        case 0x3012f0u: goto label_3012f0;
        case 0x3012f4u: goto label_3012f4;
        case 0x3012f8u: goto label_3012f8;
        case 0x3012fcu: goto label_3012fc;
        case 0x301300u: goto label_301300;
        case 0x301304u: goto label_301304;
        case 0x301308u: goto label_301308;
        case 0x30130cu: goto label_30130c;
        case 0x301310u: goto label_301310;
        case 0x301314u: goto label_301314;
        case 0x301318u: goto label_301318;
        case 0x30131cu: goto label_30131c;
        case 0x301320u: goto label_301320;
        case 0x301324u: goto label_301324;
        case 0x301328u: goto label_301328;
        case 0x30132cu: goto label_30132c;
        case 0x301330u: goto label_301330;
        case 0x301334u: goto label_301334;
        case 0x301338u: goto label_301338;
        case 0x30133cu: goto label_30133c;
        case 0x301340u: goto label_301340;
        case 0x301344u: goto label_301344;
        case 0x301348u: goto label_301348;
        case 0x30134cu: goto label_30134c;
        case 0x301350u: goto label_301350;
        case 0x301354u: goto label_301354;
        case 0x301358u: goto label_301358;
        case 0x30135cu: goto label_30135c;
        case 0x301360u: goto label_301360;
        case 0x301364u: goto label_301364;
        case 0x301368u: goto label_301368;
        case 0x30136cu: goto label_30136c;
        case 0x301370u: goto label_301370;
        case 0x301374u: goto label_301374;
        case 0x301378u: goto label_301378;
        case 0x30137cu: goto label_30137c;
        case 0x301380u: goto label_301380;
        case 0x301384u: goto label_301384;
        case 0x301388u: goto label_301388;
        case 0x30138cu: goto label_30138c;
        case 0x301390u: goto label_301390;
        case 0x301394u: goto label_301394;
        case 0x301398u: goto label_301398;
        case 0x30139cu: goto label_30139c;
        case 0x3013a0u: goto label_3013a0;
        case 0x3013a4u: goto label_3013a4;
        case 0x3013a8u: goto label_3013a8;
        case 0x3013acu: goto label_3013ac;
        case 0x3013b0u: goto label_3013b0;
        case 0x3013b4u: goto label_3013b4;
        case 0x3013b8u: goto label_3013b8;
        case 0x3013bcu: goto label_3013bc;
        case 0x3013c0u: goto label_3013c0;
        case 0x3013c4u: goto label_3013c4;
        case 0x3013c8u: goto label_3013c8;
        case 0x3013ccu: goto label_3013cc;
        case 0x3013d0u: goto label_3013d0;
        case 0x3013d4u: goto label_3013d4;
        case 0x3013d8u: goto label_3013d8;
        case 0x3013dcu: goto label_3013dc;
        case 0x3013e0u: goto label_3013e0;
        case 0x3013e4u: goto label_3013e4;
        case 0x3013e8u: goto label_3013e8;
        case 0x3013ecu: goto label_3013ec;
        case 0x3013f0u: goto label_3013f0;
        case 0x3013f4u: goto label_3013f4;
        case 0x3013f8u: goto label_3013f8;
        case 0x3013fcu: goto label_3013fc;
        case 0x301400u: goto label_301400;
        case 0x301404u: goto label_301404;
        case 0x301408u: goto label_301408;
        case 0x30140cu: goto label_30140c;
        case 0x301410u: goto label_301410;
        case 0x301414u: goto label_301414;
        case 0x301418u: goto label_301418;
        case 0x30141cu: goto label_30141c;
        case 0x301420u: goto label_301420;
        case 0x301424u: goto label_301424;
        case 0x301428u: goto label_301428;
        case 0x30142cu: goto label_30142c;
        case 0x301430u: goto label_301430;
        case 0x301434u: goto label_301434;
        case 0x301438u: goto label_301438;
        case 0x30143cu: goto label_30143c;
        case 0x301440u: goto label_301440;
        case 0x301444u: goto label_301444;
        case 0x301448u: goto label_301448;
        case 0x30144cu: goto label_30144c;
        case 0x301450u: goto label_301450;
        case 0x301454u: goto label_301454;
        case 0x301458u: goto label_301458;
        case 0x30145cu: goto label_30145c;
        case 0x301460u: goto label_301460;
        case 0x301464u: goto label_301464;
        case 0x301468u: goto label_301468;
        case 0x30146cu: goto label_30146c;
        case 0x301470u: goto label_301470;
        case 0x301474u: goto label_301474;
        case 0x301478u: goto label_301478;
        case 0x30147cu: goto label_30147c;
        case 0x301480u: goto label_301480;
        case 0x301484u: goto label_301484;
        case 0x301488u: goto label_301488;
        case 0x30148cu: goto label_30148c;
        case 0x301490u: goto label_301490;
        case 0x301494u: goto label_301494;
        case 0x301498u: goto label_301498;
        case 0x30149cu: goto label_30149c;
        case 0x3014a0u: goto label_3014a0;
        case 0x3014a4u: goto label_3014a4;
        case 0x3014a8u: goto label_3014a8;
        case 0x3014acu: goto label_3014ac;
        case 0x3014b0u: goto label_3014b0;
        case 0x3014b4u: goto label_3014b4;
        case 0x3014b8u: goto label_3014b8;
        case 0x3014bcu: goto label_3014bc;
        case 0x3014c0u: goto label_3014c0;
        case 0x3014c4u: goto label_3014c4;
        case 0x3014c8u: goto label_3014c8;
        case 0x3014ccu: goto label_3014cc;
        case 0x3014d0u: goto label_3014d0;
        case 0x3014d4u: goto label_3014d4;
        case 0x3014d8u: goto label_3014d8;
        case 0x3014dcu: goto label_3014dc;
        case 0x3014e0u: goto label_3014e0;
        case 0x3014e4u: goto label_3014e4;
        case 0x3014e8u: goto label_3014e8;
        case 0x3014ecu: goto label_3014ec;
        case 0x3014f0u: goto label_3014f0;
        case 0x3014f4u: goto label_3014f4;
        case 0x3014f8u: goto label_3014f8;
        case 0x3014fcu: goto label_3014fc;
        case 0x301500u: goto label_301500;
        case 0x301504u: goto label_301504;
        case 0x301508u: goto label_301508;
        case 0x30150cu: goto label_30150c;
        case 0x301510u: goto label_301510;
        case 0x301514u: goto label_301514;
        case 0x301518u: goto label_301518;
        case 0x30151cu: goto label_30151c;
        case 0x301520u: goto label_301520;
        case 0x301524u: goto label_301524;
        case 0x301528u: goto label_301528;
        case 0x30152cu: goto label_30152c;
        case 0x301530u: goto label_301530;
        case 0x301534u: goto label_301534;
        default: break;
    }

    ctx->pc = 0x301248u;

label_301248:
    // 0x301248: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x301248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_30124c:
    // 0x30124c: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x30124cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_301250:
    // 0x301250: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x301250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_301254:
    // 0x301254: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x301254u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_301258:
    // 0x301258: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x301258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_30125c:
    // 0x30125c: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x30125cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_301260:
    // 0x301260: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x301260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_301264:
    // 0x301264: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x301264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_301268:
    // 0x301268: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x301268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_30126c:
    // 0x30126c: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x30126cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_301270:
    // 0x301270: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x301270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_301274:
    // 0x301274: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x301274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
label_301278:
    // 0x301278: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x301278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_30127c:
    // 0x30127c: 0xc0a3658  jal         func_28D960
label_301280:
    if (ctx->pc == 0x301280u) {
        ctx->pc = 0x301280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30127Cu;
        // 0x301280: 0xe7b400f0  swc1        $f20, 0xF0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x301284u;
        goto label_301284;
    }
    ctx->pc = 0x30127Cu;
    SET_GPR_U32(ctx, 31, 0x301284u);
    ctx->pc = 0x301280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30127Cu;
    // 0x301280: 0xe7b400f0  swc1        $f20, 0xF0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x30127Cu, 0x301284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301284u;
label_301284:
    // 0x301284: 0x441009f  bgez        $v0, . + 4 + (0x9F << 2)
label_301288:
    if (ctx->pc == 0x301288u) {
        ctx->pc = 0x301288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301284u;
        // 0x301288: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30128Cu;
        goto label_30128c;
    }
    ctx->pc = 0x301284u;
    {
        const bool branch_taken_0x301284 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x301288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301284u;
        // 0x301288: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301284) {
            ctx->pc = 0x301504u;
            goto label_301504;
        }
    }
    ctx->pc = 0x30128Cu;
label_30128c:
    // 0x30128c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30128cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_301290:
    // 0x301290: 0xc0a3658  jal         func_28D960
label_301294:
    if (ctx->pc == 0x301294u) {
        ctx->pc = 0x301294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301290u;
        // 0x301294: 0x24050079  addiu       $a1, $zero, 0x79 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301298u;
        goto label_301298;
    }
    ctx->pc = 0x301290u;
    SET_GPR_U32(ctx, 31, 0x301298u);
    ctx->pc = 0x301294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301290u;
    // 0x301294: 0x24050079  addiu       $a1, $zero, 0x79 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x301290u, 0x301298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301298u;
label_301298:
    // 0x301298: 0x441009a  bgez        $v0, . + 4 + (0x9A << 2)
label_30129c:
    if (ctx->pc == 0x30129Cu) {
        ctx->pc = 0x30129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301298u;
        // 0x30129c: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3012A0u;
        goto label_3012a0;
    }
    ctx->pc = 0x301298u;
    {
        const bool branch_taken_0x301298 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x30129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301298u;
        // 0x30129c: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301298) {
            ctx->pc = 0x301504u;
            goto label_301504;
        }
    }
    ctx->pc = 0x3012A0u;
label_3012a0:
    // 0x3012a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3012a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3012a4:
    // 0x3012a4: 0xc0a3658  jal         func_28D960
label_3012a8:
    if (ctx->pc == 0x3012A8u) {
        ctx->pc = 0x3012A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3012A4u;
        // 0x3012a8: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3012ACu;
        goto label_3012ac;
    }
    ctx->pc = 0x3012A4u;
    SET_GPR_U32(ctx, 31, 0x3012ACu);
    ctx->pc = 0x3012A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3012A4u;
    // 0x3012a8: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x3012A4u, 0x3012ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3012ACu;
label_3012ac:
    // 0x3012ac: 0x4410095  bgez        $v0, . + 4 + (0x95 << 2)
label_3012b0:
    if (ctx->pc == 0x3012B0u) {
        ctx->pc = 0x3012B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3012ACu;
        // 0x3012b0: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3012B4u;
        goto label_3012b4;
    }
    ctx->pc = 0x3012ACu;
    {
        const bool branch_taken_0x3012ac = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3012B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3012ACu;
        // 0x3012b0: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3012ac) {
            ctx->pc = 0x301504u;
            goto label_301504;
        }
    }
    ctx->pc = 0x3012B4u;
label_3012b4:
    // 0x3012b4: 0x8e550000  lw          $s5, 0x0($s2)
    ctx->pc = 0x3012b4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3012b8:
    // 0x3012b8: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x3012b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_3012bc:
    // 0x3012bc: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x3012bcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3012c0:
    // 0x3012c0: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x3012c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_3012c4:
    // 0x3012c4: 0x86a20092  lh          $v0, 0x92($s5)
    ctx->pc = 0x3012c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 146)));
label_3012c8:
    // 0x3012c8: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x3012c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_3012cc:
    // 0x3012cc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3012ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3012d0:
    // 0x3012d0: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x3012d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3012d4:
    // 0x3012d4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x3012d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_3012d8:
    // 0x3012d8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x3012d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_3012dc:
    // 0x3012dc: 0x43b021  addu        $s6, $v0, $v1
    ctx->pc = 0x3012dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3012e0:
    // 0x3012e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3012e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3012e4:
    // 0x3012e4: 0x0  nop
    ctx->pc = 0x3012e4u;
    // NOP
label_3012e8:
    // 0x3012e8: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x3012e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
label_3012ec:
    // 0x3012ec: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x3012ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_3012f0:
    // 0x3012f0: 0x0  nop
    ctx->pc = 0x3012f0u;
    // NOP
label_3012f4:
    // 0x3012f4: 0x0  nop
    ctx->pc = 0x3012f4u;
    // NOP
label_3012f8:
    // 0x3012f8: 0x1502fffb  bne         $t0, $v0, . + 4 + (-0x5 << 2)
label_3012fc:
    if (ctx->pc == 0x3012FCu) {
        ctx->pc = 0x3012FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3012F8u;
        // 0x3012fc: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301300u;
        goto label_301300;
    }
    ctx->pc = 0x3012F8u;
    {
        const bool branch_taken_0x3012f8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x3012FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3012F8u;
        // 0x3012fc: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3012f8) {
            ctx->pc = 0x3012E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3012e8;
        }
    }
    ctx->pc = 0x301300u;
label_301300:
    // 0x301300: 0xc0a2fc0  jal         func_28BF00
label_301304:
    if (ctx->pc == 0x301304u) {
        ctx->pc = 0x301304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301300u;
        // 0x301304: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301308u;
        goto label_301308;
    }
    ctx->pc = 0x301300u;
    SET_GPR_U32(ctx, 31, 0x301308u);
    ctx->pc = 0x301304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301300u;
    // 0x301304: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF00u, 0x301300u, 0x301308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301308u;
label_301308:
    // 0x301308: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x301308u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
label_30130c:
    // 0x30130c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x30130cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_301310:
    // 0x301310: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x301310u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_301314:
    // 0x301314: 0x24c6c628  addiu       $a2, $a2, -0x39D8
    ctx->pc = 0x301314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952488));
label_301318:
    // 0x301318: 0xc0a728a  jal         func_29CA28
label_30131c:
    if (ctx->pc == 0x30131Cu) {
        ctx->pc = 0x30131Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301318u;
        // 0x30131c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301320u;
        goto label_301320;
    }
    ctx->pc = 0x301318u;
    SET_GPR_U32(ctx, 31, 0x301320u);
    ctx->pc = 0x30131Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301318u;
    // 0x30131c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CA28u, 0x301318u, 0x301320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301320u;
label_301320:
    // 0x301320: 0xc137832  jal         func_4DE0C8
label_301324:
    if (ctx->pc == 0x301324u) {
        ctx->pc = 0x301324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301320u;
        // 0x301324: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301328u;
        goto label_301328;
    }
    ctx->pc = 0x301320u;
    SET_GPR_U32(ctx, 31, 0x301328u);
    ctx->pc = 0x301324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301320u;
    // 0x301324: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0C8u, 0x301320u, 0x301328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301328u;
label_301328:
    // 0x301328: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x301328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30132c:
    // 0x30132c: 0x10430074  beq         $v0, $v1, . + 4 + (0x74 << 2)
label_301330:
    if (ctx->pc == 0x301330u) {
        ctx->pc = 0x301330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30132Cu;
        // 0x301330: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301334u;
        goto label_301334;
    }
    ctx->pc = 0x30132Cu;
    {
        const bool branch_taken_0x30132c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x301330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30132Cu;
        // 0x301330: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30132c) {
            ctx->pc = 0x301500u;
            goto label_301500;
        }
    }
    ctx->pc = 0x301334u;
label_301334:
    // 0x301334: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x301334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_301338:
    // 0x301338: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x301338u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_30133c:
    // 0x30133c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30133cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_301340:
    // 0x301340: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x301340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_301344:
    // 0x301344: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x301344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_301348:
    // 0x301348: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x301348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_30134c:
    // 0x30134c: 0xc136d6c  jal         func_4DB5B0
label_301350:
    if (ctx->pc == 0x301350u) {
        ctx->pc = 0x301350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30134Cu;
        // 0x301350: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301354u;
        goto label_301354;
    }
    ctx->pc = 0x30134Cu;
    SET_GPR_U32(ctx, 31, 0x301354u);
    ctx->pc = 0x301350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30134Cu;
    // 0x301350: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB5B0u, 0x30134Cu, 0x301354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301354u;
label_301354:
    // 0x301354: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x301354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_301358:
    // 0x301358: 0xc0e409a  jal         func_390268
label_30135c:
    if (ctx->pc == 0x30135Cu) {
        ctx->pc = 0x30135Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301358u;
        // 0x30135c: 0x27a40044  addiu       $a0, $sp, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301360u;
        goto label_301360;
    }
    ctx->pc = 0x301358u;
    SET_GPR_U32(ctx, 31, 0x301360u);
    ctx->pc = 0x30135Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301358u;
    // 0x30135c: 0x27a40044  addiu       $a0, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x301358u, 0x301360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301360u;
label_301360:
    // 0x301360: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x301360u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_301364:
    // 0x301364: 0x12800066  beqz        $s4, . + 4 + (0x66 << 2)
label_301368:
    if (ctx->pc == 0x301368u) {
        ctx->pc = 0x301368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301364u;
        // 0x301368: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30136Cu;
        goto label_30136c;
    }
    ctx->pc = 0x301364u;
    {
        const bool branch_taken_0x301364 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x301368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301364u;
        // 0x301368: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301364) {
            ctx->pc = 0x301500u;
            goto label_301500;
        }
    }
    ctx->pc = 0x30136Cu;
label_30136c:
    // 0x30136c: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x30136cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_301370:
    // 0x301370: 0xc0e409a  jal         func_390268
label_301374:
    if (ctx->pc == 0x301374u) {
        ctx->pc = 0x301374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301370u;
        // 0x301374: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301378u;
        goto label_301378;
    }
    ctx->pc = 0x301370u;
    SET_GPR_U32(ctx, 31, 0x301378u);
    ctx->pc = 0x301374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301370u;
    // 0x301374: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x301370u, 0x301378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301378u;
label_301378:
    // 0x301378: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x301378u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30137c:
    // 0x30137c: 0xc0e409a  jal         func_390268
label_301380:
    if (ctx->pc == 0x301380u) {
        ctx->pc = 0x301380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30137Cu;
        // 0x301380: 0x26440124  addiu       $a0, $s2, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301384u;
        goto label_301384;
    }
    ctx->pc = 0x30137Cu;
    SET_GPR_U32(ctx, 31, 0x301384u);
    ctx->pc = 0x301380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30137Cu;
    // 0x301380: 0x26440124  addiu       $a0, $s2, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x30137Cu, 0x301384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301384u;
label_301384:
    // 0x301384: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x301384u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_301388:
    // 0x301388: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
label_30138c:
    if (ctx->pc == 0x30138Cu) {
        ctx->pc = 0x30138Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301388u;
        // 0x30138c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301390u;
        goto label_301390;
    }
    ctx->pc = 0x301388u;
    {
        const bool branch_taken_0x301388 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x30138Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301388u;
        // 0x30138c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301388) {
            ctx->pc = 0x301410u;
            goto label_301410;
        }
    }
    ctx->pc = 0x301390u;
label_301390:
    // 0x301390: 0xc087502  jal         func_21D408
label_301394:
    if (ctx->pc == 0x301394u) {
        ctx->pc = 0x301394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301390u;
        // 0x301394: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301398u;
        goto label_301398;
    }
    ctx->pc = 0x301390u;
    SET_GPR_U32(ctx, 31, 0x301398u);
    ctx->pc = 0x301394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301390u;
    // 0x301394: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x301390u, 0x301398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301398u;
label_301398:
    // 0x301398: 0x52600008  beql        $s3, $zero, . + 4 + (0x8 << 2)
label_30139c:
    if (ctx->pc == 0x30139Cu) {
        ctx->pc = 0x30139Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301398u;
        // 0x30139c: 0x86250092  lh          $a1, 0x92($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3013A0u;
        goto label_3013a0;
    }
    ctx->pc = 0x301398u;
    {
        const bool branch_taken_0x301398 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x301398) {
            ctx->pc = 0x30139Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301398u;
            // 0x30139c: 0x86250092  lh          $a1, 0x92($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3013BCu;
            goto label_3013bc;
        }
    }
    ctx->pc = 0x3013A0u;
label_3013a0:
    // 0x3013a0: 0x8c50020c  lw          $s0, 0x20C($v0)
    ctx->pc = 0x3013a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_3013a4:
    // 0x3013a4: 0xc087502  jal         func_21D408
label_3013a8:
    if (ctx->pc == 0x3013A8u) {
        ctx->pc = 0x3013A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3013A4u;
        // 0x3013a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3013ACu;
        goto label_3013ac;
    }
    ctx->pc = 0x3013A4u;
    SET_GPR_U32(ctx, 31, 0x3013ACu);
    ctx->pc = 0x3013A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3013A4u;
    // 0x3013a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x3013A4u, 0x3013ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3013ACu;
label_3013ac:
    // 0x3013ac: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x3013acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_3013b0:
    // 0x3013b0: 0x12030054  beq         $s0, $v1, . + 4 + (0x54 << 2)
label_3013b4:
    if (ctx->pc == 0x3013B4u) {
        ctx->pc = 0x3013B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3013B0u;
        // 0x3013b4: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3013B8u;
        goto label_3013b8;
    }
    ctx->pc = 0x3013B0u;
    {
        const bool branch_taken_0x3013b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x3013B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3013B0u;
        // 0x3013b4: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3013b0) {
            ctx->pc = 0x301504u;
            goto label_301504;
        }
    }
    ctx->pc = 0x3013B8u;
label_3013b8:
    // 0x3013b8: 0x86250092  lh          $a1, 0x92($s1)
    ctx->pc = 0x3013b8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_3013bc:
    // 0x3013bc: 0x27c24b00  addiu       $v0, $fp, 0x4B00
    ctx->pc = 0x3013bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 19200));
label_3013c0:
    // 0x3013c0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3013c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3013c4:
    // 0x3013c4: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x3013c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_3013c8:
    // 0x3013c8: 0xc0cdb38  jal         func_336CE0
label_3013cc:
    if (ctx->pc == 0x3013CCu) {
        ctx->pc = 0x3013CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3013C8u;
        // 0x3013cc: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3013D0u;
        goto label_3013d0;
    }
    ctx->pc = 0x3013C8u;
    SET_GPR_U32(ctx, 31, 0x3013D0u);
    ctx->pc = 0x3013CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3013C8u;
    // 0x3013cc: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x3013C8u, 0x3013D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3013D0u;
label_3013d0:
    // 0x3013d0: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
label_3013d4:
    if (ctx->pc == 0x3013D4u) {
        ctx->pc = 0x3013D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3013D0u;
        // 0x3013d4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3013D8u;
        goto label_3013d8;
    }
    ctx->pc = 0x3013D0u;
    {
        const bool branch_taken_0x3013d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3013D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3013D0u;
        // 0x3013d4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3013d0) {
            ctx->pc = 0x3013F8u;
            goto label_3013f8;
        }
    }
    ctx->pc = 0x3013D8u;
label_3013d8:
    // 0x3013d8: 0xc087502  jal         func_21D408
label_3013dc:
    if (ctx->pc == 0x3013DCu) {
        ctx->pc = 0x3013DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3013D8u;
        // 0x3013dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3013E0u;
        goto label_3013e0;
    }
    ctx->pc = 0x3013D8u;
    SET_GPR_U32(ctx, 31, 0x3013E0u);
    ctx->pc = 0x3013DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3013D8u;
    // 0x3013dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x3013D8u, 0x3013E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3013E0u;
label_3013e0:
    // 0x3013e0: 0x8c50020c  lw          $s0, 0x20C($v0)
    ctx->pc = 0x3013e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_3013e4:
    // 0x3013e4: 0xc087502  jal         func_21D408
label_3013e8:
    if (ctx->pc == 0x3013E8u) {
        ctx->pc = 0x3013E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3013E4u;
        // 0x3013e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3013ECu;
        goto label_3013ec;
    }
    ctx->pc = 0x3013E4u;
    SET_GPR_U32(ctx, 31, 0x3013ECu);
    ctx->pc = 0x3013E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3013E4u;
    // 0x3013e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x3013E4u, 0x3013ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3013ECu;
label_3013ec:
    // 0x3013ec: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x3013ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_3013f0:
    // 0x3013f0: 0x52030007  beql        $s0, $v1, . + 4 + (0x7 << 2)
label_3013f4:
    if (ctx->pc == 0x3013F4u) {
        ctx->pc = 0x3013F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3013F0u;
        // 0x3013f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3013F8u;
        goto label_3013f8;
    }
    ctx->pc = 0x3013F0u;
    {
        const bool branch_taken_0x3013f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3013f0) {
            ctx->pc = 0x3013F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3013F0u;
            // 0x3013f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x301410u;
            goto label_301410;
        }
    }
    ctx->pc = 0x3013F8u;
label_3013f8:
    // 0x3013f8: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x3013f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3013fc:
    // 0x3013fc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3013fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_301400:
    // 0x301400: 0x0  nop
    ctx->pc = 0x301400u;
    // NOP
label_301404:
    // 0x301404: 0x4501003f  bc1t        . + 4 + (0x3F << 2)
label_301408:
    if (ctx->pc == 0x301408u) {
        ctx->pc = 0x301408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301404u;
        // 0x301408: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30140Cu;
        goto label_30140c;
    }
    ctx->pc = 0x301404u;
    {
        const bool branch_taken_0x301404 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x301408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301404u;
        // 0x301408: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301404) {
            ctx->pc = 0x301504u;
            goto label_301504;
        }
    }
    ctx->pc = 0x30140Cu;
label_30140c:
    // 0x30140c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30140cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_301410:
    // 0x301410: 0xc0a3658  jal         func_28D960
label_301414:
    if (ctx->pc == 0x301414u) {
        ctx->pc = 0x301414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301410u;
        // 0x301414: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301418u;
        goto label_301418;
    }
    ctx->pc = 0x301410u;
    SET_GPR_U32(ctx, 31, 0x301418u);
    ctx->pc = 0x301414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301410u;
    // 0x301414: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x301410u, 0x301418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301418u;
label_301418:
    // 0x301418: 0x26970090  addiu       $s7, $s4, 0x90
    ctx->pc = 0x301418u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_30141c:
    // 0x30141c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30141cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_301420:
    // 0x301420: 0x27b10048  addiu       $s1, $sp, 0x48
    ctx->pc = 0x301420u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_301424:
    // 0x301424: 0x600000c  bltz        $s0, . + 4 + (0xC << 2)
label_301428:
    if (ctx->pc == 0x301428u) {
        ctx->pc = 0x301428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301424u;
        // 0x301428: 0x3c16006f  lui         $s6, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30142Cu;
        goto label_30142c;
    }
    ctx->pc = 0x301424u;
    {
        const bool branch_taken_0x301424 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x301428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301424u;
        // 0x301428: 0x3c16006f  lui         $s6, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301424) {
            ctx->pc = 0x301458u;
            goto label_301458;
        }
    }
    ctx->pc = 0x30142Cu;
label_30142c:
    // 0x30142c: 0x8242002c  lb          $v0, 0x2C($s2)
    ctx->pc = 0x30142cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 44)));
label_301430:
    // 0x301430: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x301430u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_301434:
    // 0x301434: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_301438:
    if (ctx->pc == 0x301438u) {
        ctx->pc = 0x301438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301434u;
        // 0x301438: 0x8ea30000  lw          $v1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30143Cu;
        goto label_30143c;
    }
    ctx->pc = 0x301434u;
    {
        const bool branch_taken_0x301434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x301434) {
            ctx->pc = 0x301438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301434u;
            // 0x301438: 0x8ea30000  lw          $v1, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30145Cu;
            goto label_30145c;
        }
    }
    ctx->pc = 0x30143Cu;
label_30143c:
    // 0x30143c: 0x0  nop
    ctx->pc = 0x30143cu;
    // NOP
label_301440:
    // 0x301440: 0xc0a35f6  jal         func_28D7D8
label_301444:
    if (ctx->pc == 0x301444u) {
        ctx->pc = 0x301444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301440u;
        // 0x301444: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301448u;
        goto label_301448;
    }
    ctx->pc = 0x301440u;
    SET_GPR_U32(ctx, 31, 0x301448u);
    ctx->pc = 0x301444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301440u;
    // 0x301444: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x301440u, 0x301448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301448u;
label_301448:
    // 0x301448: 0x8243002c  lb          $v1, 0x2C($s2)
    ctx->pc = 0x301448u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 44)));
label_30144c:
    // 0x30144c: 0x70182a  slt         $v1, $v1, $s0
    ctx->pc = 0x30144cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_301450:
    // 0x301450: 0x1060fffb  beqz        $v1, . + 4 + (-0x5 << 2)
label_301454:
    if (ctx->pc == 0x301454u) {
        ctx->pc = 0x301458u;
        goto label_301458;
    }
    ctx->pc = 0x301450u;
    {
        const bool branch_taken_0x301450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x301450) {
            ctx->pc = 0x301440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_301440;
        }
    }
    ctx->pc = 0x301458u;
label_301458:
    // 0x301458: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x301458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_30145c:
    // 0x30145c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x30145cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_301460:
    // 0x301460: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x301460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_301464:
    // 0x301464: 0x40f809  jalr        $v0
label_301468:
    if (ctx->pc == 0x301468u) {
        ctx->pc = 0x301468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301464u;
        // 0x301468: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30146Cu;
        goto label_30146c;
    }
    ctx->pc = 0x301464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30146Cu);
        ctx->pc = 0x301468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301464u;
        // 0x301468: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x301464u, 0x30146Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30146Cu;
label_30146c:
    // 0x30146c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x30146cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_301470:
    // 0x301470: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x301470u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_301474:
    // 0x301474: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x301474u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_301478:
    // 0x301478: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x301478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_30147c:
    // 0x30147c: 0x40f809  jalr        $v0
label_301480:
    if (ctx->pc == 0x301480u) {
        ctx->pc = 0x301480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30147Cu;
        // 0x301480: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301484u;
        goto label_301484;
    }
    ctx->pc = 0x30147Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x301484u);
        ctx->pc = 0x301480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30147Cu;
        // 0x301480: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30147Cu, 0x301484u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x301484u;
label_301484:
    // 0x301484: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x301484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_301488:
    // 0x301488: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x301488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_30148c:
    // 0x30148c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x30148cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_301490:
    // 0x301490: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x301490u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_301494:
    // 0x301494: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x301494u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_301498:
    // 0x301498: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x301498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_30149c:
    // 0x30149c: 0xc0c0846  jal         func_302118
label_3014a0:
    if (ctx->pc == 0x3014A0u) {
        ctx->pc = 0x3014A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30149Cu;
        // 0x3014a0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3014A4u;
        goto label_3014a4;
    }
    ctx->pc = 0x30149Cu;
    SET_GPR_U32(ctx, 31, 0x3014A4u);
    ctx->pc = 0x3014A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30149Cu;
    // 0x3014a0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302118u, 0x30149Cu, 0x3014A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3014A4u;
label_3014a4:
    // 0x3014a4: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x3014a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_3014a8:
    // 0x3014a8: 0xa240028f  sb          $zero, 0x28F($s2)
    ctx->pc = 0x3014a8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 655), (uint8_t)GPR_U32(ctx, 0));
label_3014ac:
    // 0x3014ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3014acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3014b0:
    // 0x3014b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3014b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3014b4:
    // 0x3014b4: 0xc0a3464  jal         func_28D190
label_3014b8:
    if (ctx->pc == 0x3014B8u) {
        ctx->pc = 0x3014B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3014B4u;
        // 0x3014b8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3014BCu;
        goto label_3014bc;
    }
    ctx->pc = 0x3014B4u;
    SET_GPR_U32(ctx, 31, 0x3014BCu);
    ctx->pc = 0x3014B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3014B4u;
    // 0x3014b8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D190u, 0x3014B4u, 0x3014BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3014BCu;
label_3014bc:
    // 0x3014bc: 0x1a000006  blez        $s0, . + 4 + (0x6 << 2)
label_3014c0:
    if (ctx->pc == 0x3014C0u) {
        ctx->pc = 0x3014C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3014BCu;
        // 0x3014c0: 0x8fa80048  lw          $t0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3014C4u;
        goto label_3014c4;
    }
    ctx->pc = 0x3014BCu;
    {
        const bool branch_taken_0x3014bc = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x3014C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3014BCu;
        // 0x3014c0: 0x8fa80048  lw          $t0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3014bc) {
            ctx->pc = 0x3014D8u;
            goto label_3014d8;
        }
    }
    ctx->pc = 0x3014C4u;
label_3014c4:
    // 0x3014c4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3014c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3014c8:
    // 0x3014c8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3014c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3014cc:
    // 0x3014cc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3014ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3014d0:
    // 0x3014d0: 0xc0b11c4  jal         func_2C4710
label_3014d4:
    if (ctx->pc == 0x3014D4u) {
        ctx->pc = 0x3014D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3014D0u;
        // 0x3014d4: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3014D8u;
        goto label_3014d8;
    }
    ctx->pc = 0x3014D0u;
    SET_GPR_U32(ctx, 31, 0x3014D8u);
    ctx->pc = 0x3014D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3014D0u;
    // 0x3014d4: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4710u, 0x3014D0u, 0x3014D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3014D8u;
label_3014d8:
    // 0x3014d8: 0x86e60002  lh          $a2, 0x2($s7)
    ctx->pc = 0x3014d8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
label_3014dc:
    // 0x3014dc: 0x27c24b00  addiu       $v0, $fp, 0x4B00
    ctx->pc = 0x3014dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 19200));
label_3014e0:
    // 0x3014e0: 0x8ec8bd30  lw          $t0, -0x42D0($s6)
    ctx->pc = 0x3014e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294950192)));
label_3014e4:
    // 0x3014e4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3014e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3014e8:
    // 0x3014e8: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x3014e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_3014ec:
    // 0x3014ec: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3014ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3014f0:
    // 0x3014f0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x3014f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_3014f4:
    // 0x3014f4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x3014f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3014f8:
    // 0x3014f8: 0xc0b1018  jal         func_2C4060
label_3014fc:
    if (ctx->pc == 0x3014FCu) {
        ctx->pc = 0x3014FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3014F8u;
        // 0x3014fc: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301500u;
        goto label_301500;
    }
    ctx->pc = 0x3014F8u;
    SET_GPR_U32(ctx, 31, 0x301500u);
    ctx->pc = 0x3014FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3014F8u;
    // 0x3014fc: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4060u, 0x3014F8u, 0x301500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301500u;
label_301500:
    // 0x301500: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x301500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_301504:
    // 0x301504: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x301504u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_301508:
    // 0x301508: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x301508u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_30150c:
    // 0x30150c: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x30150cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_301510:
    // 0x301510: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x301510u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_301514:
    // 0x301514: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x301514u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_301518:
    // 0x301518: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x301518u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_30151c:
    // 0x30151c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x30151cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_301520:
    // 0x301520: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x301520u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_301524:
    // 0x301524: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x301524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_301528:
    // 0x301528: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x301528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_30152c:
    // 0x30152c: 0x3e00008  jr          $ra
label_301530:
    if (ctx->pc == 0x301530u) {
        ctx->pc = 0x301530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30152Cu;
        // 0x301530: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301534u;
        goto label_301534;
    }
    ctx->pc = 0x30152Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x301530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30152Cu;
        // 0x301530: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30152Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x301534u;
label_301534:
    // 0x301534: 0x0  nop
    ctx->pc = 0x301534u;
    // NOP
    ctx->pc = 0x301538u;
}
