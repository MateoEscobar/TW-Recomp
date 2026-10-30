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

// Function: sub_00420060
// Address: 0x420060 - 0x420570
void sub_00420060_0x420060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00420060_0x420060");
#endif

    switch (ctx->pc) {
        case 0x420060u: goto label_420060;
        case 0x420064u: goto label_420064;
        case 0x420068u: goto label_420068;
        case 0x42006cu: goto label_42006c;
        case 0x420070u: goto label_420070;
        case 0x420074u: goto label_420074;
        case 0x420078u: goto label_420078;
        case 0x42007cu: goto label_42007c;
        case 0x420080u: goto label_420080;
        case 0x420084u: goto label_420084;
        case 0x420088u: goto label_420088;
        case 0x42008cu: goto label_42008c;
        case 0x420090u: goto label_420090;
        case 0x420094u: goto label_420094;
        case 0x420098u: goto label_420098;
        case 0x42009cu: goto label_42009c;
        case 0x4200a0u: goto label_4200a0;
        case 0x4200a4u: goto label_4200a4;
        case 0x4200a8u: goto label_4200a8;
        case 0x4200acu: goto label_4200ac;
        case 0x4200b0u: goto label_4200b0;
        case 0x4200b4u: goto label_4200b4;
        case 0x4200b8u: goto label_4200b8;
        case 0x4200bcu: goto label_4200bc;
        case 0x4200c0u: goto label_4200c0;
        case 0x4200c4u: goto label_4200c4;
        case 0x4200c8u: goto label_4200c8;
        case 0x4200ccu: goto label_4200cc;
        case 0x4200d0u: goto label_4200d0;
        case 0x4200d4u: goto label_4200d4;
        case 0x4200d8u: goto label_4200d8;
        case 0x4200dcu: goto label_4200dc;
        case 0x4200e0u: goto label_4200e0;
        case 0x4200e4u: goto label_4200e4;
        case 0x4200e8u: goto label_4200e8;
        case 0x4200ecu: goto label_4200ec;
        case 0x4200f0u: goto label_4200f0;
        case 0x4200f4u: goto label_4200f4;
        case 0x4200f8u: goto label_4200f8;
        case 0x4200fcu: goto label_4200fc;
        case 0x420100u: goto label_420100;
        case 0x420104u: goto label_420104;
        case 0x420108u: goto label_420108;
        case 0x42010cu: goto label_42010c;
        case 0x420110u: goto label_420110;
        case 0x420114u: goto label_420114;
        case 0x420118u: goto label_420118;
        case 0x42011cu: goto label_42011c;
        case 0x420120u: goto label_420120;
        case 0x420124u: goto label_420124;
        case 0x420128u: goto label_420128;
        case 0x42012cu: goto label_42012c;
        case 0x420130u: goto label_420130;
        case 0x420134u: goto label_420134;
        case 0x420138u: goto label_420138;
        case 0x42013cu: goto label_42013c;
        case 0x420140u: goto label_420140;
        case 0x420144u: goto label_420144;
        case 0x420148u: goto label_420148;
        case 0x42014cu: goto label_42014c;
        case 0x420150u: goto label_420150;
        case 0x420154u: goto label_420154;
        case 0x420158u: goto label_420158;
        case 0x42015cu: goto label_42015c;
        case 0x420160u: goto label_420160;
        case 0x420164u: goto label_420164;
        case 0x420168u: goto label_420168;
        case 0x42016cu: goto label_42016c;
        case 0x420170u: goto label_420170;
        case 0x420174u: goto label_420174;
        case 0x420178u: goto label_420178;
        case 0x42017cu: goto label_42017c;
        case 0x420180u: goto label_420180;
        case 0x420184u: goto label_420184;
        case 0x420188u: goto label_420188;
        case 0x42018cu: goto label_42018c;
        case 0x420190u: goto label_420190;
        case 0x420194u: goto label_420194;
        case 0x420198u: goto label_420198;
        case 0x42019cu: goto label_42019c;
        case 0x4201a0u: goto label_4201a0;
        case 0x4201a4u: goto label_4201a4;
        case 0x4201a8u: goto label_4201a8;
        case 0x4201acu: goto label_4201ac;
        case 0x4201b0u: goto label_4201b0;
        case 0x4201b4u: goto label_4201b4;
        case 0x4201b8u: goto label_4201b8;
        case 0x4201bcu: goto label_4201bc;
        case 0x4201c0u: goto label_4201c0;
        case 0x4201c4u: goto label_4201c4;
        case 0x4201c8u: goto label_4201c8;
        case 0x4201ccu: goto label_4201cc;
        case 0x4201d0u: goto label_4201d0;
        case 0x4201d4u: goto label_4201d4;
        case 0x4201d8u: goto label_4201d8;
        case 0x4201dcu: goto label_4201dc;
        case 0x4201e0u: goto label_4201e0;
        case 0x4201e4u: goto label_4201e4;
        case 0x4201e8u: goto label_4201e8;
        case 0x4201ecu: goto label_4201ec;
        case 0x4201f0u: goto label_4201f0;
        case 0x4201f4u: goto label_4201f4;
        case 0x4201f8u: goto label_4201f8;
        case 0x4201fcu: goto label_4201fc;
        case 0x420200u: goto label_420200;
        case 0x420204u: goto label_420204;
        case 0x420208u: goto label_420208;
        case 0x42020cu: goto label_42020c;
        case 0x420210u: goto label_420210;
        case 0x420214u: goto label_420214;
        case 0x420218u: goto label_420218;
        case 0x42021cu: goto label_42021c;
        case 0x420220u: goto label_420220;
        case 0x420224u: goto label_420224;
        case 0x420228u: goto label_420228;
        case 0x42022cu: goto label_42022c;
        case 0x420230u: goto label_420230;
        case 0x420234u: goto label_420234;
        case 0x420238u: goto label_420238;
        case 0x42023cu: goto label_42023c;
        case 0x420240u: goto label_420240;
        case 0x420244u: goto label_420244;
        case 0x420248u: goto label_420248;
        case 0x42024cu: goto label_42024c;
        case 0x420250u: goto label_420250;
        case 0x420254u: goto label_420254;
        case 0x420258u: goto label_420258;
        case 0x42025cu: goto label_42025c;
        case 0x420260u: goto label_420260;
        case 0x420264u: goto label_420264;
        case 0x420268u: goto label_420268;
        case 0x42026cu: goto label_42026c;
        case 0x420270u: goto label_420270;
        case 0x420274u: goto label_420274;
        case 0x420278u: goto label_420278;
        case 0x42027cu: goto label_42027c;
        case 0x420280u: goto label_420280;
        case 0x420284u: goto label_420284;
        case 0x420288u: goto label_420288;
        case 0x42028cu: goto label_42028c;
        case 0x420290u: goto label_420290;
        case 0x420294u: goto label_420294;
        case 0x420298u: goto label_420298;
        case 0x42029cu: goto label_42029c;
        case 0x4202a0u: goto label_4202a0;
        case 0x4202a4u: goto label_4202a4;
        case 0x4202a8u: goto label_4202a8;
        case 0x4202acu: goto label_4202ac;
        case 0x4202b0u: goto label_4202b0;
        case 0x4202b4u: goto label_4202b4;
        case 0x4202b8u: goto label_4202b8;
        case 0x4202bcu: goto label_4202bc;
        case 0x4202c0u: goto label_4202c0;
        case 0x4202c4u: goto label_4202c4;
        case 0x4202c8u: goto label_4202c8;
        case 0x4202ccu: goto label_4202cc;
        case 0x4202d0u: goto label_4202d0;
        case 0x4202d4u: goto label_4202d4;
        case 0x4202d8u: goto label_4202d8;
        case 0x4202dcu: goto label_4202dc;
        case 0x4202e0u: goto label_4202e0;
        case 0x4202e4u: goto label_4202e4;
        case 0x4202e8u: goto label_4202e8;
        case 0x4202ecu: goto label_4202ec;
        case 0x4202f0u: goto label_4202f0;
        case 0x4202f4u: goto label_4202f4;
        case 0x4202f8u: goto label_4202f8;
        case 0x4202fcu: goto label_4202fc;
        case 0x420300u: goto label_420300;
        case 0x420304u: goto label_420304;
        case 0x420308u: goto label_420308;
        case 0x42030cu: goto label_42030c;
        case 0x420310u: goto label_420310;
        case 0x420314u: goto label_420314;
        case 0x420318u: goto label_420318;
        case 0x42031cu: goto label_42031c;
        case 0x420320u: goto label_420320;
        case 0x420324u: goto label_420324;
        case 0x420328u: goto label_420328;
        case 0x42032cu: goto label_42032c;
        case 0x420330u: goto label_420330;
        case 0x420334u: goto label_420334;
        case 0x420338u: goto label_420338;
        case 0x42033cu: goto label_42033c;
        case 0x420340u: goto label_420340;
        case 0x420344u: goto label_420344;
        case 0x420348u: goto label_420348;
        case 0x42034cu: goto label_42034c;
        case 0x420350u: goto label_420350;
        case 0x420354u: goto label_420354;
        case 0x420358u: goto label_420358;
        case 0x42035cu: goto label_42035c;
        case 0x420360u: goto label_420360;
        case 0x420364u: goto label_420364;
        case 0x420368u: goto label_420368;
        case 0x42036cu: goto label_42036c;
        case 0x420370u: goto label_420370;
        case 0x420374u: goto label_420374;
        case 0x420378u: goto label_420378;
        case 0x42037cu: goto label_42037c;
        case 0x420380u: goto label_420380;
        case 0x420384u: goto label_420384;
        case 0x420388u: goto label_420388;
        case 0x42038cu: goto label_42038c;
        case 0x420390u: goto label_420390;
        case 0x420394u: goto label_420394;
        case 0x420398u: goto label_420398;
        case 0x42039cu: goto label_42039c;
        case 0x4203a0u: goto label_4203a0;
        case 0x4203a4u: goto label_4203a4;
        case 0x4203a8u: goto label_4203a8;
        case 0x4203acu: goto label_4203ac;
        case 0x4203b0u: goto label_4203b0;
        case 0x4203b4u: goto label_4203b4;
        case 0x4203b8u: goto label_4203b8;
        case 0x4203bcu: goto label_4203bc;
        case 0x4203c0u: goto label_4203c0;
        case 0x4203c4u: goto label_4203c4;
        case 0x4203c8u: goto label_4203c8;
        case 0x4203ccu: goto label_4203cc;
        case 0x4203d0u: goto label_4203d0;
        case 0x4203d4u: goto label_4203d4;
        case 0x4203d8u: goto label_4203d8;
        case 0x4203dcu: goto label_4203dc;
        case 0x4203e0u: goto label_4203e0;
        case 0x4203e4u: goto label_4203e4;
        case 0x4203e8u: goto label_4203e8;
        case 0x4203ecu: goto label_4203ec;
        case 0x4203f0u: goto label_4203f0;
        case 0x4203f4u: goto label_4203f4;
        case 0x4203f8u: goto label_4203f8;
        case 0x4203fcu: goto label_4203fc;
        case 0x420400u: goto label_420400;
        case 0x420404u: goto label_420404;
        case 0x420408u: goto label_420408;
        case 0x42040cu: goto label_42040c;
        case 0x420410u: goto label_420410;
        case 0x420414u: goto label_420414;
        case 0x420418u: goto label_420418;
        case 0x42041cu: goto label_42041c;
        case 0x420420u: goto label_420420;
        case 0x420424u: goto label_420424;
        case 0x420428u: goto label_420428;
        case 0x42042cu: goto label_42042c;
        case 0x420430u: goto label_420430;
        case 0x420434u: goto label_420434;
        case 0x420438u: goto label_420438;
        case 0x42043cu: goto label_42043c;
        case 0x420440u: goto label_420440;
        case 0x420444u: goto label_420444;
        case 0x420448u: goto label_420448;
        case 0x42044cu: goto label_42044c;
        case 0x420450u: goto label_420450;
        case 0x420454u: goto label_420454;
        case 0x420458u: goto label_420458;
        case 0x42045cu: goto label_42045c;
        case 0x420460u: goto label_420460;
        case 0x420464u: goto label_420464;
        case 0x420468u: goto label_420468;
        case 0x42046cu: goto label_42046c;
        case 0x420470u: goto label_420470;
        case 0x420474u: goto label_420474;
        case 0x420478u: goto label_420478;
        case 0x42047cu: goto label_42047c;
        case 0x420480u: goto label_420480;
        case 0x420484u: goto label_420484;
        case 0x420488u: goto label_420488;
        case 0x42048cu: goto label_42048c;
        case 0x420490u: goto label_420490;
        case 0x420494u: goto label_420494;
        case 0x420498u: goto label_420498;
        case 0x42049cu: goto label_42049c;
        case 0x4204a0u: goto label_4204a0;
        case 0x4204a4u: goto label_4204a4;
        case 0x4204a8u: goto label_4204a8;
        case 0x4204acu: goto label_4204ac;
        case 0x4204b0u: goto label_4204b0;
        case 0x4204b4u: goto label_4204b4;
        case 0x4204b8u: goto label_4204b8;
        case 0x4204bcu: goto label_4204bc;
        case 0x4204c0u: goto label_4204c0;
        case 0x4204c4u: goto label_4204c4;
        case 0x4204c8u: goto label_4204c8;
        case 0x4204ccu: goto label_4204cc;
        case 0x4204d0u: goto label_4204d0;
        case 0x4204d4u: goto label_4204d4;
        case 0x4204d8u: goto label_4204d8;
        case 0x4204dcu: goto label_4204dc;
        case 0x4204e0u: goto label_4204e0;
        case 0x4204e4u: goto label_4204e4;
        case 0x4204e8u: goto label_4204e8;
        case 0x4204ecu: goto label_4204ec;
        case 0x4204f0u: goto label_4204f0;
        case 0x4204f4u: goto label_4204f4;
        case 0x4204f8u: goto label_4204f8;
        case 0x4204fcu: goto label_4204fc;
        case 0x420500u: goto label_420500;
        case 0x420504u: goto label_420504;
        case 0x420508u: goto label_420508;
        case 0x42050cu: goto label_42050c;
        case 0x420510u: goto label_420510;
        case 0x420514u: goto label_420514;
        case 0x420518u: goto label_420518;
        case 0x42051cu: goto label_42051c;
        case 0x420520u: goto label_420520;
        case 0x420524u: goto label_420524;
        case 0x420528u: goto label_420528;
        case 0x42052cu: goto label_42052c;
        case 0x420530u: goto label_420530;
        case 0x420534u: goto label_420534;
        case 0x420538u: goto label_420538;
        case 0x42053cu: goto label_42053c;
        case 0x420540u: goto label_420540;
        case 0x420544u: goto label_420544;
        case 0x420548u: goto label_420548;
        case 0x42054cu: goto label_42054c;
        case 0x420550u: goto label_420550;
        case 0x420554u: goto label_420554;
        case 0x420558u: goto label_420558;
        case 0x42055cu: goto label_42055c;
        case 0x420560u: goto label_420560;
        case 0x420564u: goto label_420564;
        case 0x420568u: goto label_420568;
        case 0x42056cu: goto label_42056c;
        default: break;
    }

    ctx->pc = 0x420060u;

