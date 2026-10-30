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

// Function: sub_00260FD0
// Address: 0x260fd0 - 0x2613a8
void sub_00260FD0_0x260fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260FD0_0x260fd0");
#endif

    switch (ctx->pc) {
        case 0x260fd0u: goto label_260fd0;
        case 0x260fd4u: goto label_260fd4;
        case 0x260fd8u: goto label_260fd8;
        case 0x260fdcu: goto label_260fdc;
        case 0x260fe0u: goto label_260fe0;
        case 0x260fe4u: goto label_260fe4;
        case 0x260fe8u: goto label_260fe8;
        case 0x260fecu: goto label_260fec;
        case 0x260ff0u: goto label_260ff0;
        case 0x260ff4u: goto label_260ff4;
        case 0x260ff8u: goto label_260ff8;
        case 0x260ffcu: goto label_260ffc;
        case 0x261000u: goto label_261000;
        case 0x261004u: goto label_261004;
        case 0x261008u: goto label_261008;
        case 0x26100cu: goto label_26100c;
        case 0x261010u: goto label_261010;
        case 0x261014u: goto label_261014;
        case 0x261018u: goto label_261018;
        case 0x26101cu: goto label_26101c;
        case 0x261020u: goto label_261020;
        case 0x261024u: goto label_261024;
        case 0x261028u: goto label_261028;
        case 0x26102cu: goto label_26102c;
        case 0x261030u: goto label_261030;
        case 0x261034u: goto label_261034;
        case 0x261038u: goto label_261038;
        case 0x26103cu: goto label_26103c;
        case 0x261040u: goto label_261040;
        case 0x261044u: goto label_261044;
        case 0x261048u: goto label_261048;
        case 0x26104cu: goto label_26104c;
        case 0x261050u: goto label_261050;
        case 0x261054u: goto label_261054;
        case 0x261058u: goto label_261058;
        case 0x26105cu: goto label_26105c;
        case 0x261060u: goto label_261060;
        case 0x261064u: goto label_261064;
        case 0x261068u: goto label_261068;
        case 0x26106cu: goto label_26106c;
        case 0x261070u: goto label_261070;
        case 0x261074u: goto label_261074;
        case 0x261078u: goto label_261078;
        case 0x26107cu: goto label_26107c;
        case 0x261080u: goto label_261080;
        case 0x261084u: goto label_261084;
        case 0x261088u: goto label_261088;
        case 0x26108cu: goto label_26108c;
        case 0x261090u: goto label_261090;
        case 0x261094u: goto label_261094;
        case 0x261098u: goto label_261098;
        case 0x26109cu: goto label_26109c;
        case 0x2610a0u: goto label_2610a0;
        case 0x2610a4u: goto label_2610a4;
        case 0x2610a8u: goto label_2610a8;
        case 0x2610acu: goto label_2610ac;
        case 0x2610b0u: goto label_2610b0;
        case 0x2610b4u: goto label_2610b4;
        case 0x2610b8u: goto label_2610b8;
        case 0x2610bcu: goto label_2610bc;
        case 0x2610c0u: goto label_2610c0;
        case 0x2610c4u: goto label_2610c4;
        case 0x2610c8u: goto label_2610c8;
        case 0x2610ccu: goto label_2610cc;
        case 0x2610d0u: goto label_2610d0;
        case 0x2610d4u: goto label_2610d4;
        case 0x2610d8u: goto label_2610d8;
        case 0x2610dcu: goto label_2610dc;
        case 0x2610e0u: goto label_2610e0;
        case 0x2610e4u: goto label_2610e4;
        case 0x2610e8u: goto label_2610e8;
        case 0x2610ecu: goto label_2610ec;
        case 0x2610f0u: goto label_2610f0;
        case 0x2610f4u: goto label_2610f4;
        case 0x2610f8u: goto label_2610f8;
        case 0x2610fcu: goto label_2610fc;
        case 0x261100u: goto label_261100;
        case 0x261104u: goto label_261104;
        case 0x261108u: goto label_261108;
        case 0x26110cu: goto label_26110c;
        case 0x261110u: goto label_261110;
        case 0x261114u: goto label_261114;
        case 0x261118u: goto label_261118;
        case 0x26111cu: goto label_26111c;
        case 0x261120u: goto label_261120;
        case 0x261124u: goto label_261124;
        case 0x261128u: goto label_261128;
        case 0x26112cu: goto label_26112c;
        case 0x261130u: goto label_261130;
        case 0x261134u: goto label_261134;
        case 0x261138u: goto label_261138;
        case 0x26113cu: goto label_26113c;
        case 0x261140u: goto label_261140;
        case 0x261144u: goto label_261144;
        case 0x261148u: goto label_261148;
        case 0x26114cu: goto label_26114c;
        case 0x261150u: goto label_261150;
        case 0x261154u: goto label_261154;
        case 0x261158u: goto label_261158;
        case 0x26115cu: goto label_26115c;
        case 0x261160u: goto label_261160;
        case 0x261164u: goto label_261164;
        case 0x261168u: goto label_261168;
        case 0x26116cu: goto label_26116c;
        case 0x261170u: goto label_261170;
        case 0x261174u: goto label_261174;
        case 0x261178u: goto label_261178;
        case 0x26117cu: goto label_26117c;
        case 0x261180u: goto label_261180;
        case 0x261184u: goto label_261184;
        case 0x261188u: goto label_261188;
        case 0x26118cu: goto label_26118c;
        case 0x261190u: goto label_261190;
        case 0x261194u: goto label_261194;
        case 0x261198u: goto label_261198;
        case 0x26119cu: goto label_26119c;
        case 0x2611a0u: goto label_2611a0;
        case 0x2611a4u: goto label_2611a4;
        case 0x2611a8u: goto label_2611a8;
        case 0x2611acu: goto label_2611ac;
        case 0x2611b0u: goto label_2611b0;
        case 0x2611b4u: goto label_2611b4;
        case 0x2611b8u: goto label_2611b8;
        case 0x2611bcu: goto label_2611bc;
        case 0x2611c0u: goto label_2611c0;
        case 0x2611c4u: goto label_2611c4;
        case 0x2611c8u: goto label_2611c8;
        case 0x2611ccu: goto label_2611cc;
        case 0x2611d0u: goto label_2611d0;
        case 0x2611d4u: goto label_2611d4;
        case 0x2611d8u: goto label_2611d8;
        case 0x2611dcu: goto label_2611dc;
        case 0x2611e0u: goto label_2611e0;
        case 0x2611e4u: goto label_2611e4;
        case 0x2611e8u: goto label_2611e8;
        case 0x2611ecu: goto label_2611ec;
        case 0x2611f0u: goto label_2611f0;
        case 0x2611f4u: goto label_2611f4;
        case 0x2611f8u: goto label_2611f8;
        case 0x2611fcu: goto label_2611fc;
        case 0x261200u: goto label_261200;
        case 0x261204u: goto label_261204;
        case 0x261208u: goto label_261208;
        case 0x26120cu: goto label_26120c;
        case 0x261210u: goto label_261210;
        case 0x261214u: goto label_261214;
        case 0x261218u: goto label_261218;
        case 0x26121cu: goto label_26121c;
        case 0x261220u: goto label_261220;
        case 0x261224u: goto label_261224;
        case 0x261228u: goto label_261228;
        case 0x26122cu: goto label_26122c;
        case 0x261230u: goto label_261230;
        case 0x261234u: goto label_261234;
        case 0x261238u: goto label_261238;
        case 0x26123cu: goto label_26123c;
        case 0x261240u: goto label_261240;
        case 0x261244u: goto label_261244;
        case 0x261248u: goto label_261248;
        case 0x26124cu: goto label_26124c;
        case 0x261250u: goto label_261250;
        case 0x261254u: goto label_261254;
        case 0x261258u: goto label_261258;
        case 0x26125cu: goto label_26125c;
        case 0x261260u: goto label_261260;
        case 0x261264u: goto label_261264;
        case 0x261268u: goto label_261268;
        case 0x26126cu: goto label_26126c;
        case 0x261270u: goto label_261270;
        case 0x261274u: goto label_261274;
        case 0x261278u: goto label_261278;
        case 0x26127cu: goto label_26127c;
        case 0x261280u: goto label_261280;
        case 0x261284u: goto label_261284;
        case 0x261288u: goto label_261288;
        case 0x26128cu: goto label_26128c;
        case 0x261290u: goto label_261290;
        case 0x261294u: goto label_261294;
        case 0x261298u: goto label_261298;
        case 0x26129cu: goto label_26129c;
        case 0x2612a0u: goto label_2612a0;
        case 0x2612a4u: goto label_2612a4;
        case 0x2612a8u: goto label_2612a8;
        case 0x2612acu: goto label_2612ac;
        case 0x2612b0u: goto label_2612b0;
        case 0x2612b4u: goto label_2612b4;
        case 0x2612b8u: goto label_2612b8;
        case 0x2612bcu: goto label_2612bc;
        case 0x2612c0u: goto label_2612c0;
        case 0x2612c4u: goto label_2612c4;
        case 0x2612c8u: goto label_2612c8;
        case 0x2612ccu: goto label_2612cc;
        case 0x2612d0u: goto label_2612d0;
        case 0x2612d4u: goto label_2612d4;
        case 0x2612d8u: goto label_2612d8;
        case 0x2612dcu: goto label_2612dc;
        case 0x2612e0u: goto label_2612e0;
        case 0x2612e4u: goto label_2612e4;
        case 0x2612e8u: goto label_2612e8;
        case 0x2612ecu: goto label_2612ec;
        case 0x2612f0u: goto label_2612f0;
        case 0x2612f4u: goto label_2612f4;
        case 0x2612f8u: goto label_2612f8;
        case 0x2612fcu: goto label_2612fc;
        case 0x261300u: goto label_261300;
        case 0x261304u: goto label_261304;
        case 0x261308u: goto label_261308;
        case 0x26130cu: goto label_26130c;
        case 0x261310u: goto label_261310;
        case 0x261314u: goto label_261314;
        case 0x261318u: goto label_261318;
        case 0x26131cu: goto label_26131c;
        case 0x261320u: goto label_261320;
        case 0x261324u: goto label_261324;
        case 0x261328u: goto label_261328;
        case 0x26132cu: goto label_26132c;
        case 0x261330u: goto label_261330;
        case 0x261334u: goto label_261334;
        case 0x261338u: goto label_261338;
        case 0x26133cu: goto label_26133c;
        case 0x261340u: goto label_261340;
        case 0x261344u: goto label_261344;
        case 0x261348u: goto label_261348;
        case 0x26134cu: goto label_26134c;
        case 0x261350u: goto label_261350;
        case 0x261354u: goto label_261354;
        case 0x261358u: goto label_261358;
        case 0x26135cu: goto label_26135c;
        case 0x261360u: goto label_261360;
        case 0x261364u: goto label_261364;
        case 0x261368u: goto label_261368;
        case 0x26136cu: goto label_26136c;
        case 0x261370u: goto label_261370;
        case 0x261374u: goto label_261374;
        case 0x261378u: goto label_261378;
        case 0x26137cu: goto label_26137c;
        case 0x261380u: goto label_261380;
        case 0x261384u: goto label_261384;
        case 0x261388u: goto label_261388;
        case 0x26138cu: goto label_26138c;
        case 0x261390u: goto label_261390;
        case 0x261394u: goto label_261394;
        case 0x261398u: goto label_261398;
        case 0x26139cu: goto label_26139c;
        case 0x2613a0u: goto label_2613a0;
        case 0x2613a4u: goto label_2613a4;
        default: break;
    }

    ctx->pc = 0x260fd0u;