label_420060:
    // 0x420060: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x420060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_420064:
    // 0x420064: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x420064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_420068:
    // 0x420068: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x420068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_42006c:
    // 0x42006c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x42006cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_420070:
    // 0x420070: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x420070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_420074:
    // 0x420074: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x420074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_420078:
    // 0x420078: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x420078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_42007c:
    // 0x42007c: 0x8e030188  lw          $v1, 0x188($s0)
    ctx->pc = 0x42007cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
label_420080:
    // 0x420080: 0x2c62000c  sltiu       $v0, $v1, 0xC
    ctx->pc = 0x420080u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_420084:
    // 0x420084: 0x10400133  beqz        $v0, . + 4 + (0x133 << 2)
label_420088:
    if (ctx->pc == 0x420088u) {
        ctx->pc = 0x420088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420084u;
        // 0x420088: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42008Cu;
        goto label_42008c;
    }
    ctx->pc = 0x420084u;
    {
        const bool branch_taken_0x420084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x420088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420084u;
        // 0x420088: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420084) {
            ctx->pc = 0x420554u;
            goto label_420554;
        }
    }
    ctx->pc = 0x42008Cu;
label_42008c:
    // 0x42008c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x42008cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_420090:
    // 0x420090: 0x2442b600  addiu       $v0, $v0, -0x4A00
    ctx->pc = 0x420090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948352));
label_420094:
    // 0x420094: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x420094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_420098:
    // 0x420098: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x420098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_42009c:
    // 0x42009c: 0x800008  jr          $a0
label_4200a0:
    if (ctx->pc == 0x4200A0u) {
        ctx->pc = 0x4200A4u;
        goto label_4200a4;
    }
    ctx->pc = 0x42009Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4200A4u: goto label_4200a4;
            case 0x420134u: goto label_420134;
            case 0x4201ACu: goto label_4201ac;
            case 0x420218u: goto label_420218;
            case 0x4202A8u: goto label_4202a8;
            case 0x4202E8u: goto label_4202e8;
            case 0x420360u: goto label_420360;
            case 0x4203B8u: goto label_4203b8;
            case 0x4203F0u: goto label_4203f0;
            case 0x4204C0u: goto label_4204c0;
            case 0x42053Cu: goto label_42053c;
            case 0x420554u: goto label_420554;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42009Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4200A4u;
label_4200a4:
    // 0x4200a4: 0xc052e74  jal         func_14B9D0
label_4200a8:
    if (ctx->pc == 0x4200A8u) {
        ctx->pc = 0x4200A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4200A4u;
        // 0x4200a8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4200ACu;
        goto label_4200ac;
    }
    ctx->pc = 0x4200A4u;
    SET_GPR_U32(ctx, 31, 0x4200ACu);
    ctx->pc = 0x4200A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4200A4u;
    // 0x4200a8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B9D0u, 0x4200A4u, 0x4200ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4200ACu;
label_4200ac:
    // 0x4200ac: 0x10400129  beqz        $v0, . + 4 + (0x129 << 2)
label_4200b0:
    if (ctx->pc == 0x4200B0u) {
        ctx->pc = 0x4200B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4200ACu;
        // 0x4200b0: 0x3c050059  lui         $a1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4200B4u;
        goto label_4200b4;
    }
    ctx->pc = 0x4200ACu;
    {
        const bool branch_taken_0x4200ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4200B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4200ACu;
        // 0x4200b0: 0x3c050059  lui         $a1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4200ac) {
            ctx->pc = 0x420554u;
            goto label_420554;
        }
    }
    ctx->pc = 0x4200B4u;
label_4200b4:
    // 0x4200b4: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x4200b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
label_4200b8:
    // 0x4200b8: 0xae000180  sw          $zero, 0x180($s0)
    ctx->pc = 0x4200b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 0));
label_4200bc:
    // 0x4200bc: 0x24a5b510  addiu       $a1, $a1, -0x4AF0
    ctx->pc = 0x4200bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948112));