label_260fd0:
    // 0x260fd0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x260fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_260fd4:
    // 0x260fd4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x260fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_260fd8:
    // 0x260fd8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x260fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_260fdc:
    // 0x260fdc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x260fdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_260fe0:
    // 0x260fe0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x260fe0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_260fe4:
    // 0x260fe4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x260fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_260fe8:
    // 0x260fe8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x260fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_260fec:
    // 0x260fec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x260fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_260ff0:
    // 0x260ff0: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x260ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_260ff4:
    // 0x260ff4: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x260ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_260ff8:
    // 0x260ff8: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x260ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_260ffc:
    // 0x260ffc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x260ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_261000:
    // 0x261000: 0xc040680  jal         func_101A00
label_261004:
    if (ctx->pc == 0x261004u) {
        ctx->pc = 0x261004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261000u;
        // 0x261004: 0x24050145  addiu       $a1, $zero, 0x145 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 325));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261008u;
        goto label_261008;
    }
    ctx->pc = 0x261000u;
    SET_GPR_U32(ctx, 31, 0x261008u);
    ctx->pc = 0x261004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261000u;
    // 0x261004: 0x24050145  addiu       $a1, $zero, 0x145 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 325));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A00u, 0x261000u, 0x261008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261008u;
label_261008:
    // 0x261008: 0x124000db  beqz        $s2, . + 4 + (0xDB << 2)
label_26100c:
    if (ctx->pc == 0x26100Cu) {
        ctx->pc = 0x26100Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261008u;
        // 0x26100c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261010u;
        goto label_261010;
    }
    ctx->pc = 0x261008u;
    {
        const bool branch_taken_0x261008 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x26100Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261008u;
        // 0x26100c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261008) {
            ctx->pc = 0x261378u;
            goto label_261378;
        }
    }
    ctx->pc = 0x261010u;
label_261010:
    // 0x261010: 0xc088edc  jal         func_223B70
label_261014:
    if (ctx->pc == 0x261014u) {
        ctx->pc = 0x261014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261010u;
        // 0x261014: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261018u;
        goto label_261018;
    }
    ctx->pc = 0x261010u;
    SET_GPR_U32(ctx, 31, 0x261018u);
    ctx->pc = 0x261014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261010u;
    // 0x261014: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x261010u, 0x261018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261018u;
label_261018:
    // 0x261018: 0x104000d7  beqz        $v0, . + 4 + (0xD7 << 2)
label_26101c:
    if (ctx->pc == 0x26101Cu) {
        ctx->pc = 0x26101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261018u;
        // 0x26101c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261020u;
        goto label_261020;
    }
    ctx->pc = 0x261018u;
    {
        const bool branch_taken_0x261018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261018u;
        // 0x26101c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261018) {
            ctx->pc = 0x261378u;
            goto label_261378;
        }
    }
    ctx->pc = 0x261020u;
label_261020:
    // 0x261020: 0x1232005e  beq         $s1, $s2, . + 4 + (0x5E << 2)
label_261024:
    if (ctx->pc == 0x261024u) {
        ctx->pc = 0x261024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261020u;
        // 0x261024: 0x3c170056  lui         $s7, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261028u;
        goto label_261028;
    }
    ctx->pc = 0x261020u;
    {
        const bool branch_taken_0x261020 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 18));
        ctx->pc = 0x261024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261020u;
        // 0x261024: 0x3c170056  lui         $s7, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261020) {
            ctx->pc = 0x26119Cu;
            goto label_26119c;
        }
    }
    ctx->pc = 0x261028u;
label_261028:
    // 0x261028: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x261028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_26102c:
    // 0x26102c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26102cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_261030:
    // 0x261030: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x261030u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_261034:
    // 0x261034: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x261034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_261038:
    // 0x261038: 0x24060145  addiu       $a2, $zero, 0x145
    ctx->pc = 0x261038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 325));
label_26103c:
    // 0x26103c: 0xc09d872  jal         func_2761C8
label_261040:
    if (ctx->pc == 0x261040u) {
        ctx->pc = 0x261040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26103Cu;
        // 0x261040: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261044u;
        goto label_261044;
    }
    ctx->pc = 0x26103Cu;
    SET_GPR_U32(ctx, 31, 0x261044u);
    ctx->pc = 0x261040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26103Cu;
    // 0x261040: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2761C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2761C8u, 0x26103Cu, 0x261044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261044u;
label_261044:
    // 0x261044: 0x26f0dc40  addiu       $s0, $s7, -0x23C0
    ctx->pc = 0x261044u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294958144));
label_261048:
    // 0x261048: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x261048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26104c:
    // 0x26104c: 0xc041532  jal         func_1054C8
label_261050:
    if (ctx->pc == 0x261050u) {
        ctx->pc = 0x261050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26104Cu;
        // 0x261050: 0x8e3500d8  lw          $s5, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261054u;
        goto label_261054;
    }
    ctx->pc = 0x26104Cu;
    SET_GPR_U32(ctx, 31, 0x261054u);
    ctx->pc = 0x261050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26104Cu;
    // 0x261050: 0x8e3500d8  lw          $s5, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26104Cu, 0x261054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261054u;
label_261054:
    // 0x261054: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x261054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_261058:
    // 0x261058: 0xc041532  jal         func_1054C8
label_26105c:
    if (ctx->pc == 0x26105Cu) {
        ctx->pc = 0x26105Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261058u;
        // 0x26105c: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261060u;
        goto label_261060;
    }
    ctx->pc = 0x261058u;
    SET_GPR_U32(ctx, 31, 0x261060u);
    ctx->pc = 0x26105Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261058u;
    // 0x26105c: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x261058u, 0x261060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261060u;
label_261060:
    // 0x261060: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x261060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_261064:
    // 0x261064: 0xc041532  jal         func_1054C8
label_261068:
    if (ctx->pc == 0x261068u) {
        ctx->pc = 0x261068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261064u;
        // 0x261068: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26106Cu;
        goto label_26106c;
    }
    ctx->pc = 0x261064u;
    SET_GPR_U32(ctx, 31, 0x26106Cu);
    ctx->pc = 0x261068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261064u;
    // 0x261068: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x261064u, 0x26106Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26106Cu;
label_26106c:
    // 0x26106c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26106cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_261070:
    // 0x261070: 0xc041532  jal         func_1054C8