label_4200c0:
    // 0x4200c0: 0x24c6b4f8  addiu       $a2, $a2, -0x4B08
    ctx->pc = 0x4200c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948088));
label_4200c4:
    // 0x4200c4: 0xc052cf4  jal         func_14B3D0
label_4200c8:
    if (ctx->pc == 0x4200C8u) {
        ctx->pc = 0x4200C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4200C4u;
        // 0x4200c8: 0x26040148  addiu       $a0, $s0, 0x148 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4200CCu;
        goto label_4200cc;
    }
    ctx->pc = 0x4200C4u;
    SET_GPR_U32(ctx, 31, 0x4200CCu);
    ctx->pc = 0x4200C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4200C4u;
    // 0x4200c8: 0x26040148  addiu       $a0, $s0, 0x148 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B3D0u, 0x4200C4u, 0x4200CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4200CCu;
label_4200cc:
    // 0x4200cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_4200d0:
    if (ctx->pc == 0x4200D0u) {
        ctx->pc = 0x4200D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4200CCu;
        // 0x4200d0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4200D4u;
        goto label_4200d4;
    }
    ctx->pc = 0x4200CCu;
    {
        const bool branch_taken_0x4200cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4200D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4200CCu;
        // 0x4200d0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4200cc) {
            ctx->pc = 0x4200DCu;
            goto label_4200dc;
        }
    }
    ctx->pc = 0x4200D4u;
label_4200d4:
    // 0x4200d4: 0x1000011e  b           . + 4 + (0x11E << 2)
label_4200d8:
    if (ctx->pc == 0x4200D8u) {
        ctx->pc = 0x4200D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4200D4u;
        // 0x4200d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4200DCu;
        goto label_4200dc;
    }
    ctx->pc = 0x4200D4u;
    {
        const bool branch_taken_0x4200d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4200D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4200D4u;
        // 0x4200d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4200d4) {
            ctx->pc = 0x420550u;
            goto label_420550;
        }
    }
    ctx->pc = 0x4200DCu;
label_4200dc:
    // 0x4200dc: 0x8e06010c  lw          $a2, 0x10C($s0)
    ctx->pc = 0x4200dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_4200e0:
    // 0x4200e0: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x4200e0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4200e4:
    // 0x4200e4: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x4200e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_4200e8:
    // 0x4200e8: 0x3c080059  lui         $t0, 0x59
    ctx->pc = 0x4200e8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)89 << 16));
label_4200ec:
    // 0x4200ec: 0x24a5b5b8  addiu       $a1, $a1, -0x4A48
    ctx->pc = 0x4200ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948280));
label_4200f0:
    // 0x4200f0: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x4200f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_4200f4:
    // 0x4200f4: 0x2508b5c0  addiu       $t0, $t0, -0x4A40
    ctx->pc = 0x4200f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294948288));
label_4200f8:
    // 0x4200f8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4200f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4200fc:
    // 0x4200fc: 0x2409021c  addiu       $t1, $zero, 0x21C
    ctx->pc = 0x4200fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 540));
label_420100:
    // 0x420100: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x420100u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_420104:
    // 0x420104: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x420104u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_420108:
    // 0x420108: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x420108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_42010c:
    // 0x42010c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x42010cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_420110:
    // 0x420110: 0x40f809  jalr        $v0
label_420114:
    if (ctx->pc == 0x420114u) {
        ctx->pc = 0x420114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420110u;
        // 0x420114: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420118u;
        goto label_420118;
    }
    ctx->pc = 0x420110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x420118u);
        ctx->pc = 0x420114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420110u;
        // 0x420114: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420110u, 0x420118u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x420118u;
label_420118:
    // 0x420118: 0x8e06010c  lw          $a2, 0x10C($s0)
    ctx->pc = 0x420118u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_42011c:
    // 0x42011c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x42011cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_420120:
    // 0x420120: 0xae020190  sw          $v0, 0x190($s0)
    ctx->pc = 0x420120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 2));
label_420124:
    // 0x420124: 0xc10c1fa  jal         func_4307E8
label_420128:
    if (ctx->pc == 0x420128u) {
        ctx->pc = 0x420128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420124u;
        // 0x420128: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42012Cu;
        goto label_42012c;
    }
    ctx->pc = 0x420124u;
    SET_GPR_U32(ctx, 31, 0x42012Cu);
    ctx->pc = 0x420128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420124u;
    // 0x420128: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x420124u, 0x42012Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42012Cu;
label_42012c:
    // 0x42012c: 0x1000005b  b           . + 4 + (0x5B << 2)
label_420130:
    if (ctx->pc == 0x420130u) {
        ctx->pc = 0x420130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42012Cu;
        // 0x420130: 0x8e030188  lw          $v1, 0x188($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420134u;
        goto label_420134;
    }
    ctx->pc = 0x42012Cu;
    {
        const bool branch_taken_0x42012c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x420130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42012Cu;
        // 0x420130: 0x8e030188  lw          $v1, 0x188($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42012c) {
            ctx->pc = 0x42029Cu;
            goto label_42029c;
        }
    }
    ctx->pc = 0x420134u;
label_420134:
    // 0x420134: 0x26040148  addiu       $a0, $s0, 0x148
    ctx->pc = 0x420134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 328));
label_420138:
    // 0x420138: 0xc052d32  jal         func_14B4C8
label_42013c:
    if (ctx->pc == 0x42013Cu) {
        ctx->pc = 0x42013Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420138u;
        // 0x42013c: 0x26050180  addiu       $a1, $s0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420140u;
        goto label_420140;
    }
    ctx->pc = 0x420138u;
    SET_GPR_U32(ctx, 31, 0x420140u);
    ctx->pc = 0x42013Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420138u;
    // 0x42013c: 0x26050180  addiu       $a1, $s0, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B4C8u, 0x420138u, 0x420140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420140u;
label_420140:
    // 0x420140: 0x50400105  beql        $v0, $zero, . + 4 + (0x105 << 2)
label_420144:
    if (ctx->pc == 0x420144u) {
        ctx->pc = 0x420144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420140u;
        // 0x420144: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420148u;
        goto label_420148;
    }
    ctx->pc = 0x420140u;
    {
        const bool branch_taken_0x420140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x420140) {
            ctx->pc = 0x420144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x420140u;
            // 0x420144: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x420558u;
            goto label_420558;
        }
    }
    ctx->pc = 0x420148u;
label_420148:
    // 0x420148: 0x8e060180  lw          $a2, 0x180($s0)
    ctx->pc = 0x420148u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
label_42014c:
    // 0x42014c: 0x54c0000a  bnel        $a2, $zero, . + 4 + (0xA << 2)
label_420150:
    if (ctx->pc == 0x420150u) {
        ctx->pc = 0x420150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42014Cu;
        // 0x420150: 0x8e040190  lw          $a0, 0x190($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420154u;
        goto label_420154;
    }
    ctx->pc = 0x42014Cu;
    {
        const bool branch_taken_0x42014c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x42014c) {
            ctx->pc = 0x420150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42014Cu;
            // 0x420150: 0x8e040190  lw          $a0, 0x190($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x420178u;
            goto label_420178;
        }
    }
    ctx->pc = 0x420154u;
label_420154:
    // 0x420154: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x420154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_420158:
    // 0x420158: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x420158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_42015c:
    // 0x42015c: 0xae020184  sw          $v0, 0x184($s0)
    ctx->pc = 0x42015cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 2));
label_420160:
    // 0x420160: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x420160u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
label_420164:
    // 0x420164: 0x8c6827e4  lw          $t0, 0x27E4($v1)
    ctx->pc = 0x420164u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10212)));
label_420168:
    // 0x420168: 0x24c6b5c0  addiu       $a2, $a2, -0x4A40
    ctx->pc = 0x420168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948288));
label_42016c:
    // 0x42016c: 0x8e050190  lw          $a1, 0x190($s0)
    ctx->pc = 0x42016cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
label_420170:
    // 0x420170: 0x100000cc  b           . + 4 + (0xCC << 2)
label_420174:
    if (ctx->pc == 0x420174u) {
        ctx->pc = 0x420174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420170u;
        // 0x420174: 0x24070233  addiu       $a3, $zero, 0x233 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 563));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420178u;
        goto label_420178;
    }
    ctx->pc = 0x420170u;
    {
        const bool branch_taken_0x420170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x420174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420170u;
        // 0x420174: 0x24070233  addiu       $a3, $zero, 0x233 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 563));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420170) {
            ctx->pc = 0x4204A4u;
            goto label_4204a4;
        }
    }
    ctx->pc = 0x420178u;
label_420178:
    // 0x420178: 0xc052dfe  jal         func_14B7F8
label_42017c:
    if (ctx->pc == 0x42017Cu) {
        ctx->pc = 0x42017Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420178u;
        // 0x42017c: 0x8e05010c  lw          $a1, 0x10C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420180u;
        goto label_420180;
    }
    ctx->pc = 0x420178u;
    SET_GPR_U32(ctx, 31, 0x420180u);
    ctx->pc = 0x42017Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420178u;
    // 0x42017c: 0x8e05010c  lw          $a1, 0x10C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B7F8u, 0x420178u, 0x420180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420180u;
label_420180:
    // 0x420180: 0x544000eb  bnel        $v0, $zero, . + 4 + (0xEB << 2)
label_420184:
    if (ctx->pc == 0x420184u) {
        ctx->pc = 0x420184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420180u;
        // 0x420184: 0x8e020188  lw          $v0, 0x188($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420188u;
        goto label_420188;
    }
    ctx->pc = 0x420180u;
    {
        const bool branch_taken_0x420180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x420180) {
            ctx->pc = 0x420184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x420180u;
            // 0x420184: 0x8e020188  lw          $v0, 0x188($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x420530u;
            goto label_420530;
        }
    }
    ctx->pc = 0x420188u;