label_261074:
    if (ctx->pc == 0x261074u) {
        ctx->pc = 0x261074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261070u;
        // 0x261074: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261078u;
        goto label_261078;
    }
    ctx->pc = 0x261070u;
    SET_GPR_U32(ctx, 31, 0x261078u);
    ctx->pc = 0x261074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261070u;
    // 0x261074: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x261070u, 0x261078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261078u;
label_261078:
    // 0x261078: 0x12c0000a  beqz        $s6, . + 4 + (0xA << 2)
label_26107c:
    if (ctx->pc == 0x26107Cu) {
        ctx->pc = 0x26107Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261078u;
        // 0x26107c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261080u;
        goto label_261080;
    }
    ctx->pc = 0x261078u;
    {
        const bool branch_taken_0x261078 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x26107Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261078u;
        // 0x26107c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261078) {
            ctx->pc = 0x2610A4u;
            goto label_2610a4;
        }
    }
    ctx->pc = 0x261080u;
label_261080:
    // 0x261080: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x261080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_261084:
    // 0x261084: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x261084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_261088:
    // 0x261088: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x261088u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26108c:
    // 0x26108c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x26108cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_261090:
    // 0x261090: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x261090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_261094:
    // 0x261094: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x261094u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_261098:
    // 0x261098: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x261098u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26109c:
    // 0x26109c: 0xc041b20  jal         func_106C80
label_2610a0:
    if (ctx->pc == 0x2610A0u) {
        ctx->pc = 0x2610A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26109Cu;
        // 0x2610a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2610A4u;
        goto label_2610a4;
    }
    ctx->pc = 0x26109Cu;
    SET_GPR_U32(ctx, 31, 0x2610A4u);
    ctx->pc = 0x2610A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26109Cu;
    // 0x2610a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x26109Cu, 0x2610A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2610A4u;
label_2610a4:
    // 0x2610a4: 0xc05d484  jal         func_175210
label_2610a8:
    if (ctx->pc == 0x2610A8u) {
        ctx->pc = 0x2610A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2610A4u;
        // 0x2610a8: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2610ACu;
        goto label_2610ac;
    }
    ctx->pc = 0x2610A4u;
    SET_GPR_U32(ctx, 31, 0x2610ACu);
    ctx->pc = 0x2610A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2610A4u;
    // 0x2610a8: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x2610A4u, 0x2610ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2610ACu;
label_2610ac:
    // 0x2610ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2610acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2610b0:
    // 0x2610b0: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x2610b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_2610b4:
    // 0x2610b4: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x2610b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_2610b8:
    // 0x2610b8: 0xa0f809  jalr        $a1
label_2610bc:
    if (ctx->pc == 0x2610BCu) {
        ctx->pc = 0x2610BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2610B8u;
        // 0x2610bc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2610C0u;
        goto label_2610c0;
    }
    ctx->pc = 0x2610B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2610C0u);
        ctx->pc = 0x2610BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2610B8u;
        // 0x2610bc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2610B8u, 0x2610C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2610C0u;
label_2610c0:
    // 0x2610c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2610c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2610c4:
    // 0x2610c4: 0xc087016  jal         func_21C058
label_2610c8:
    if (ctx->pc == 0x2610C8u) {
        ctx->pc = 0x2610C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2610C4u;
        // 0x2610c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2610CCu;
        goto label_2610cc;
    }
    ctx->pc = 0x2610C4u;
    SET_GPR_U32(ctx, 31, 0x2610CCu);
    ctx->pc = 0x2610C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2610C4u;
    // 0x2610c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x2610C4u, 0x2610CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2610CCu;
label_2610cc:
    // 0x2610cc: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
label_2610d0:
    if (ctx->pc == 0x2610D0u) {
        ctx->pc = 0x2610D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2610CCu;
        // 0x2610d0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2610D4u;
        goto label_2610d4;
    }
    ctx->pc = 0x2610CCu;
    {
        const bool branch_taken_0x2610cc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2610D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2610CCu;
        // 0x2610d0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2610cc) {
            ctx->pc = 0x2610F0u;
            goto label_2610f0;
        }
    }
    ctx->pc = 0x2610D4u;
label_2610d4:
    // 0x2610d4: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x2610d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_2610d8:
    // 0x2610d8: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x2610d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2610dc:
    // 0x2610dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2610dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2610e0:
    // 0x2610e0: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x2610e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_2610e4:
    // 0x2610e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2610e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2610e8:
    // 0x2610e8: 0xc04159e  jal         func_105678
label_2610ec:
    if (ctx->pc == 0x2610ECu) {
        ctx->pc = 0x2610ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2610E8u;
        // 0x2610ec: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2610F0u;
        goto label_2610f0;
    }
    ctx->pc = 0x2610E8u;
    SET_GPR_U32(ctx, 31, 0x2610F0u);
    ctx->pc = 0x2610ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2610E8u;
    // 0x2610ec: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x2610E8u, 0x2610F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2610F0u;
label_2610f0:
    // 0x2610f0: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x2610f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_2610f4:
    // 0x2610f4: 0x12800010  beqz        $s4, . + 4 + (0x10 << 2)
label_2610f8:
    if (ctx->pc == 0x2610F8u) {
        ctx->pc = 0x2610F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2610F4u;
        // 0x2610f8: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2610FCu;
        goto label_2610fc;
    }
    ctx->pc = 0x2610F4u;
    {
        const bool branch_taken_0x2610f4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2610F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2610F4u;
        // 0x2610f8: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2610f4) {
            ctx->pc = 0x261138u;
            goto label_261138;
        }
    }
    ctx->pc = 0x2610FCu;
label_2610fc:
    // 0x2610fc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2610fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_261100:
    // 0x261100: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x261100u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_261104:
    // 0x261104: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x261104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_261108:
    // 0x261108: 0x40f809  jalr        $v0
label_26110c:
    if (ctx->pc == 0x26110Cu) {
        ctx->pc = 0x26110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261108u;
        // 0x26110c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261110u;
        goto label_261110;
    }
    ctx->pc = 0x261108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x261110u);
        ctx->pc = 0x26110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261108u;
        // 0x26110c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261108u, 0x261110u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x261110u;
label_261110:
    // 0x261110: 0x3c0a0026  lui         $t2, 0x26
    ctx->pc = 0x261110u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)38 << 16));
label_261114:
    // 0x261114: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x261114u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_261118:
    // 0x261118: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x261118u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26111c:
    // 0x26111c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x26111cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_261120:
    // 0x261120: 0x254a05f0  addiu       $t2, $t2, 0x5F0
    ctx->pc = 0x261120u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1520));
label_261124:
    // 0x261124: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x261124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_261128:
    // 0x261128: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x261128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26112c:
    // 0x26112c: 0x2406014c  addiu       $a2, $zero, 0x14C
    ctx->pc = 0x26112cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 332));
label_261130:
    // 0x261130: 0xc041664  jal         func_105990
label_261134:
    if (ctx->pc == 0x261134u) {
        ctx->pc = 0x261134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261130u;
        // 0x261134: 0x24082000  addiu       $t0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261138u;
        goto label_261138;
    }
    ctx->pc = 0x261130u;
    SET_GPR_U32(ctx, 31, 0x261138u);
    ctx->pc = 0x261134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261130u;
    // 0x261134: 0x24082000  addiu       $t0, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x261130u, 0x261138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261138u;
label_261138:
    // 0x261138: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
label_26113c:
    if (ctx->pc == 0x26113Cu) {
        ctx->pc = 0x26113Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261138u;
        // 0x26113c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261140u;
        goto label_261140;
    }
    ctx->pc = 0x261138u;
    {
        const bool branch_taken_0x261138 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x261138) {
            ctx->pc = 0x26113Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x261138u;
            // 0x26113c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26117Cu;
            goto label_26117c;
        }
    }
    ctx->pc = 0x261140u;
label_261140:
    // 0x261140: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x261140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_261144:
    // 0x261144: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x261144u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_261148:
    // 0x261148: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x261148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26114c:
    // 0x26114c: 0x40f809  jalr        $v0
label_261150:
    if (ctx->pc == 0x261150u) {
        ctx->pc = 0x261150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26114Cu;
        // 0x261150: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261154u;
        goto label_261154;
    }
    ctx->pc = 0x26114Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x261154u);
        ctx->pc = 0x261150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26114Cu;
        // 0x261150: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26114Cu, 0x261154u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x261154u;
label_261154:
    // 0x261154: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x261154u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_261158:
    // 0x261158: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x261158u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26115c:
    // 0x26115c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x26115cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_261160:
    // 0x261160: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x261160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_261164:
    // 0x261164: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x261164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_261168:
    // 0x261168: 0x24060145  addiu       $a2, $zero, 0x145
    ctx->pc = 0x261168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 325));
label_26116c:
    // 0x26116c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26116cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_261170:
    // 0x261170: 0xc041664  jal         func_105990
label_261174:
    if (ctx->pc == 0x261174u) {
        ctx->pc = 0x261174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261170u;
        // 0x261174: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261178u;
        goto label_261178;
    }
    ctx->pc = 0x261170u;
    SET_GPR_U32(ctx, 31, 0x261178u);
    ctx->pc = 0x261174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261170u;
    // 0x261174: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x261170u, 0x261178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261178u;
label_261178:
    // 0x261178: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x261178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26117c:
    // 0x26117c: 0xc05d53a  jal         func_1754E8
label_261180:
    if (ctx->pc == 0x261180u) {
        ctx->pc = 0x261180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26117Cu;
        // 0x261180: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261184u;
        goto label_261184;
    }
    ctx->pc = 0x26117Cu;
    SET_GPR_U32(ctx, 31, 0x261184u);
    ctx->pc = 0x261180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26117Cu;
    // 0x261180: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x26117Cu, 0x261184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261184u;
label_261184:
    // 0x261184: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x261184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_261188:
    // 0x261188: 0xc05d4f6  jal         func_1753D8
label_26118c:
    if (ctx->pc == 0x26118Cu) {
        ctx->pc = 0x26118Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261188u;
        // 0x26118c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261190u;
        goto label_261190;
    }
    ctx->pc = 0x261188u;
    SET_GPR_U32(ctx, 31, 0x261190u);
    ctx->pc = 0x26118Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261188u;
    // 0x26118c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x261188u, 0x261190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261190u;
label_261190:
    // 0x261190: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x261190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_261194:
    // 0x261194: 0xc089990  jal         func_226640
label_261198:
    if (ctx->pc == 0x261198u) {
        ctx->pc = 0x261198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261194u;
        // 0x261198: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26119Cu;
        goto label_26119c;
    }
    ctx->pc = 0x261194u;
    SET_GPR_U32(ctx, 31, 0x26119Cu);
    ctx->pc = 0x261198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261194u;
    // 0x261198: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x261194u, 0x26119Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26119Cu;
label_26119c:
    // 0x26119c: 0x26f0dc40  addiu       $s0, $s7, -0x23C0
    ctx->pc = 0x26119cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294958144));
label_2611a0:
    // 0x2611a0: 0x8e5400d8  lw          $s4, 0xD8($s2)
    ctx->pc = 0x2611a0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_2611a4:
    // 0x2611a4: 0xc041532  jal         func_1054C8
label_2611a8:
    if (ctx->pc == 0x2611A8u) {
        ctx->pc = 0x2611A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2611A4u;
        // 0x2611a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2611ACu;
        goto label_2611ac;
    }
    ctx->pc = 0x2611A4u;
    SET_GPR_U32(ctx, 31, 0x2611ACu);
    ctx->pc = 0x2611A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2611A4u;
    // 0x2611a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2611A4u, 0x2611ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2611ACu;
label_2611ac:
    // 0x2611ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2611acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2611b0:
    // 0x2611b0: 0xc041532  jal         func_1054C8