label_420188:
    // 0x420188: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x420188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42018c:
    // 0x42018c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x42018cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_420190:
    // 0x420190: 0xae020184  sw          $v0, 0x184($s0)
    ctx->pc = 0x420190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 2));
label_420194:
    // 0x420194: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x420194u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
label_420198:
    // 0x420198: 0x8c6827e4  lw          $t0, 0x27E4($v1)
    ctx->pc = 0x420198u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10212)));
label_42019c:
    // 0x42019c: 0x24c6b5c0  addiu       $a2, $a2, -0x4A40
    ctx->pc = 0x42019cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948288));
label_4201a0:
    // 0x4201a0: 0x8e050190  lw          $a1, 0x190($s0)
    ctx->pc = 0x4201a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
label_4201a4:
    // 0x4201a4: 0x100000bf  b           . + 4 + (0xBF << 2)
label_4201a8:
    if (ctx->pc == 0x4201A8u) {
        ctx->pc = 0x4201A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4201A4u;
        // 0x4201a8: 0x24070240  addiu       $a3, $zero, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4201ACu;
        goto label_4201ac;
    }
    ctx->pc = 0x4201A4u;
    {
        const bool branch_taken_0x4201a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4201A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4201A4u;
        // 0x4201a8: 0x24070240  addiu       $a3, $zero, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4201a4) {
            ctx->pc = 0x4204A4u;
            goto label_4204a4;
        }
    }
    ctx->pc = 0x4201ACu;
label_4201ac:
    // 0x4201ac: 0xc052e74  jal         func_14B9D0
label_4201b0:
    if (ctx->pc == 0x4201B0u) {
        ctx->pc = 0x4201B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4201ACu;
        // 0x4201b0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4201B4u;
        goto label_4201b4;
    }
    ctx->pc = 0x4201ACu;
    SET_GPR_U32(ctx, 31, 0x4201B4u);
    ctx->pc = 0x4201B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4201ACu;
    // 0x4201b0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B9D0u, 0x4201ACu, 0x4201B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4201B4u;
label_4201b4:
    // 0x4201b4: 0x104000e7  beqz        $v0, . + 4 + (0xE7 << 2)
label_4201b8:
    if (ctx->pc == 0x4201B8u) {
        ctx->pc = 0x4201B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4201B4u;
        // 0x4201b8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4201BCu;
        goto label_4201bc;
    }
    ctx->pc = 0x4201B4u;
    {
        const bool branch_taken_0x4201b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4201B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4201B4u;
        // 0x4201b8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4201b4) {
            ctx->pc = 0x420554u;
            goto label_420554;
        }
    }
    ctx->pc = 0x4201BCu;
label_4201bc:
    // 0x4201bc: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x4201bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
label_4201c0:
    // 0x4201c0: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4201c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4201c4:
    // 0x4201c4: 0x24c6b5c0  addiu       $a2, $a2, -0x4A40
    ctx->pc = 0x4201c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948288));
label_4201c8:
    // 0x4201c8: 0x8e050190  lw          $a1, 0x190($s0)
    ctx->pc = 0x4201c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
label_4201cc:
    // 0x4201cc: 0x24070254  addiu       $a3, $zero, 0x254
    ctx->pc = 0x4201ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 596));
label_4201d0:
    // 0x4201d0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4201d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4201d4:
    // 0x4201d4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4201d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4201d8:
    // 0x4201d8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4201d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4201dc:
    // 0x4201dc: 0x60f809  jalr        $v1
label_4201e0:
    if (ctx->pc == 0x4201E0u) {
        ctx->pc = 0x4201E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4201DCu;
        // 0x4201e0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4201E4u;
        goto label_4201e4;
    }
    ctx->pc = 0x4201DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4201E4u);
        ctx->pc = 0x4201E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4201DCu;
        // 0x4201e0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4201DCu, 0x4201E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4201E4u;
label_4201e4:
    // 0x4201e4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4201e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4201e8:
    // 0x4201e8: 0x46000c6  bltz        $v1, . + 4 + (0xC6 << 2)
label_4201ec:
    if (ctx->pc == 0x4201ECu) {
        ctx->pc = 0x4201ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4201E8u;
        // 0x4201ec: 0xae000190  sw          $zero, 0x190($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4201F0u;
        goto label_4201f0;
    }
    ctx->pc = 0x4201E8u;
    {
        const bool branch_taken_0x4201e8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4201ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4201E8u;
        // 0x4201ec: 0xae000190  sw          $zero, 0x190($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4201e8) {
            ctx->pc = 0x420504u;
            goto label_420504;
        }
    }
    ctx->pc = 0x4201F0u;
label_4201f0:
    // 0x4201f0: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x4201f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_4201f4:
    // 0x4201f4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x4201f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_4201f8:
    // 0x4201f8: 0x144000c2  bnez        $v0, . + 4 + (0xC2 << 2)
label_4201fc:
    if (ctx->pc == 0x4201FCu) {
        ctx->pc = 0x420200u;
        goto label_420200;
    }
    ctx->pc = 0x4201F8u;
    {
        const bool branch_taken_0x4201f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4201f8) {
            ctx->pc = 0x420504u;
            goto label_420504;
        }
    }
    ctx->pc = 0x420200u;
label_420200:
    // 0x420200: 0xc052dac  jal         func_14B6B0
label_420204:
    if (ctx->pc == 0x420204u) {
        ctx->pc = 0x420204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420200u;
        // 0x420204: 0x8e040180  lw          $a0, 0x180($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420208u;
        goto label_420208;
    }
    ctx->pc = 0x420200u;
    SET_GPR_U32(ctx, 31, 0x420208u);
    ctx->pc = 0x420204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420200u;
    // 0x420204: 0x8e040180  lw          $a0, 0x180($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6B0u, 0x420200u, 0x420208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420208u;
label_420208:
    // 0x420208: 0x544000c9  bnel        $v0, $zero, . + 4 + (0xC9 << 2)
label_42020c:
    if (ctx->pc == 0x42020Cu) {
        ctx->pc = 0x42020Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420208u;
        // 0x42020c: 0x8e020188  lw          $v0, 0x188($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420210u;
        goto label_420210;
    }
    ctx->pc = 0x420208u;
    {
        const bool branch_taken_0x420208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x420208) {
            ctx->pc = 0x42020Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x420208u;
            // 0x42020c: 0x8e020188  lw          $v0, 0x188($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x420530u;
            goto label_420530;
        }
    }
    ctx->pc = 0x420210u;
label_420210:
    // 0x420210: 0x100000cf  b           . + 4 + (0xCF << 2)
label_420214:
    if (ctx->pc == 0x420214u) {
        ctx->pc = 0x420214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420210u;
        // 0x420214: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420218u;
        goto label_420218;
    }
    ctx->pc = 0x420210u;
    {
        const bool branch_taken_0x420210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x420214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420210u;
        // 0x420214: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420210) {
            ctx->pc = 0x420550u;
            goto label_420550;
        }
    }
    ctx->pc = 0x420218u;
label_420218:
    // 0x420218: 0xc052e74  jal         func_14B9D0
label_42021c:
    if (ctx->pc == 0x42021Cu) {
        ctx->pc = 0x42021Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420218u;
        // 0x42021c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420220u;
        goto label_420220;
    }
    ctx->pc = 0x420218u;
    SET_GPR_U32(ctx, 31, 0x420220u);
    ctx->pc = 0x42021Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420218u;
    // 0x42021c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B9D0u, 0x420218u, 0x420220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420220u;
label_420220:
    // 0x420220: 0x104000cc  beqz        $v0, . + 4 + (0xCC << 2)
label_420224:
    if (ctx->pc == 0x420224u) {
        ctx->pc = 0x420224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420220u;
        // 0x420224: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420228u;
        goto label_420228;
    }
    ctx->pc = 0x420220u;
    {
        const bool branch_taken_0x420220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x420224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420220u;
        // 0x420224: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420220) {
            ctx->pc = 0x420554u;
            goto label_420554;
        }
    }
    ctx->pc = 0x420228u;
label_420228:
    // 0x420228: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x420228u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_42022c:
    // 0x42022c: 0x8c4b27e4  lw          $t3, 0x27E4($v0)
    ctx->pc = 0x42022cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_420230:
    // 0x420230: 0x3c080059  lui         $t0, 0x59
    ctx->pc = 0x420230u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)89 << 16));
label_420234:
    // 0x420234: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x420234u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
label_420238:
    // 0x420238: 0x24a5b5b8  addiu       $a1, $a1, -0x4A48
    ctx->pc = 0x420238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948280));
label_42023c:
    // 0x42023c: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x42023cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_420240:
    // 0x420240: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x420240u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_420244:
    // 0x420244: 0x2508b5c0  addiu       $t0, $t0, -0x4A40
    ctx->pc = 0x420244u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294948288));
label_420248:
    // 0x420248: 0x34c63518  ori         $a2, $a2, 0x3518
    ctx->pc = 0x420248u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)13592);
label_42024c:
    // 0x42024c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x42024cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_420250:
    // 0x420250: 0x24090284  addiu       $t1, $zero, 0x284
    ctx->pc = 0x420250u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 644));
label_420254:
    // 0x420254: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x420254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_420258:
    // 0x420258: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x420258u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42025c:
    // 0x42025c: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x42025cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_420260:
    // 0x420260: 0x40f809  jalr        $v0