label_2611b4:
    if (ctx->pc == 0x2611B4u) {
        ctx->pc = 0x2611B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2611B0u;
        // 0x2611b4: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2611B8u;
        goto label_2611b8;
    }
    ctx->pc = 0x2611B0u;
    SET_GPR_U32(ctx, 31, 0x2611B8u);
    ctx->pc = 0x2611B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2611B0u;
    // 0x2611b4: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2611B0u, 0x2611B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2611B8u;
label_2611b8:
    // 0x2611b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2611b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2611bc:
    // 0x2611bc: 0xc041532  jal         func_1054C8
label_2611c0:
    if (ctx->pc == 0x2611C0u) {
        ctx->pc = 0x2611C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2611BCu;
        // 0x2611c0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2611C4u;
        goto label_2611c4;
    }
    ctx->pc = 0x2611BCu;
    SET_GPR_U32(ctx, 31, 0x2611C4u);
    ctx->pc = 0x2611C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2611BCu;
    // 0x2611c0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2611BCu, 0x2611C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2611C4u;
label_2611c4:
    // 0x2611c4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2611c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2611c8:
    // 0x2611c8: 0xc041532  jal         func_1054C8
label_2611cc:
    if (ctx->pc == 0x2611CCu) {
        ctx->pc = 0x2611CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2611C8u;
        // 0x2611cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2611D0u;
        goto label_2611d0;
    }
    ctx->pc = 0x2611C8u;
    SET_GPR_U32(ctx, 31, 0x2611D0u);
    ctx->pc = 0x2611CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2611C8u;
    // 0x2611cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2611C8u, 0x2611D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2611D0u;
label_2611d0:
    // 0x2611d0: 0x12e0000a  beqz        $s7, . + 4 + (0xA << 2)
label_2611d4:
    if (ctx->pc == 0x2611D4u) {
        ctx->pc = 0x2611D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2611D0u;
        // 0x2611d4: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2611D8u;
        goto label_2611d8;
    }
    ctx->pc = 0x2611D0u;
    {
        const bool branch_taken_0x2611d0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2611D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2611D0u;
        // 0x2611d4: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2611d0) {
            ctx->pc = 0x2611FCu;
            goto label_2611fc;
        }
    }
    ctx->pc = 0x2611D8u;
label_2611d8:
    // 0x2611d8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2611d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2611dc:
    // 0x2611dc: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x2611dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_2611e0:
    // 0x2611e0: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x2611e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2611e4:
    // 0x2611e4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2611e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2611e8:
    // 0x2611e8: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x2611e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_2611ec:
    // 0x2611ec: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2611ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_2611f0:
    // 0x2611f0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2611f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2611f4:
    // 0x2611f4: 0xc041b20  jal         func_106C80
label_2611f8:
    if (ctx->pc == 0x2611F8u) {
        ctx->pc = 0x2611F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2611F4u;
        // 0x2611f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2611FCu;
        goto label_2611fc;
    }
    ctx->pc = 0x2611F4u;
    SET_GPR_U32(ctx, 31, 0x2611FCu);
    ctx->pc = 0x2611F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2611F4u;
    // 0x2611f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x2611F4u, 0x2611FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2611FCu;
label_2611fc:
    // 0x2611fc: 0xc05d484  jal         func_175210
label_261200:
    if (ctx->pc == 0x261200u) {
        ctx->pc = 0x261200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2611FCu;
        // 0x261200: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261204u;
        goto label_261204;
    }
    ctx->pc = 0x2611FCu;
    SET_GPR_U32(ctx, 31, 0x261204u);
    ctx->pc = 0x261200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2611FCu;
    // 0x261200: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x2611FCu, 0x261204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261204u;
label_261204:
    // 0x261204: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x261204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_261208:
    // 0x261208: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x261208u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_26120c:
    // 0x26120c: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x26120cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_261210:
    // 0x261210: 0xa0f809  jalr        $a1
label_261214:
    if (ctx->pc == 0x261214u) {
        ctx->pc = 0x261214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261210u;
        // 0x261214: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261218u;
        goto label_261218;
    }
    ctx->pc = 0x261210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x261218u);
        ctx->pc = 0x261214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261210u;
        // 0x261214: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261210u, 0x261218u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x261218u;
label_261218:
    // 0x261218: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x261218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26121c:
    // 0x26121c: 0xc087016  jal         func_21C058
label_261220:
    if (ctx->pc == 0x261220u) {
        ctx->pc = 0x261220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26121Cu;
        // 0x261220: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261224u;
        goto label_261224;
    }
    ctx->pc = 0x26121Cu;
    SET_GPR_U32(ctx, 31, 0x261224u);
    ctx->pc = 0x261220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26121Cu;
    // 0x261220: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x26121Cu, 0x261224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261224u;
label_261224:
    // 0x261224: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x261224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_261228:
    // 0x261228: 0xc089a44  jal         func_226910
label_26122c:
    if (ctx->pc == 0x26122Cu) {
        ctx->pc = 0x26122Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261228u;
        // 0x26122c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261230u;
        goto label_261230;
    }
    ctx->pc = 0x261228u;
    SET_GPR_U32(ctx, 31, 0x261230u);
    ctx->pc = 0x26122Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261228u;
    // 0x26122c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226910u, 0x261228u, 0x261230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261230u;
label_261230:
    // 0x261230: 0xc08bbd6  jal         func_22EF58
label_261234:
    if (ctx->pc == 0x261234u) {
        ctx->pc = 0x261234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261230u;
        // 0x261234: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261238u;
        goto label_261238;
    }
    ctx->pc = 0x261230u;
    SET_GPR_U32(ctx, 31, 0x261238u);
    ctx->pc = 0x261234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261230u;
    // 0x261234: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EF58u, 0x261230u, 0x261238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261238u;
label_261238:
    // 0x261238: 0xc089a5e  jal         func_226978
label_26123c:
    if (ctx->pc == 0x26123Cu) {
        ctx->pc = 0x26123Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261238u;
        // 0x26123c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261240u;
        goto label_261240;
    }
    ctx->pc = 0x261238u;
    SET_GPR_U32(ctx, 31, 0x261240u);
    ctx->pc = 0x26123Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261238u;
    // 0x26123c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226978u, 0x261238u, 0x261240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261240u;
label_261240:
    // 0x261240: 0xc089f76  jal         func_227DD8
label_261244:
    if (ctx->pc == 0x261244u) {
        ctx->pc = 0x261244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261240u;
        // 0x261244: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261248u;
        goto label_261248;
    }
    ctx->pc = 0x261240u;
    SET_GPR_U32(ctx, 31, 0x261248u);
    ctx->pc = 0x261244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261240u;
    // 0x261244: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x261240u, 0x261248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261248u;
label_261248:
    // 0x261248: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_26124c:
    if (ctx->pc == 0x26124Cu) {
        ctx->pc = 0x261250u;
        goto label_261250;
    }
    ctx->pc = 0x261248u;
    {
        const bool branch_taken_0x261248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x261248) {
            ctx->pc = 0x26126Cu;
            goto label_26126c;
        }
    }
    ctx->pc = 0x261250u;
label_261250:
    // 0x261250: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x261250u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_261254:
    // 0x261254: 0x210ba  dsrl        $v0, $v0, 2
    ctx->pc = 0x261254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 2);
label_261258:
    // 0x261258: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x261258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_26125c:
    // 0x26125c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_261260:
    if (ctx->pc == 0x261260u) {
        ctx->pc = 0x261260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26125Cu;
        // 0x261260: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261264u;
        goto label_261264;
    }
    ctx->pc = 0x26125Cu;
    {
        const bool branch_taken_0x26125c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x261260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26125Cu;
        // 0x261260: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26125c) {
            ctx->pc = 0x26126Cu;
            goto label_26126c;
        }
    }
    ctx->pc = 0x261264u;
label_261264:
    // 0x261264: 0xc08bad0  jal         func_22EB40
label_261268:
    if (ctx->pc == 0x261268u) {
        ctx->pc = 0x261268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261264u;
        // 0x261268: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26126Cu;
        goto label_26126c;
    }
    ctx->pc = 0x261264u;
    SET_GPR_U32(ctx, 31, 0x26126Cu);
    ctx->pc = 0x261268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261264u;
    // 0x261268: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EB40u, 0x261264u, 0x26126Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26126Cu;
label_26126c:
    // 0x26126c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
label_261270:
    if (ctx->pc == 0x261270u) {
        ctx->pc = 0x261270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26126Cu;
        // 0x261270: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261274u;
        goto label_261274;
    }
    ctx->pc = 0x26126Cu;
    {
        const bool branch_taken_0x26126c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x261270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26126Cu;
        // 0x261270: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26126c) {
            ctx->pc = 0x261290u;
            goto label_261290;
        }
    }
    ctx->pc = 0x261274u;
label_261274:
    // 0x261274: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x261274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_261278:
    // 0x261278: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x261278u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26127c:
    // 0x26127c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26127cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_261280:
    // 0x261280: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x261280u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_261284:
    // 0x261284: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x261284u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_261288:
    // 0x261288: 0xc04159e  jal         func_105678
label_26128c:
    if (ctx->pc == 0x26128Cu) {
        ctx->pc = 0x26128Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261288u;
        // 0x26128c: 0x8e4500d8  lw          $a1, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261290u;
        goto label_261290;
    }
    ctx->pc = 0x261288u;
    SET_GPR_U32(ctx, 31, 0x261290u);
    ctx->pc = 0x26128Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261288u;
    // 0x26128c: 0x8e4500d8  lw          $a1, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x261288u, 0x261290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261290u;
label_261290:
    // 0x261290: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x261290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_261294:
    // 0x261294: 0x12a00017  beqz        $s5, . + 4 + (0x17 << 2)
label_261298:
    if (ctx->pc == 0x261298u) {
        ctx->pc = 0x261298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261294u;
        // 0x261298: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26129Cu;
        goto label_26129c;
    }
    ctx->pc = 0x261294u;
    {
        const bool branch_taken_0x261294 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x261298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261294u;
        // 0x261298: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261294) {
            ctx->pc = 0x2612F4u;
            goto label_2612f4;
        }
    }
    ctx->pc = 0x26129Cu;
label_26129c:
    // 0x26129c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x26129cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2612a0:
    // 0x2612a0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2612a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2612a4:
    // 0x2612a4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2612a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2612a8:
    // 0x2612a8: 0x40f809  jalr        $v0
label_2612ac:
    if (ctx->pc == 0x2612ACu) {
        ctx->pc = 0x2612ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2612A8u;
        // 0x2612ac: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2612B0u;
        goto label_2612b0;
    }
    ctx->pc = 0x2612A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2612B0u);
        ctx->pc = 0x2612ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2612A8u;
        // 0x2612ac: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2612A8u, 0x2612B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2612B0u;
label_2612b0:
    // 0x2612b0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2612b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2612b4:
    // 0x2612b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2612b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2612b8:
    // 0x2612b8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2612b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2612bc:
    // 0x2612bc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2612bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2612c0:
    // 0x2612c0: 0x40f809  jalr        $v0
label_2612c4:
    if (ctx->pc == 0x2612C4u) {
        ctx->pc = 0x2612C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2612C0u;
        // 0x2612c4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2612C8u;
        goto label_2612c8;
    }
    ctx->pc = 0x2612C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2612C8u);
        ctx->pc = 0x2612C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2612C0u;
        // 0x2612c4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2612C0u, 0x2612C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2612C8u;
label_2612c8:
    // 0x2612c8: 0x3c0b0026  lui         $t3, 0x26
    ctx->pc = 0x2612c8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)38 << 16));
label_2612cc:
    // 0x2612cc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2612ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2612d0:
    // 0x2612d0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2612d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2612d4:
    // 0x2612d4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2612d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2612d8:
    // 0x2612d8: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x2612d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2612dc:
    // 0x2612dc: 0x256b0670  addiu       $t3, $t3, 0x670
    ctx->pc = 0x2612dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1648));
label_2612e0:
    // 0x2612e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2612e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2612e4:
    // 0x2612e4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2612e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2612e8:
    // 0x2612e8: 0x2407014d  addiu       $a3, $zero, 0x14D
    ctx->pc = 0x2612e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 333));