label_420264:
    if (ctx->pc == 0x420264u) {
        ctx->pc = 0x420264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420260u;
        // 0x420264: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420268u;
        goto label_420268;
    }
    ctx->pc = 0x420260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x420268u);
        ctx->pc = 0x420264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420260u;
        // 0x420264: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420260u, 0x420268u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x420268u;
label_420268:
    // 0x420268: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x420268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_42026c:
    // 0x42026c: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x42026cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_420270:
    // 0x420270: 0x8c645340  lw          $a0, 0x5340($v1)
    ctx->pc = 0x420270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21312)));
label_420274:
    // 0x420274: 0x3c070042  lui         $a3, 0x42
    ctx->pc = 0x420274u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)66 << 16));
label_420278:
    // 0x420278: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x420278u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
label_42027c:
    // 0x42027c: 0xae020190  sw          $v0, 0x190($s0)
    ctx->pc = 0x42027cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 2));
label_420280:
    // 0x420280: 0x24a5b560  addiu       $a1, $a1, -0x4AA0
    ctx->pc = 0x420280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948192));
label_420284:
    // 0x420284: 0x24e70928  addiu       $a3, $a3, 0x928
    ctx->pc = 0x420284u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2344));
label_420288:
    // 0x420288: 0x34c63518  ori         $a2, $a2, 0x3518
    ctx->pc = 0x420288u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)13592);
label_42028c:
    // 0x42028c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x42028cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_420290:
    // 0x420290: 0xc055354  jal         func_154D50
label_420294:
    if (ctx->pc == 0x420294u) {
        ctx->pc = 0x420294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420290u;
        // 0x420294: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420298u;
        goto label_420298;
    }
    ctx->pc = 0x420290u;
    SET_GPR_U32(ctx, 31, 0x420298u);
    ctx->pc = 0x420294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420290u;
    // 0x420294: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154D50u, 0x420290u, 0x420298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420298u;
label_420298:
    // 0x420298: 0x8e030188  lw          $v1, 0x188($s0)
    ctx->pc = 0x420298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
label_42029c:
    // 0x42029c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x42029cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4202a0:
    // 0x4202a0: 0x100000ac  b           . + 4 + (0xAC << 2)
label_4202a4:
    if (ctx->pc == 0x4202A4u) {
        ctx->pc = 0x4202A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4202A0u;
        // 0x4202a4: 0xae030188  sw          $v1, 0x188($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4202A8u;
        goto label_4202a8;
    }
    ctx->pc = 0x4202A0u;
    {
        const bool branch_taken_0x4202a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4202A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4202A0u;
        // 0x4202a4: 0xae030188  sw          $v1, 0x188($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4202a0) {
            ctx->pc = 0x420554u;
            goto label_420554;
        }
    }
    ctx->pc = 0x4202A8u;
label_4202a8:
    // 0x4202a8: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x4202a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_4202ac:
    // 0x4202ac: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x4202acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
label_4202b0:
    // 0x4202b0: 0xae000180  sw          $zero, 0x180($s0)
    ctx->pc = 0x4202b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 0));
label_4202b4:
    // 0x4202b4: 0x24a5b530  addiu       $a1, $a1, -0x4AD0
    ctx->pc = 0x4202b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948144));
label_4202b8:
    // 0x4202b8: 0x24c6b4f8  addiu       $a2, $a2, -0x4B08
    ctx->pc = 0x4202b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948088));
label_4202bc:
    // 0x4202bc: 0xc052cf4  jal         func_14B3D0
label_4202c0:
    if (ctx->pc == 0x4202C0u) {
        ctx->pc = 0x4202C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4202BCu;
        // 0x4202c0: 0x26040148  addiu       $a0, $s0, 0x148 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4202C4u;
        goto label_4202c4;
    }
    ctx->pc = 0x4202BCu;
    SET_GPR_U32(ctx, 31, 0x4202C4u);
    ctx->pc = 0x4202C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4202BCu;
    // 0x4202c0: 0x26040148  addiu       $a0, $s0, 0x148 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B3D0u, 0x4202BCu, 0x4202C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4202C4u;
label_4202c4:
    // 0x4202c4: 0x5440009a  bnel        $v0, $zero, . + 4 + (0x9A << 2)
label_4202c8:
    if (ctx->pc == 0x4202C8u) {
        ctx->pc = 0x4202C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4202C4u;
        // 0x4202c8: 0x8e020188  lw          $v0, 0x188($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4202CCu;
        goto label_4202cc;
    }
    ctx->pc = 0x4202C4u;
    {
        const bool branch_taken_0x4202c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4202c4) {
            ctx->pc = 0x4202C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4202C4u;
            // 0x4202c8: 0x8e020188  lw          $v0, 0x188($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x420530u;
            goto label_420530;
        }
    }
    ctx->pc = 0x4202CCu;
label_4202cc:
    // 0x4202cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4202ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4202d0:
    // 0x4202d0: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x4202d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_4202d4:
    // 0x4202d4: 0x8e040190  lw          $a0, 0x190($s0)
    ctx->pc = 0x4202d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
label_4202d8:
    // 0x4202d8: 0x24a5b5c0  addiu       $a1, $a1, -0x4A40
    ctx->pc = 0x4202d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948288));
label_4202dc:
    // 0x4202dc: 0xae020184  sw          $v0, 0x184($s0)
    ctx->pc = 0x4202dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 2));
label_4202e0:
    // 0x4202e0: 0x1000001b  b           . + 4 + (0x1B << 2)
label_4202e4:
    if (ctx->pc == 0x4202E4u) {
        ctx->pc = 0x4202E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4202E0u;
        // 0x4202e4: 0x240602a9  addiu       $a2, $zero, 0x2A9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 681));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4202E8u;
        goto label_4202e8;
    }
    ctx->pc = 0x4202E0u;
    {
        const bool branch_taken_0x4202e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4202E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4202E0u;
        // 0x4202e4: 0x240602a9  addiu       $a2, $zero, 0x2A9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 681));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4202e0) {
            ctx->pc = 0x420350u;
            goto label_420350;
        }
    }
    ctx->pc = 0x4202E8u;
label_4202e8:
    // 0x4202e8: 0x26040148  addiu       $a0, $s0, 0x148
    ctx->pc = 0x4202e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 328));
label_4202ec:
    // 0x4202ec: 0xc052d32  jal         func_14B4C8
label_4202f0:
    if (ctx->pc == 0x4202F0u) {
        ctx->pc = 0x4202F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4202ECu;
        // 0x4202f0: 0x26050180  addiu       $a1, $s0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4202F4u;
        goto label_4202f4;
    }
    ctx->pc = 0x4202ECu;
    SET_GPR_U32(ctx, 31, 0x4202F4u);
    ctx->pc = 0x4202F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4202ECu;
    // 0x4202f0: 0x26050180  addiu       $a1, $s0, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B4C8u, 0x4202ECu, 0x4202F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4202F4u;
label_4202f4:
    // 0x4202f4: 0x50400098  beql        $v0, $zero, . + 4 + (0x98 << 2)
label_4202f8:
    if (ctx->pc == 0x4202F8u) {
        ctx->pc = 0x4202F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4202F4u;
        // 0x4202f8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4202FCu;
        goto label_4202fc;
    }
    ctx->pc = 0x4202F4u;
    {
        const bool branch_taken_0x4202f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4202f4) {
            ctx->pc = 0x4202F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4202F4u;
            // 0x4202f8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x420558u;
            goto label_420558;
        }
    }
    ctx->pc = 0x4202FCu;
label_4202fc:
    // 0x4202fc: 0x8e060180  lw          $a2, 0x180($s0)
    ctx->pc = 0x4202fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
label_420300:
    // 0x420300: 0x14c00008  bnez        $a2, . + 4 + (0x8 << 2)
label_420304:
    if (ctx->pc == 0x420304u) {
        ctx->pc = 0x420304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420300u;
        // 0x420304: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420308u;
        goto label_420308;
    }
    ctx->pc = 0x420300u;
    {
        const bool branch_taken_0x420300 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x420304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420300u;
        // 0x420304: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420300) {
            ctx->pc = 0x420324u;
            goto label_420324;
        }
    }
    ctx->pc = 0x420308u;
label_420308:
    // 0x420308: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x420308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42030c:
    // 0x42030c: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x42030cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_420310:
    // 0x420310: 0x8e040190  lw          $a0, 0x190($s0)
    ctx->pc = 0x420310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
label_420314:
    // 0x420314: 0x24a5b5c0  addiu       $a1, $a1, -0x4A40
    ctx->pc = 0x420314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948288));
label_420318:
    // 0x420318: 0xae020184  sw          $v0, 0x184($s0)
    ctx->pc = 0x420318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 2));
label_42031c:
    // 0x42031c: 0x1000000c  b           . + 4 + (0xC << 2)
label_420320:
    if (ctx->pc == 0x420320u) {
        ctx->pc = 0x420320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42031Cu;
        // 0x420320: 0x240602bd  addiu       $a2, $zero, 0x2BD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 701));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420324u;
        goto label_420324;
    }
    ctx->pc = 0x42031Cu;
    {
        const bool branch_taken_0x42031c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x420320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42031Cu;
        // 0x420320: 0x240602bd  addiu       $a2, $zero, 0x2BD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 701));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42031c) {
            ctx->pc = 0x420350u;
            goto label_420350;
        }
    }
    ctx->pc = 0x420324u;
label_420324:
    // 0x420324: 0x8e040190  lw          $a0, 0x190($s0)
    ctx->pc = 0x420324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
label_420328:
    // 0x420328: 0xc052dfe  jal         func_14B7F8