label_2612ec:
    // 0x2612ec: 0xc04229e  jal         func_108A78
label_2612f0:
    if (ctx->pc == 0x2612F0u) {
        ctx->pc = 0x2612F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2612ECu;
        // 0x2612f0: 0x3c090001  lui         $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2612F4u;
        goto label_2612f4;
    }
    ctx->pc = 0x2612ECu;
    SET_GPR_U32(ctx, 31, 0x2612F4u);
    ctx->pc = 0x2612F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2612ECu;
    // 0x2612f0: 0x3c090001  lui         $t1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)1 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A78u, 0x2612ECu, 0x2612F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2612F4u;
label_2612f4:
    // 0x2612f4: 0x52c00017  beql        $s6, $zero, . + 4 + (0x17 << 2)
label_2612f8:
    if (ctx->pc == 0x2612F8u) {
        ctx->pc = 0x2612F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2612F4u;
        // 0x2612f8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2612FCu;
        goto label_2612fc;
    }
    ctx->pc = 0x2612F4u;
    {
        const bool branch_taken_0x2612f4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2612f4) {
            ctx->pc = 0x2612F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2612F4u;
            // 0x2612f8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x261354u;
            goto label_261354;
        }
    }
    ctx->pc = 0x2612FCu;
label_2612fc:
    // 0x2612fc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2612fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_261300:
    // 0x261300: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x261300u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_261304:
    // 0x261304: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x261304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_261308:
    // 0x261308: 0x40f809  jalr        $v0
label_26130c:
    if (ctx->pc == 0x26130Cu) {
        ctx->pc = 0x26130Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261308u;
        // 0x26130c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261310u;
        goto label_261310;
    }
    ctx->pc = 0x261308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x261310u);
        ctx->pc = 0x26130Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261308u;
        // 0x26130c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261308u, 0x261310u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x261310u;
label_261310:
    // 0x261310: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x261310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_261314:
    // 0x261314: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x261314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_261318:
    // 0x261318: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x261318u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26131c:
    // 0x26131c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26131cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_261320:
    // 0x261320: 0x40f809  jalr        $v0
label_261324:
    if (ctx->pc == 0x261324u) {
        ctx->pc = 0x261324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261320u;
        // 0x261324: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261328u;
        goto label_261328;
    }
    ctx->pc = 0x261320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x261328u);
        ctx->pc = 0x261324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261320u;
        // 0x261324: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261320u, 0x261328u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x261328u;
label_261328:
    // 0x261328: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x261328u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26132c:
    // 0x26132c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x26132cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_261330:
    // 0x261330: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x261330u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_261334:
    // 0x261334: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x261334u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_261338:
    // 0x261338: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x261338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_26133c:
    // 0x26133c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x26133cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_261340:
    // 0x261340: 0x24070146  addiu       $a3, $zero, 0x146
    ctx->pc = 0x261340u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 326));
label_261344:
    // 0x261344: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x261344u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_261348:
    // 0x261348: 0xc04229e  jal         func_108A78
label_26134c:
    if (ctx->pc == 0x26134Cu) {
        ctx->pc = 0x26134Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261348u;
        // 0x26134c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261350u;
        goto label_261350;
    }
    ctx->pc = 0x261348u;
    SET_GPR_U32(ctx, 31, 0x261350u);
    ctx->pc = 0x26134Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261348u;
    // 0x26134c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A78u, 0x261348u, 0x261350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261350u;
label_261350:
    // 0x261350: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x261350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_261354:
    // 0x261354: 0xc05d53a  jal         func_1754E8
label_261358:
    if (ctx->pc == 0x261358u) {
        ctx->pc = 0x261358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261354u;
        // 0x261358: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26135Cu;
        goto label_26135c;
    }
    ctx->pc = 0x261354u;
    SET_GPR_U32(ctx, 31, 0x26135Cu);
    ctx->pc = 0x261358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261354u;
    // 0x261358: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x261354u, 0x26135Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26135Cu;
label_26135c:
    // 0x26135c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26135cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_261360:
    // 0x261360: 0xc05d4f6  jal         func_1753D8
label_261364:
    if (ctx->pc == 0x261364u) {
        ctx->pc = 0x261364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261360u;
        // 0x261364: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261368u;
        goto label_261368;
    }
    ctx->pc = 0x261360u;
    SET_GPR_U32(ctx, 31, 0x261368u);
    ctx->pc = 0x261364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261360u;
    // 0x261364: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x261360u, 0x261368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261368u;
label_261368:
    // 0x261368: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x261368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26136c:
    // 0x26136c: 0xc089990  jal         func_226640
label_261370:
    if (ctx->pc == 0x261370u) {
        ctx->pc = 0x261370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26136Cu;
        // 0x261370: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261374u;
        goto label_261374;
    }
    ctx->pc = 0x26136Cu;
    SET_GPR_U32(ctx, 31, 0x261374u);
    ctx->pc = 0x261370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26136Cu;
    // 0x261370: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x26136Cu, 0x261374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261374u;
label_261374:
    // 0x261374: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x261374u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_261378:
    // 0x261378: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x261378u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_26137c:
    // 0x26137c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x26137cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_261380:
    // 0x261380: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x261380u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_261384:
    // 0x261384: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x261384u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_261388:
    // 0x261388: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x261388u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_26138c:
    // 0x26138c: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x26138cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_261390:
    // 0x261390: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x261390u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_261394:
    // 0x261394: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x261394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_261398:
    // 0x261398: 0x3e00008  jr          $ra
label_26139c:
    if (ctx->pc == 0x26139Cu) {
        ctx->pc = 0x26139Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261398u;
        // 0x26139c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2613A0u;
        goto label_2613a0;
    }
    ctx->pc = 0x261398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26139Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261398u;
        // 0x26139c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2613A0u;
label_2613a0:
    // 0x2613a0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2613a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2613a4:
    // 0x2613a4: 0x0  nop
    ctx->pc = 0x2613a4u;
    // NOP
    ctx->pc = 0x2613a8u;
}