label_42032c:
    if (ctx->pc == 0x42032Cu) {
        ctx->pc = 0x42032Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420328u;
        // 0x42032c: 0x34a53518  ori         $a1, $a1, 0x3518 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)13592);
        ctx->in_delay_slot = false;
        ctx->pc = 0x420330u;
        goto label_420330;
    }
    ctx->pc = 0x420328u;
    SET_GPR_U32(ctx, 31, 0x420330u);
    ctx->pc = 0x42032Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420328u;
    // 0x42032c: 0x34a53518  ori         $a1, $a1, 0x3518 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)13592);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B7F8u, 0x420328u, 0x420330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420330u;
label_420330:
    // 0x420330: 0x5440007f  bnel        $v0, $zero, . + 4 + (0x7F << 2)
label_420334:
    if (ctx->pc == 0x420334u) {
        ctx->pc = 0x420334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420330u;
        // 0x420334: 0x8e020188  lw          $v0, 0x188($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420338u;
        goto label_420338;
    }
    ctx->pc = 0x420330u;
    {
        const bool branch_taken_0x420330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x420330) {
            ctx->pc = 0x420334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x420330u;
            // 0x420334: 0x8e020188  lw          $v0, 0x188($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x420530u;
            goto label_420530;
        }
    }
    ctx->pc = 0x420338u;
label_420338:
    // 0x420338: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x420338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42033c:
    // 0x42033c: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x42033cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_420340:
    // 0x420340: 0x8e040190  lw          $a0, 0x190($s0)
    ctx->pc = 0x420340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
label_420344:
    // 0x420344: 0x24a5b5c0  addiu       $a1, $a1, -0x4A40
    ctx->pc = 0x420344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948288));
label_420348:
    // 0x420348: 0xae020184  sw          $v0, 0x184($s0)
    ctx->pc = 0x420348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 2));
label_42034c:
    // 0x42034c: 0x240602ca  addiu       $a2, $zero, 0x2CA
    ctx->pc = 0x42034cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 714));
label_420350:
    // 0x420350: 0xc136ac2  jal         func_4DAB08
label_420354:
    if (ctx->pc == 0x420354u) {
        ctx->pc = 0x420358u;
        goto label_420358;
    }
    ctx->pc = 0x420350u;
    SET_GPR_U32(ctx, 31, 0x420358u);
    ctx->pc = 0x4DAB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB08u, 0x420350u, 0x420358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420358u;
label_420358:
    // 0x420358: 0x1000007e  b           . + 4 + (0x7E << 2)
label_42035c:
    if (ctx->pc == 0x42035Cu) {
        ctx->pc = 0x42035Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420358u;
        // 0x42035c: 0xae000190  sw          $zero, 0x190($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420360u;
        goto label_420360;
    }
    ctx->pc = 0x420358u;
    {
        const bool branch_taken_0x420358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42035Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420358u;
        // 0x42035c: 0xae000190  sw          $zero, 0x190($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420358) {
            ctx->pc = 0x420554u;
            goto label_420554;
        }
    }
    ctx->pc = 0x420360u;
label_420360:
    // 0x420360: 0xc052e74  jal         func_14B9D0
label_420364:
    if (ctx->pc == 0x420364u) {
        ctx->pc = 0x420364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420360u;
        // 0x420364: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420368u;
        goto label_420368;
    }
    ctx->pc = 0x420360u;
    SET_GPR_U32(ctx, 31, 0x420368u);
    ctx->pc = 0x420364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420360u;
    // 0x420364: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B9D0u, 0x420360u, 0x420368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420368u;
label_420368:
    // 0x420368: 0x1040007a  beqz        $v0, . + 4 + (0x7A << 2)
label_42036c:
    if (ctx->pc == 0x42036Cu) {
        ctx->pc = 0x42036Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420368u;
        // 0x42036c: 0x3c050059  lui         $a1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420370u;
        goto label_420370;
    }
    ctx->pc = 0x420368u;
    {
        const bool branch_taken_0x420368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42036Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420368u;
        // 0x42036c: 0x3c050059  lui         $a1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420368) {
            ctx->pc = 0x420554u;
            goto label_420554;
        }
    }
    ctx->pc = 0x420370u;
label_420370:
    // 0x420370: 0x8e040190  lw          $a0, 0x190($s0)
    ctx->pc = 0x420370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
label_420374:
    // 0x420374: 0x24a5b5c0  addiu       $a1, $a1, -0x4A40
    ctx->pc = 0x420374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948288));
label_420378:
    // 0x420378: 0xc136ac2  jal         func_4DAB08
label_42037c:
    if (ctx->pc == 0x42037Cu) {
        ctx->pc = 0x42037Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420378u;
        // 0x42037c: 0x240602dd  addiu       $a2, $zero, 0x2DD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 733));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420380u;
        goto label_420380;
    }
    ctx->pc = 0x420378u;
    SET_GPR_U32(ctx, 31, 0x420380u);
    ctx->pc = 0x42037Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420378u;
    // 0x42037c: 0x240602dd  addiu       $a2, $zero, 0x2DD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 733));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB08u, 0x420378u, 0x420380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420380u;
label_420380:
    // 0x420380: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x420380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_420384:
    // 0x420384: 0x460005f  bltz        $v1, . + 4 + (0x5F << 2)
label_420388:
    if (ctx->pc == 0x420388u) {
        ctx->pc = 0x420388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420384u;
        // 0x420388: 0xae000190  sw          $zero, 0x190($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42038Cu;
        goto label_42038c;
    }
    ctx->pc = 0x420384u;
    {
        const bool branch_taken_0x420384 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x420388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420384u;
        // 0x420388: 0xae000190  sw          $zero, 0x190($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420384) {
            ctx->pc = 0x420504u;
            goto label_420504;
        }
    }
    ctx->pc = 0x42038Cu;
label_42038c:
    // 0x42038c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x42038cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_420390:
    // 0x420390: 0x34423517  ori         $v0, $v0, 0x3517
    ctx->pc = 0x420390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13591);
label_420394:
    // 0x420394: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x420394u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_420398:
    // 0x420398: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
label_42039c:
    if (ctx->pc == 0x42039Cu) {
        ctx->pc = 0x4203A0u;
        goto label_4203a0;
    }
    ctx->pc = 0x420398u;
    {
        const bool branch_taken_0x420398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x420398) {
            ctx->pc = 0x420504u;
            goto label_420504;
        }
    }
    ctx->pc = 0x4203A0u;
label_4203a0:
    // 0x4203a0: 0xc052dac  jal         func_14B6B0
label_4203a4:
    if (ctx->pc == 0x4203A4u) {
        ctx->pc = 0x4203A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4203A0u;
        // 0x4203a4: 0x8e040180  lw          $a0, 0x180($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4203A8u;
        goto label_4203a8;
    }
    ctx->pc = 0x4203A0u;
    SET_GPR_U32(ctx, 31, 0x4203A8u);
    ctx->pc = 0x4203A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4203A0u;
    // 0x4203a4: 0x8e040180  lw          $a0, 0x180($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6B0u, 0x4203A0u, 0x4203A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4203A8u;
label_4203a8:
    // 0x4203a8: 0x54400061  bnel        $v0, $zero, . + 4 + (0x61 << 2)
label_4203ac:
    if (ctx->pc == 0x4203ACu) {
        ctx->pc = 0x4203ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4203A8u;
        // 0x4203ac: 0x8e020188  lw          $v0, 0x188($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4203B0u;
        goto label_4203b0;
    }
    ctx->pc = 0x4203A8u;
    {
        const bool branch_taken_0x4203a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4203a8) {
            ctx->pc = 0x4203ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4203A8u;
            // 0x4203ac: 0x8e020188  lw          $v0, 0x188($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x420530u;
            goto label_420530;
        }
    }
    ctx->pc = 0x4203B0u;
label_4203b0:
    // 0x4203b0: 0x10000067  b           . + 4 + (0x67 << 2)
label_4203b4:
    if (ctx->pc == 0x4203B4u) {
        ctx->pc = 0x4203B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4203B0u;
        // 0x4203b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4203B8u;
        goto label_4203b8;
    }
    ctx->pc = 0x4203B0u;
    {
        const bool branch_taken_0x4203b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4203B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4203B0u;
        // 0x4203b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4203b0) {
            ctx->pc = 0x420550u;
            goto label_420550;
        }
    }
    ctx->pc = 0x4203B8u;
label_4203b8:
    // 0x4203b8: 0xc052e74  jal         func_14B9D0
label_4203bc:
    if (ctx->pc == 0x4203BCu) {
        ctx->pc = 0x4203BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4203B8u;
        // 0x4203bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4203C0u;
        goto label_4203c0;
    }
    ctx->pc = 0x4203B8u;
    SET_GPR_U32(ctx, 31, 0x4203C0u);
    ctx->pc = 0x4203BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4203B8u;
    // 0x4203bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B9D0u, 0x4203B8u, 0x4203C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4203C0u;
label_4203c0:
    // 0x4203c0: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
label_4203c4:
    if (ctx->pc == 0x4203C4u) {
        ctx->pc = 0x4203C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4203C0u;
        // 0x4203c4: 0x3c050059  lui         $a1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4203C8u;
        goto label_4203c8;
    }
    ctx->pc = 0x4203C0u;
    {
        const bool branch_taken_0x4203c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4203C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4203C0u;
        // 0x4203c4: 0x3c050059  lui         $a1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4203c0) {
            ctx->pc = 0x420554u;
            goto label_420554;
        }
    }
    ctx->pc = 0x4203C8u;
label_4203c8:
    // 0x4203c8: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x4203c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
label_4203cc:
    // 0x4203cc: 0xae000180  sw          $zero, 0x180($s0)
    ctx->pc = 0x4203ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 0));
label_4203d0:
    // 0x4203d0: 0x24a5b548  addiu       $a1, $a1, -0x4AB8
    ctx->pc = 0x4203d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948168));
label_4203d4:
    // 0x4203d4: 0x24c6b4f8  addiu       $a2, $a2, -0x4B08
    ctx->pc = 0x4203d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948088));
label_4203d8:
    // 0x4203d8: 0xc052cf4  jal         func_14B3D0
label_4203dc:
    if (ctx->pc == 0x4203DCu) {
        ctx->pc = 0x4203DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4203D8u;
        // 0x4203dc: 0x26040148  addiu       $a0, $s0, 0x148 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4203E0u;
        goto label_4203e0;
    }
    ctx->pc = 0x4203D8u;
    SET_GPR_U32(ctx, 31, 0x4203E0u);
    ctx->pc = 0x4203DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4203D8u;
    // 0x4203dc: 0x26040148  addiu       $a0, $s0, 0x148 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B3D0u, 0x4203D8u, 0x4203E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4203E0u;
label_4203e0:
    // 0x4203e0: 0x54400053  bnel        $v0, $zero, . + 4 + (0x53 << 2)
label_4203e4:
    if (ctx->pc == 0x4203E4u) {
        ctx->pc = 0x4203E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4203E0u;
        // 0x4203e4: 0x8e020188  lw          $v0, 0x188($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4203E8u;
        goto label_4203e8;
    }
    ctx->pc = 0x4203E0u;
    {
        const bool branch_taken_0x4203e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4203e0) {
            ctx->pc = 0x4203E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4203E0u;
            // 0x4203e4: 0x8e020188  lw          $v0, 0x188($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x420530u;
            goto label_420530;
        }
    }
    ctx->pc = 0x4203E8u;
label_4203e8:
    // 0x4203e8: 0x10000059  b           . + 4 + (0x59 << 2)
label_4203ec:
    if (ctx->pc == 0x4203ECu) {
        ctx->pc = 0x4203ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4203E8u;
        // 0x4203ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4203F0u;
        goto label_4203f0;
    }
    ctx->pc = 0x4203E8u;
    {
        const bool branch_taken_0x4203e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4203ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4203E8u;
        // 0x4203ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4203e8) {
            ctx->pc = 0x420550u;
            goto label_420550;
        }
    }
    ctx->pc = 0x4203F0u;
label_4203f0:
    // 0x4203f0: 0x26040148  addiu       $a0, $s0, 0x148
    ctx->pc = 0x4203f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 328));
label_4203f4:
    // 0x4203f4: 0xc052d32  jal         func_14B4C8
label_4203f8:
    if (ctx->pc == 0x4203F8u) {
        ctx->pc = 0x4203F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4203F4u;
        // 0x4203f8: 0x26050180  addiu       $a1, $s0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4203FCu;
        goto label_4203fc;
    }
    ctx->pc = 0x4203F4u;
    SET_GPR_U32(ctx, 31, 0x4203FCu);
    ctx->pc = 0x4203F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4203F4u;
    // 0x4203f8: 0x26050180  addiu       $a1, $s0, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B4C8u, 0x4203F4u, 0x4203FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4203FCu;
label_4203fc:
    // 0x4203fc: 0x50400056  beql        $v0, $zero, . + 4 + (0x56 << 2)
label_420400:
    if (ctx->pc == 0x420400u) {
        ctx->pc = 0x420400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4203FCu;
        // 0x420400: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420404u;
        goto label_420404;
    }
    ctx->pc = 0x4203FCu;
    {
        const bool branch_taken_0x4203fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4203fc) {
            ctx->pc = 0x420400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4203FCu;
            // 0x420400: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x420558u;
            goto label_420558;
        }
    }
    ctx->pc = 0x420404u;
label_420404:
    // 0x420404: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x420404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
label_420408:
    // 0x420408: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_42040c:
    if (ctx->pc == 0x42040Cu) {
        ctx->pc = 0x42040Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420408u;
        // 0x42040c: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420410u;
        goto label_420410;
    }
    ctx->pc = 0x420408u;
    {
        const bool branch_taken_0x420408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42040Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420408u;
        // 0x42040c: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420408) {
            ctx->pc = 0x420418u;
            goto label_420418;
        }
    }
    ctx->pc = 0x420410u;
label_420410:
    // 0x420410: 0x1000004f  b           . + 4 + (0x4F << 2)
label_420414:
    if (ctx->pc == 0x420414u) {
        ctx->pc = 0x420414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420410u;
        // 0x420414: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420418u;
        goto label_420418;
    }
    ctx->pc = 0x420410u;
    {
        const bool branch_taken_0x420410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x420414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420410u;
        // 0x420414: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420410) {
            ctx->pc = 0x420550u;
            goto label_420550;
        }
    }
    ctx->pc = 0x420418u;
label_420418:
    // 0x420418: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x420418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_42041c:
    // 0x42041c: 0x8e4b27e4  lw          $t3, 0x27E4($s2)
    ctx->pc = 0x42041cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_420420:
    // 0x420420: 0x2451b5c0  addiu       $s1, $v0, -0x4A40
    ctx->pc = 0x420420u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948288));
label_420424:
    // 0x420424: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x420424u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_420428:
    // 0x420428: 0x240603c4  addiu       $a2, $zero, 0x3C4
    ctx->pc = 0x420428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
label_42042c:
    // 0x42042c: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x42042cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_420430:
    // 0x420430: 0x24a5b5b8  addiu       $a1, $a1, -0x4A48
    ctx->pc = 0x420430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948280));
label_420434:
    // 0x420434: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x420434u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_420438:
    // 0x420438: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x420438u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42043c:
    // 0x42043c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x42043cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_420440:
    // 0x420440: 0x24090333  addiu       $t1, $zero, 0x333
    ctx->pc = 0x420440u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 819));
label_420444:
    // 0x420444: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x420444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_420448:
    // 0x420448: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x420448u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42044c:
    // 0x42044c: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x42044cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_420450:
    // 0x420450: 0x40f809  jalr        $v0
label_420454:
    if (ctx->pc == 0x420454u) {
        ctx->pc = 0x420454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420450u;
        // 0x420454: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420458u;
        goto label_420458;
    }
    ctx->pc = 0x420450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x420458u);
        ctx->pc = 0x420454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420450u;
        // 0x420454: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420450u, 0x420458u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x420458u;
label_420458:
    // 0x420458: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x420458u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_42045c:
    // 0x42045c: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x42045cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_420460:
    // 0x420460: 0x2484b5f0  addiu       $a0, $a0, -0x4A10
    ctx->pc = 0x420460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948336));
label_420464:
    // 0x420464: 0x24a5b560  addiu       $a1, $a1, -0x4AA0
    ctx->pc = 0x420464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948192));
label_420468:
    // 0x420468: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x420468u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42046c:
    // 0x42046c: 0xc052b64  jal         func_14AD90
label_420470:
    if (ctx->pc == 0x420470u) {
        ctx->pc = 0x420470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42046Cu;
        // 0x420470: 0xae020190  sw          $v0, 0x190($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420474u;
        goto label_420474;
    }
    ctx->pc = 0x42046Cu;
    SET_GPR_U32(ctx, 31, 0x420474u);
    ctx->pc = 0x420470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42046Cu;
    // 0x420470: 0xae020190  sw          $v0, 0x190($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AD90u, 0x42046Cu, 0x420474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420474u;
label_420474:
    // 0x420474: 0x8e040190  lw          $a0, 0x190($s0)
    ctx->pc = 0x420474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
label_420478:
    // 0x420478: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x420478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42047c:
    // 0x42047c: 0xc052dfe  jal         func_14B7F8
label_420480:
    if (ctx->pc == 0x420480u) {
        ctx->pc = 0x420480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42047Cu;
        // 0x420480: 0x8e060180  lw          $a2, 0x180($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420484u;
        goto label_420484;
    }
    ctx->pc = 0x42047Cu;
    SET_GPR_U32(ctx, 31, 0x420484u);
    ctx->pc = 0x420480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42047Cu;
    // 0x420480: 0x8e060180  lw          $a2, 0x180($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B7F8u, 0x42047Cu, 0x420484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420484u;
label_420484:
    // 0x420484: 0x5440002a  bnel        $v0, $zero, . + 4 + (0x2A << 2)
label_420488:
    if (ctx->pc == 0x420488u) {
        ctx->pc = 0x420488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420484u;
        // 0x420488: 0x8e020188  lw          $v0, 0x188($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42048Cu;
        goto label_42048c;
    }
    ctx->pc = 0x420484u;
    {
        const bool branch_taken_0x420484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x420484) {
            ctx->pc = 0x420488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x420484u;
            // 0x420488: 0x8e020188  lw          $v0, 0x188($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x420530u;
            goto label_420530;
        }
    }
    ctx->pc = 0x42048Cu;
label_42048c:
    // 0x42048c: 0x8e4827e4  lw          $t0, 0x27E4($s2)
    ctx->pc = 0x42048cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_420490:
    // 0x420490: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x420490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_420494:
    // 0x420494: 0xae020184  sw          $v0, 0x184($s0)
    ctx->pc = 0x420494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 2));
label_420498:
    // 0x420498: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x420498u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42049c:
    // 0x42049c: 0x8e050190  lw          $a1, 0x190($s0)
    ctx->pc = 0x42049cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
label_4204a0:
    // 0x4204a0: 0x2407033c  addiu       $a3, $zero, 0x33C
    ctx->pc = 0x4204a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 828));
label_4204a4:
    // 0x4204a4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4204a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4204a8:
    // 0x4204a8: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4204a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4204ac:
    // 0x4204ac: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4204acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4204b0:
    // 0x4204b0: 0x60f809  jalr        $v1
label_4204b4:
    if (ctx->pc == 0x4204B4u) {
        ctx->pc = 0x4204B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4204B0u;
        // 0x4204b4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4204B8u;
        goto label_4204b8;
    }
    ctx->pc = 0x4204B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4204B8u);
        ctx->pc = 0x4204B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4204B0u;
        // 0x4204b4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4204B0u, 0x4204B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4204B8u;
label_4204b8:
    // 0x4204b8: 0x10000026  b           . + 4 + (0x26 << 2)
label_4204bc:
    if (ctx->pc == 0x4204BCu) {
        ctx->pc = 0x4204BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4204B8u;
        // 0x4204bc: 0xae000190  sw          $zero, 0x190($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4204C0u;
        goto label_4204c0;
    }
    ctx->pc = 0x4204B8u;
    {
        const bool branch_taken_0x4204b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4204BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4204B8u;
        // 0x4204bc: 0xae000190  sw          $zero, 0x190($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4204b8) {
            ctx->pc = 0x420554u;
            goto label_420554;
        }
    }
    ctx->pc = 0x4204C0u;
label_4204c0:
    // 0x4204c0: 0xc052e74  jal         func_14B9D0
label_4204c4:
    if (ctx->pc == 0x4204C4u) {
        ctx->pc = 0x4204C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4204C0u;
        // 0x4204c4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4204C8u;
        goto label_4204c8;
    }
    ctx->pc = 0x4204C0u;
    SET_GPR_U32(ctx, 31, 0x4204C8u);
    ctx->pc = 0x4204C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4204C0u;
    // 0x4204c4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B9D0u, 0x4204C0u, 0x4204C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4204C8u;
label_4204c8:
    // 0x4204c8: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_4204cc:
    if (ctx->pc == 0x4204CCu) {
        ctx->pc = 0x4204CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4204C8u;
        // 0x4204cc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4204D0u;
        goto label_4204d0;
    }
    ctx->pc = 0x4204C8u;
    {
        const bool branch_taken_0x4204c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4204CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4204C8u;
        // 0x4204cc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4204c8) {
            ctx->pc = 0x420554u;
            goto label_420554;
        }
    }
    ctx->pc = 0x4204D0u;
label_4204d0:
    // 0x4204d0: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x4204d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
label_4204d4:
    // 0x4204d4: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4204d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4204d8:
    // 0x4204d8: 0x24c6b5c0  addiu       $a2, $a2, -0x4A40
    ctx->pc = 0x4204d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948288));
label_4204dc:
    // 0x4204dc: 0x8e050190  lw          $a1, 0x190($s0)
    ctx->pc = 0x4204dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
label_4204e0:
    // 0x4204e0: 0x2407034f  addiu       $a3, $zero, 0x34F
    ctx->pc = 0x4204e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 847));
label_4204e4:
    // 0x4204e4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4204e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4204e8:
    // 0x4204e8: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4204e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4204ec:
    // 0x4204ec: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4204ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4204f0:
    // 0x4204f0: 0x60f809  jalr        $v1
label_4204f4:
    if (ctx->pc == 0x4204F4u) {
        ctx->pc = 0x4204F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4204F0u;
        // 0x4204f4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4204F8u;
        goto label_4204f8;
    }
    ctx->pc = 0x4204F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4204F8u);
        ctx->pc = 0x4204F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4204F0u;
        // 0x4204f4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4204F0u, 0x4204F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4204F8u;
label_4204f8:
    // 0x4204f8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4204f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4204fc:
    // 0x4204fc: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
label_420500:
    if (ctx->pc == 0x420500u) {
        ctx->pc = 0x420500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4204FCu;
        // 0x420500: 0xae000190  sw          $zero, 0x190($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420504u;
        goto label_420504;
    }
    ctx->pc = 0x4204FCu;
    {
        const bool branch_taken_0x4204fc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x420500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4204FCu;
        // 0x420500: 0xae000190  sw          $zero, 0x190($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4204fc) {
            ctx->pc = 0x420518u;
            goto label_420518;
        }
    }
    ctx->pc = 0x420504u;
label_420504:
    // 0x420504: 0xc0529fc  jal         func_14A7F0
label_420508:
    if (ctx->pc == 0x420508u) {
        ctx->pc = 0x420508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420504u;
        // 0x420508: 0x8e040180  lw          $a0, 0x180($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42050Cu;
        goto label_42050c;
    }
    ctx->pc = 0x420504u;
    SET_GPR_U32(ctx, 31, 0x42050Cu);
    ctx->pc = 0x420508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420504u;
    // 0x420508: 0x8e040180  lw          $a0, 0x180($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A7F0u, 0x420504u, 0x42050Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42050Cu;
label_42050c:
    // 0x42050c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x42050cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_420510:
    // 0x420510: 0x10000010  b           . + 4 + (0x10 << 2)
label_420514:
    if (ctx->pc == 0x420514u) {
        ctx->pc = 0x420514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420510u;
        // 0x420514: 0xae030184  sw          $v1, 0x184($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420518u;
        goto label_420518;
    }
    ctx->pc = 0x420510u;
    {
        const bool branch_taken_0x420510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x420514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420510u;
        // 0x420514: 0xae030184  sw          $v1, 0x184($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420510) {
            ctx->pc = 0x420554u;
            goto label_420554;
        }
    }
    ctx->pc = 0x420518u;
label_420518:
    // 0x420518: 0xc052dac  jal         func_14B6B0
label_42051c:
    if (ctx->pc == 0x42051Cu) {
        ctx->pc = 0x42051Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420518u;
        // 0x42051c: 0x8e040180  lw          $a0, 0x180($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420520u;
        goto label_420520;
    }
    ctx->pc = 0x420518u;
    SET_GPR_U32(ctx, 31, 0x420520u);
    ctx->pc = 0x42051Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420518u;
    // 0x42051c: 0x8e040180  lw          $a0, 0x180($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6B0u, 0x420518u, 0x420520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420520u;
label_420520:
    // 0x420520: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_420524:
    if (ctx->pc == 0x420524u) {
        ctx->pc = 0x420524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420520u;
        // 0x420524: 0x8e020188  lw          $v0, 0x188($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420528u;
        goto label_420528;
    }
    ctx->pc = 0x420520u;
    {
        const bool branch_taken_0x420520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x420520) {
            ctx->pc = 0x420524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x420520u;
            // 0x420524: 0x8e020188  lw          $v0, 0x188($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x420530u;
            goto label_420530;
        }
    }
    ctx->pc = 0x420528u;
label_420528:
    // 0x420528: 0x10000009  b           . + 4 + (0x9 << 2)
label_42052c:
    if (ctx->pc == 0x42052Cu) {
        ctx->pc = 0x42052Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420528u;
        // 0x42052c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420530u;
        goto label_420530;
    }
    ctx->pc = 0x420528u;
    {
        const bool branch_taken_0x420528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42052Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420528u;
        // 0x42052c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420528) {
            ctx->pc = 0x420550u;
            goto label_420550;
        }
    }
    ctx->pc = 0x420530u;
label_420530:
    // 0x420530: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x420530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_420534:
    // 0x420534: 0x10000007  b           . + 4 + (0x7 << 2)
label_420538:
    if (ctx->pc == 0x420538u) {
        ctx->pc = 0x420538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420534u;
        // 0x420538: 0xae020188  sw          $v0, 0x188($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42053Cu;
        goto label_42053c;
    }
    ctx->pc = 0x420534u;
    {
        const bool branch_taken_0x420534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x420538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420534u;
        // 0x420538: 0xae020188  sw          $v0, 0x188($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420534) {
            ctx->pc = 0x420554u;
            goto label_420554;
        }
    }
    ctx->pc = 0x42053Cu;
label_42053c:
    // 0x42053c: 0xc052e74  jal         func_14B9D0
label_420540:
    if (ctx->pc == 0x420540u) {
        ctx->pc = 0x420540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42053Cu;
        // 0x420540: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420544u;
        goto label_420544;
    }
    ctx->pc = 0x42053Cu;
    SET_GPR_U32(ctx, 31, 0x420544u);
    ctx->pc = 0x420540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42053Cu;
    // 0x420540: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B9D0u, 0x42053Cu, 0x420544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420544u;
label_420544:
    // 0x420544: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_420548:
    if (ctx->pc == 0x420548u) {
        ctx->pc = 0x420548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420544u;
        // 0x420548: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42054Cu;
        goto label_42054c;
    }
    ctx->pc = 0x420544u;
    {
        const bool branch_taken_0x420544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x420548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420544u;
        // 0x420548: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420544) {
            ctx->pc = 0x420554u;
            goto label_420554;
        }
    }
    ctx->pc = 0x42054Cu;
label_42054c:
    // 0x42054c: 0xae02018c  sw          $v0, 0x18C($s0)
    ctx->pc = 0x42054cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 2));
label_420550:
    // 0x420550: 0xae020184  sw          $v0, 0x184($s0)
    ctx->pc = 0x420550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 2));
label_420554:
    // 0x420554: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x420554u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_420558:
    // 0x420558: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x420558u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_42055c:
    // 0x42055c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x42055cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_420560:
    // 0x420560: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x420560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_420564:
    // 0x420564: 0x3e00008  jr          $ra
label_420568:
    if (ctx->pc == 0x420568u) {
        ctx->pc = 0x420568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420564u;
        // 0x420568: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42056Cu;
        goto label_42056c;
    }
    ctx->pc = 0x420564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x420568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420564u;
        // 0x420568: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42056Cu;
label_42056c:
    // 0x42056c: 0x0  nop
    ctx->pc = 0x42056cu;
    // NOP
    ctx->pc = 0x420570u;
}
