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

// Function: sub_002BE818
// Address: 0x2be818 - 0x2bec58
void sub_002BE818_0x2be818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BE818_0x2be818");
#endif

    switch (ctx->pc) {
        case 0x2be818u: goto label_2be818;
        case 0x2be81cu: goto label_2be81c;
        case 0x2be820u: goto label_2be820;
        case 0x2be824u: goto label_2be824;
        case 0x2be828u: goto label_2be828;
        case 0x2be82cu: goto label_2be82c;
        case 0x2be830u: goto label_2be830;
        case 0x2be834u: goto label_2be834;
        case 0x2be838u: goto label_2be838;
        case 0x2be83cu: goto label_2be83c;
        case 0x2be840u: goto label_2be840;
        case 0x2be844u: goto label_2be844;
        case 0x2be848u: goto label_2be848;
        case 0x2be84cu: goto label_2be84c;
        case 0x2be850u: goto label_2be850;
        case 0x2be854u: goto label_2be854;
        case 0x2be858u: goto label_2be858;
        case 0x2be85cu: goto label_2be85c;
        case 0x2be860u: goto label_2be860;
        case 0x2be864u: goto label_2be864;
        case 0x2be868u: goto label_2be868;
        case 0x2be86cu: goto label_2be86c;
        case 0x2be870u: goto label_2be870;
        case 0x2be874u: goto label_2be874;
        case 0x2be878u: goto label_2be878;
        case 0x2be87cu: goto label_2be87c;
        case 0x2be880u: goto label_2be880;
        case 0x2be884u: goto label_2be884;
        case 0x2be888u: goto label_2be888;
        case 0x2be88cu: goto label_2be88c;
        case 0x2be890u: goto label_2be890;
        case 0x2be894u: goto label_2be894;
        case 0x2be898u: goto label_2be898;
        case 0x2be89cu: goto label_2be89c;
        case 0x2be8a0u: goto label_2be8a0;
        case 0x2be8a4u: goto label_2be8a4;
        case 0x2be8a8u: goto label_2be8a8;
        case 0x2be8acu: goto label_2be8ac;
        case 0x2be8b0u: goto label_2be8b0;
        case 0x2be8b4u: goto label_2be8b4;
        case 0x2be8b8u: goto label_2be8b8;
        case 0x2be8bcu: goto label_2be8bc;
        case 0x2be8c0u: goto label_2be8c0;
        case 0x2be8c4u: goto label_2be8c4;
        case 0x2be8c8u: goto label_2be8c8;
        case 0x2be8ccu: goto label_2be8cc;
        case 0x2be8d0u: goto label_2be8d0;
        case 0x2be8d4u: goto label_2be8d4;
        case 0x2be8d8u: goto label_2be8d8;
        case 0x2be8dcu: goto label_2be8dc;
        case 0x2be8e0u: goto label_2be8e0;
        case 0x2be8e4u: goto label_2be8e4;
        case 0x2be8e8u: goto label_2be8e8;
        case 0x2be8ecu: goto label_2be8ec;
        case 0x2be8f0u: goto label_2be8f0;
        case 0x2be8f4u: goto label_2be8f4;
        case 0x2be8f8u: goto label_2be8f8;
        case 0x2be8fcu: goto label_2be8fc;
        case 0x2be900u: goto label_2be900;
        case 0x2be904u: goto label_2be904;
        case 0x2be908u: goto label_2be908;
        case 0x2be90cu: goto label_2be90c;
        case 0x2be910u: goto label_2be910;
        case 0x2be914u: goto label_2be914;
        case 0x2be918u: goto label_2be918;
        case 0x2be91cu: goto label_2be91c;
        case 0x2be920u: goto label_2be920;
        case 0x2be924u: goto label_2be924;
        case 0x2be928u: goto label_2be928;
        case 0x2be92cu: goto label_2be92c;
        case 0x2be930u: goto label_2be930;
        case 0x2be934u: goto label_2be934;
        case 0x2be938u: goto label_2be938;
        case 0x2be93cu: goto label_2be93c;
        case 0x2be940u: goto label_2be940;
        case 0x2be944u: goto label_2be944;
        case 0x2be948u: goto label_2be948;
        case 0x2be94cu: goto label_2be94c;
        case 0x2be950u: goto label_2be950;
        case 0x2be954u: goto label_2be954;
        case 0x2be958u: goto label_2be958;
        case 0x2be95cu: goto label_2be95c;
        case 0x2be960u: goto label_2be960;
        case 0x2be964u: goto label_2be964;
        case 0x2be968u: goto label_2be968;
        case 0x2be96cu: goto label_2be96c;
        case 0x2be970u: goto label_2be970;
        case 0x2be974u: goto label_2be974;
        case 0x2be978u: goto label_2be978;
        case 0x2be97cu: goto label_2be97c;
        case 0x2be980u: goto label_2be980;
        case 0x2be984u: goto label_2be984;
        case 0x2be988u: goto label_2be988;
        case 0x2be98cu: goto label_2be98c;
        case 0x2be990u: goto label_2be990;
        case 0x2be994u: goto label_2be994;
        case 0x2be998u: goto label_2be998;
        case 0x2be99cu: goto label_2be99c;
        case 0x2be9a0u: goto label_2be9a0;
        case 0x2be9a4u: goto label_2be9a4;
        case 0x2be9a8u: goto label_2be9a8;
        case 0x2be9acu: goto label_2be9ac;
        case 0x2be9b0u: goto label_2be9b0;
        case 0x2be9b4u: goto label_2be9b4;
        case 0x2be9b8u: goto label_2be9b8;
        case 0x2be9bcu: goto label_2be9bc;
        case 0x2be9c0u: goto label_2be9c0;
        case 0x2be9c4u: goto label_2be9c4;
        case 0x2be9c8u: goto label_2be9c8;
        case 0x2be9ccu: goto label_2be9cc;
        case 0x2be9d0u: goto label_2be9d0;
        case 0x2be9d4u: goto label_2be9d4;
        case 0x2be9d8u: goto label_2be9d8;
        case 0x2be9dcu: goto label_2be9dc;
        case 0x2be9e0u: goto label_2be9e0;
        case 0x2be9e4u: goto label_2be9e4;
        case 0x2be9e8u: goto label_2be9e8;
        case 0x2be9ecu: goto label_2be9ec;
        case 0x2be9f0u: goto label_2be9f0;
        case 0x2be9f4u: goto label_2be9f4;
        case 0x2be9f8u: goto label_2be9f8;
        case 0x2be9fcu: goto label_2be9fc;
        case 0x2bea00u: goto label_2bea00;
        case 0x2bea04u: goto label_2bea04;
        case 0x2bea08u: goto label_2bea08;
        case 0x2bea0cu: goto label_2bea0c;
        case 0x2bea10u: goto label_2bea10;
        case 0x2bea14u: goto label_2bea14;
        case 0x2bea18u: goto label_2bea18;
        case 0x2bea1cu: goto label_2bea1c;
        case 0x2bea20u: goto label_2bea20;
        case 0x2bea24u: goto label_2bea24;
        case 0x2bea28u: goto label_2bea28;
        case 0x2bea2cu: goto label_2bea2c;
        case 0x2bea30u: goto label_2bea30;
        case 0x2bea34u: goto label_2bea34;
        case 0x2bea38u: goto label_2bea38;
        case 0x2bea3cu: goto label_2bea3c;
        case 0x2bea40u: goto label_2bea40;
        case 0x2bea44u: goto label_2bea44;
        case 0x2bea48u: goto label_2bea48;
        case 0x2bea4cu: goto label_2bea4c;
        case 0x2bea50u: goto label_2bea50;
        case 0x2bea54u: goto label_2bea54;
        case 0x2bea58u: goto label_2bea58;
        case 0x2bea5cu: goto label_2bea5c;
        case 0x2bea60u: goto label_2bea60;
        case 0x2bea64u: goto label_2bea64;
        case 0x2bea68u: goto label_2bea68;
        case 0x2bea6cu: goto label_2bea6c;
        case 0x2bea70u: goto label_2bea70;
        case 0x2bea74u: goto label_2bea74;
        case 0x2bea78u: goto label_2bea78;
        case 0x2bea7cu: goto label_2bea7c;
        case 0x2bea80u: goto label_2bea80;
        case 0x2bea84u: goto label_2bea84;
        case 0x2bea88u: goto label_2bea88;
        case 0x2bea8cu: goto label_2bea8c;
        case 0x2bea90u: goto label_2bea90;
        case 0x2bea94u: goto label_2bea94;
        case 0x2bea98u: goto label_2bea98;
        case 0x2bea9cu: goto label_2bea9c;
        case 0x2beaa0u: goto label_2beaa0;
        case 0x2beaa4u: goto label_2beaa4;
        case 0x2beaa8u: goto label_2beaa8;
        case 0x2beaacu: goto label_2beaac;
        case 0x2beab0u: goto label_2beab0;
        case 0x2beab4u: goto label_2beab4;
        case 0x2beab8u: goto label_2beab8;
        case 0x2beabcu: goto label_2beabc;
        case 0x2beac0u: goto label_2beac0;
        case 0x2beac4u: goto label_2beac4;
        case 0x2beac8u: goto label_2beac8;
        case 0x2beaccu: goto label_2beacc;
        case 0x2bead0u: goto label_2bead0;
        case 0x2bead4u: goto label_2bead4;
        case 0x2bead8u: goto label_2bead8;
        case 0x2beadcu: goto label_2beadc;
        case 0x2beae0u: goto label_2beae0;
        case 0x2beae4u: goto label_2beae4;
        case 0x2beae8u: goto label_2beae8;
        case 0x2beaecu: goto label_2beaec;
        case 0x2beaf0u: goto label_2beaf0;
        case 0x2beaf4u: goto label_2beaf4;
        case 0x2beaf8u: goto label_2beaf8;
        case 0x2beafcu: goto label_2beafc;
        case 0x2beb00u: goto label_2beb00;
        case 0x2beb04u: goto label_2beb04;
        case 0x2beb08u: goto label_2beb08;
        case 0x2beb0cu: goto label_2beb0c;
        case 0x2beb10u: goto label_2beb10;
        case 0x2beb14u: goto label_2beb14;
        case 0x2beb18u: goto label_2beb18;
        case 0x2beb1cu: goto label_2beb1c;
        case 0x2beb20u: goto label_2beb20;
        case 0x2beb24u: goto label_2beb24;
        case 0x2beb28u: goto label_2beb28;
        case 0x2beb2cu: goto label_2beb2c;
        case 0x2beb30u: goto label_2beb30;
        case 0x2beb34u: goto label_2beb34;
        case 0x2beb38u: goto label_2beb38;
        case 0x2beb3cu: goto label_2beb3c;
        case 0x2beb40u: goto label_2beb40;
        case 0x2beb44u: goto label_2beb44;
        case 0x2beb48u: goto label_2beb48;
        case 0x2beb4cu: goto label_2beb4c;
        case 0x2beb50u: goto label_2beb50;
        case 0x2beb54u: goto label_2beb54;
        case 0x2beb58u: goto label_2beb58;
        case 0x2beb5cu: goto label_2beb5c;
        case 0x2beb60u: goto label_2beb60;
        case 0x2beb64u: goto label_2beb64;
        case 0x2beb68u: goto label_2beb68;
        case 0x2beb6cu: goto label_2beb6c;
        case 0x2beb70u: goto label_2beb70;
        case 0x2beb74u: goto label_2beb74;
        case 0x2beb78u: goto label_2beb78;
        case 0x2beb7cu: goto label_2beb7c;
        case 0x2beb80u: goto label_2beb80;
        case 0x2beb84u: goto label_2beb84;
        case 0x2beb88u: goto label_2beb88;
        case 0x2beb8cu: goto label_2beb8c;
        case 0x2beb90u: goto label_2beb90;
        case 0x2beb94u: goto label_2beb94;
        case 0x2beb98u: goto label_2beb98;
        case 0x2beb9cu: goto label_2beb9c;
        case 0x2beba0u: goto label_2beba0;
        case 0x2beba4u: goto label_2beba4;
        case 0x2beba8u: goto label_2beba8;
        case 0x2bebacu: goto label_2bebac;
        case 0x2bebb0u: goto label_2bebb0;
        case 0x2bebb4u: goto label_2bebb4;
        case 0x2bebb8u: goto label_2bebb8;
        case 0x2bebbcu: goto label_2bebbc;
        case 0x2bebc0u: goto label_2bebc0;
        case 0x2bebc4u: goto label_2bebc4;
        case 0x2bebc8u: goto label_2bebc8;
        case 0x2bebccu: goto label_2bebcc;
        case 0x2bebd0u: goto label_2bebd0;
        case 0x2bebd4u: goto label_2bebd4;
        case 0x2bebd8u: goto label_2bebd8;
        case 0x2bebdcu: goto label_2bebdc;
        case 0x2bebe0u: goto label_2bebe0;
        case 0x2bebe4u: goto label_2bebe4;
        case 0x2bebe8u: goto label_2bebe8;
        case 0x2bebecu: goto label_2bebec;
        case 0x2bebf0u: goto label_2bebf0;
        case 0x2bebf4u: goto label_2bebf4;
        case 0x2bebf8u: goto label_2bebf8;
        case 0x2bebfcu: goto label_2bebfc;
        case 0x2bec00u: goto label_2bec00;
        case 0x2bec04u: goto label_2bec04;
        case 0x2bec08u: goto label_2bec08;
        case 0x2bec0cu: goto label_2bec0c;
        case 0x2bec10u: goto label_2bec10;
        case 0x2bec14u: goto label_2bec14;
        case 0x2bec18u: goto label_2bec18;
        case 0x2bec1cu: goto label_2bec1c;
        case 0x2bec20u: goto label_2bec20;
        case 0x2bec24u: goto label_2bec24;
        case 0x2bec28u: goto label_2bec28;
        case 0x2bec2cu: goto label_2bec2c;
        case 0x2bec30u: goto label_2bec30;
        case 0x2bec34u: goto label_2bec34;
        case 0x2bec38u: goto label_2bec38;
        case 0x2bec3cu: goto label_2bec3c;
        case 0x2bec40u: goto label_2bec40;
        case 0x2bec44u: goto label_2bec44;
        case 0x2bec48u: goto label_2bec48;
        case 0x2bec4cu: goto label_2bec4c;
        case 0x2bec50u: goto label_2bec50;
        case 0x2bec54u: goto label_2bec54;
        default: break;
    }

    ctx->pc = 0x2be818u;

label_2be818:
    // 0x2be818: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2be818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2be81c:
    // 0x2be81c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2be81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_2be820:
    // 0x2be820: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x2be820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_2be824:
    // 0x2be824: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2be824u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2be828:
    // 0x2be828: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2be828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_2be82c:
    // 0x2be82c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2be82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_2be830:
    // 0x2be830: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2be830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_2be834:
    // 0x2be834: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2be834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2be838:
    // 0x2be838: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2be838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2be83c:
    // 0x2be83c: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x2be83cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_2be840:
    // 0x2be840: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2be840u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_2be844:
    // 0x2be844: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2be844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2be848:
    // 0x2be848: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x2be848u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2be84c:
    // 0x2be84c: 0x1c6000f5  bgtz        $v1, . + 4 + (0xF5 << 2)
label_2be850:
    if (ctx->pc == 0x2BE850u) {
        ctx->pc = 0x2BE850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE84Cu;
        // 0x2be850: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE854u;
        goto label_2be854;
    }
    ctx->pc = 0x2BE84Cu;
    {
        const bool branch_taken_0x2be84c = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2BE850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE84Cu;
        // 0x2be850: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be84c) {
            ctx->pc = 0x2BEC24u;
            goto label_2bec24;
        }
    }
    ctx->pc = 0x2BE854u;
label_2be854:
    // 0x2be854: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2be854u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_2be858:
    // 0x2be858: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2be858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2be85c:
    // 0x2be85c: 0x34a5fbff  ori         $a1, $a1, 0xFBFF
    ctx->pc = 0x2be85cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64511);
label_2be860:
    // 0x2be860: 0xc0a7c8c  jal         func_29F230
label_2be864:
    if (ctx->pc == 0x2BE864u) {
        ctx->pc = 0x2BE864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE860u;
        // 0x2be864: 0x26330010  addiu       $s3, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE868u;
        goto label_2be868;
    }
    ctx->pc = 0x2BE860u;
    SET_GPR_U32(ctx, 31, 0x2BE868u);
    ctx->pc = 0x2BE864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE860u;
    // 0x2be864: 0x26330010  addiu       $s3, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F230u, 0x2BE860u, 0x2BE868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE868u;
label_2be868:
    // 0x2be868: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2be868u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2be86c:
    // 0x2be86c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2be86cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_2be870:
    // 0x2be870: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2be870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2be874:
    // 0x2be874: 0x24744b00  addiu       $s4, $v1, 0x4B00
    ctx->pc = 0x2be874u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2be878:
    // 0x2be878: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2be878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2be87c:
    // 0x2be87c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2be87cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2be880:
    // 0x2be880: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2be880u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2be884:
    // 0x2be884: 0x86020092  lh          $v0, 0x92($s0)
    ctx->pc = 0x2be884u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_2be888:
    // 0x2be888: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2be888u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2be88c:
    // 0x2be88c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2be88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2be890:
    // 0x2be890: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2be890u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2be894:
    // 0x2be894: 0xc0cdb38  jal         func_336CE0
label_2be898:
    if (ctx->pc == 0x2BE898u) {
        ctx->pc = 0x2BE898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE894u;
        // 0x2be898: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE89Cu;
        goto label_2be89c;
    }
    ctx->pc = 0x2BE894u;
    SET_GPR_U32(ctx, 31, 0x2BE89Cu);
    ctx->pc = 0x2BE898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE894u;
    // 0x2be898: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2BE894u, 0x2BE89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE89Cu;
label_2be89c:
    // 0x2be89c: 0x124000a3  beqz        $s2, . + 4 + (0xA3 << 2)
label_2be8a0:
    if (ctx->pc == 0x2BE8A0u) {
        ctx->pc = 0x2BE8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE89Cu;
        // 0x2be8a0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE8A4u;
        goto label_2be8a4;
    }
    ctx->pc = 0x2BE89Cu;
    {
        const bool branch_taken_0x2be89c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE89Cu;
        // 0x2be8a0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be89c) {
            ctx->pc = 0x2BEB2Cu;
            goto label_2beb2c;
        }
    }
    ctx->pc = 0x2BE8A4u;
label_2be8a4:
    // 0x2be8a4: 0xc087502  jal         func_21D408
label_2be8a8:
    if (ctx->pc == 0x2BE8A8u) {
        ctx->pc = 0x2BE8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE8A4u;
        // 0x2be8a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE8ACu;
        goto label_2be8ac;
    }
    ctx->pc = 0x2BE8A4u;
    SET_GPR_U32(ctx, 31, 0x2BE8ACu);
    ctx->pc = 0x2BE8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE8A4u;
    // 0x2be8a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2BE8A4u, 0x2BE8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE8ACu;
label_2be8ac:
    // 0x2be8ac: 0xc0e409a  jal         func_390268
label_2be8b0:
    if (ctx->pc == 0x2BE8B0u) {
        ctx->pc = 0x2BE8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE8ACu;
        // 0x2be8b0: 0x24440124  addiu       $a0, $v0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE8B4u;
        goto label_2be8b4;
    }
    ctx->pc = 0x2BE8ACu;
    SET_GPR_U32(ctx, 31, 0x2BE8B4u);
    ctx->pc = 0x2BE8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE8ACu;
    // 0x2be8b0: 0x24440124  addiu       $a0, $v0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2BE8ACu, 0x2BE8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE8B4u;
label_2be8b4:
    // 0x2be8b4: 0x50500006  beql        $v0, $s0, . + 4 + (0x6 << 2)
label_2be8b8:
    if (ctx->pc == 0x2BE8B8u) {
        ctx->pc = 0x2BE8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE8B4u;
        // 0x2be8b8: 0x86440092  lh          $a0, 0x92($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE8BCu;
        goto label_2be8bc;
    }
    ctx->pc = 0x2BE8B4u;
    {
        const bool branch_taken_0x2be8b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x2be8b4) {
            ctx->pc = 0x2BE8B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE8B4u;
            // 0x2be8b8: 0x86440092  lh          $a0, 0x92($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE8D0u;
            goto label_2be8d0;
        }
    }
    ctx->pc = 0x2BE8BCu;
label_2be8bc:
    // 0x2be8bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2be8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2be8c0:
    // 0x2be8c0: 0xc0af9c0  jal         func_2BE700
label_2be8c4:
    if (ctx->pc == 0x2BE8C4u) {
        ctx->pc = 0x2BE8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE8C0u;
        // 0x2be8c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE8C8u;
        goto label_2be8c8;
    }
    ctx->pc = 0x2BE8C0u;
    SET_GPR_U32(ctx, 31, 0x2BE8C8u);
    ctx->pc = 0x2BE8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE8C0u;
    // 0x2be8c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE700u, 0x2BE8C0u, 0x2BE8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE8C8u;
label_2be8c8:
    // 0x2be8c8: 0x100000d7  b           . + 4 + (0xD7 << 2)
label_2be8cc:
    if (ctx->pc == 0x2BE8CCu) {
        ctx->pc = 0x2BE8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE8C8u;
        // 0x2be8cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE8D0u;
        goto label_2be8d0;
    }
    ctx->pc = 0x2BE8C8u;
    {
        const bool branch_taken_0x2be8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE8C8u;
        // 0x2be8cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be8c8) {
            ctx->pc = 0x2BEC28u;
            goto label_2bec28;
        }
    }
    ctx->pc = 0x2BE8D0u;
label_2be8d0:
    // 0x2be8d0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2be8d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2be8d4:
    // 0x2be8d4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2be8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2be8d8:
    // 0x2be8d8: 0xc0cdb38  jal         func_336CE0
label_2be8dc:
    if (ctx->pc == 0x2BE8DCu) {
        ctx->pc = 0x2BE8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE8D8u;
        // 0x2be8dc: 0x942021  addu        $a0, $a0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE8E0u;
        goto label_2be8e0;
    }
    ctx->pc = 0x2BE8D8u;
    SET_GPR_U32(ctx, 31, 0x2BE8E0u);
    ctx->pc = 0x2BE8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE8D8u;
    // 0x2be8dc: 0x942021  addu        $a0, $a0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2BE8D8u, 0x2BE8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE8E0u;
label_2be8e0:
    // 0x2be8e0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2be8e0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2be8e4:
    // 0x2be8e4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2be8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2be8e8:
    // 0x2be8e8: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x2be8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2be8ec:
    // 0x2be8ec: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x2be8ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
label_2be8f0:
    // 0x2be8f0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2be8f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2be8f4:
    // 0x2be8f4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2be8f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2be8f8:
    // 0x2be8f8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2be8f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2be8fc:
    // 0x2be8fc: 0xc4410140  lwc1        $f1, 0x140($v0)
    ctx->pc = 0x2be8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2be900:
    // 0x2be900: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2be900u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2be904:
    // 0x2be904: 0x0  nop
    ctx->pc = 0x2be904u;
    // NOP
label_2be908:
    // 0x2be908: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
label_2be90c:
    if (ctx->pc == 0x2BE90Cu) {
        ctx->pc = 0x2BE90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE908u;
        // 0x2be90c: 0x46020d02  mul.s       $f20, $f1, $f2 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE910u;
        goto label_2be910;
    }
    ctx->pc = 0x2BE908u;
    {
        const bool branch_taken_0x2be908 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BE90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE908u;
        // 0x2be90c: 0x46020d02  mul.s       $f20, $f1, $f2 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be908) {
            ctx->pc = 0x2BE988u;
            goto label_2be988;
        }
    }
    ctx->pc = 0x2BE910u;
label_2be910:
    // 0x2be910: 0xc08a08a  jal         func_228228
label_2be914:
    if (ctx->pc == 0x2BE914u) {
        ctx->pc = 0x2BE914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE910u;
        // 0x2be914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE918u;
        goto label_2be918;
    }
    ctx->pc = 0x2BE910u;
    SET_GPR_U32(ctx, 31, 0x2BE918u);
    ctx->pc = 0x2BE914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE910u;
    // 0x2be914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2BE910u, 0x2BE918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE918u;
label_2be918:
    // 0x2be918: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
label_2be91c:
    if (ctx->pc == 0x2BE91Cu) {
        ctx->pc = 0x2BE91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE918u;
        // 0x2be91c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE920u;
        goto label_2be920;
    }
    ctx->pc = 0x2BE918u;
    {
        const bool branch_taken_0x2be918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2be918) {
            ctx->pc = 0x2BE91Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE918u;
            // 0x2be91c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE98Cu;
            goto label_2be98c;
        }
    }
    ctx->pc = 0x2BE920u;
label_2be920:
    // 0x2be920: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2be920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2be924:
    // 0x2be924: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2be924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2be928:
    // 0x2be928: 0xc0a33f8  jal         func_28CFE0
label_2be92c:
    if (ctx->pc == 0x2BE92Cu) {
        ctx->pc = 0x2BE92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE928u;
        // 0x2be92c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE930u;
        goto label_2be930;
    }
    ctx->pc = 0x2BE928u;
    SET_GPR_U32(ctx, 31, 0x2BE930u);
    ctx->pc = 0x2BE92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE928u;
    // 0x2be92c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2BE928u, 0x2BE930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE930u;
label_2be930:
    // 0x2be930: 0xc0a36c8  jal         func_28DB20
label_2be934:
    if (ctx->pc == 0x2BE934u) {
        ctx->pc = 0x2BE934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE930u;
        // 0x2be934: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE938u;
        goto label_2be938;
    }
    ctx->pc = 0x2BE930u;
    SET_GPR_U32(ctx, 31, 0x2BE938u);
    ctx->pc = 0x2BE934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE930u;
    // 0x2be934: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2BE930u, 0x2BE938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE938u;
label_2be938:
    // 0x2be938: 0xc0a367c  jal         func_28D9F0
label_2be93c:
    if (ctx->pc == 0x2BE93Cu) {
        ctx->pc = 0x2BE93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE938u;
        // 0x2be93c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE940u;
        goto label_2be940;
    }
    ctx->pc = 0x2BE938u;
    SET_GPR_U32(ctx, 31, 0x2BE940u);
    ctx->pc = 0x2BE93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE938u;
    // 0x2be93c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2BE938u, 0x2BE940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE940u;
label_2be940:
    // 0x2be940: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2be940u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2be944:
    // 0x2be944: 0x120000b8  beqz        $s0, . + 4 + (0xB8 << 2)
label_2be948:
    if (ctx->pc == 0x2BE948u) {
        ctx->pc = 0x2BE948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE944u;
        // 0x2be948: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE94Cu;
        goto label_2be94c;
    }
    ctx->pc = 0x2BE944u;
    {
        const bool branch_taken_0x2be944 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE944u;
        // 0x2be948: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be944) {
            ctx->pc = 0x2BEC28u;
            goto label_2bec28;
        }
    }
    ctx->pc = 0x2BE94Cu;
label_2be94c:
    // 0x2be94c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2be94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2be950:
    // 0x2be950: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2be950u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2be954:
    // 0x2be954: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2be954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2be958:
    // 0x2be958: 0x40f809  jalr        $v0
label_2be95c:
    if (ctx->pc == 0x2BE95Cu) {
        ctx->pc = 0x2BE95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE958u;
        // 0x2be95c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE960u;
        goto label_2be960;
    }
    ctx->pc = 0x2BE958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BE960u);
        ctx->pc = 0x2BE95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE958u;
        // 0x2be95c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE958u, 0x2BE960u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BE960u;
label_2be960:
    // 0x2be960: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2be960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2be964:
    // 0x2be964: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2be964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2be968:
    // 0x2be968: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2be968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2be96c:
    // 0x2be96c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2be96cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2be970:
    // 0x2be970: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2be970u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2be974:
    // 0x2be974: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x2be974u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2be978:
    // 0x2be978: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2be978u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2be97c:
    // 0x2be97c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2be97cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2be980:
    // 0x2be980: 0x1000007f  b           . + 4 + (0x7F << 2)
label_2be984:
    if (ctx->pc == 0x2BE984u) {
        ctx->pc = 0x2BE984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE980u;
        // 0x2be984: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE988u;
        goto label_2be988;
    }
    ctx->pc = 0x2BE980u;
    {
        const bool branch_taken_0x2be980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE980u;
        // 0x2be984: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be980) {
            ctx->pc = 0x2BEB80u;
            goto label_2beb80;
        }
    }
    ctx->pc = 0x2BE988u;
label_2be988:
    // 0x2be988: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2be988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2be98c:
    // 0x2be98c: 0xc088fa8  jal         func_223EA0
label_2be990:
    if (ctx->pc == 0x2BE990u) {
        ctx->pc = 0x2BE990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE98Cu;
        // 0x2be990: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE994u;
        goto label_2be994;
    }
    ctx->pc = 0x2BE98Cu;
    SET_GPR_U32(ctx, 31, 0x2BE994u);
    ctx->pc = 0x2BE990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE98Cu;
    // 0x2be990: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EA0u, 0x2BE98Cu, 0x2BE994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE994u;
label_2be994:
    // 0x2be994: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_2be998:
    if (ctx->pc == 0x2BE998u) {
        ctx->pc = 0x2BE998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE994u;
        // 0x2be998: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE99Cu;
        goto label_2be99c;
    }
    ctx->pc = 0x2BE994u;
    {
        const bool branch_taken_0x2be994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE994u;
        // 0x2be998: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be994) {
            ctx->pc = 0x2BEA44u;
            goto label_2bea44;
        }
    }
    ctx->pc = 0x2BE99Cu;
label_2be99c:
    // 0x2be99c: 0xc089000  jal         func_224000
label_2be9a0:
    if (ctx->pc == 0x2BE9A0u) {
        ctx->pc = 0x2BE9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE99Cu;
        // 0x2be9a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE9A4u;
        goto label_2be9a4;
    }
    ctx->pc = 0x2BE99Cu;
    SET_GPR_U32(ctx, 31, 0x2BE9A4u);
    ctx->pc = 0x2BE9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE99Cu;
    // 0x2be9a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x2BE99Cu, 0x2BE9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE9A4u;
label_2be9a4:
    // 0x2be9a4: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
label_2be9a8:
    if (ctx->pc == 0x2BE9A8u) {
        ctx->pc = 0x2BE9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE9A4u;
        // 0x2be9a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE9ACu;
        goto label_2be9ac;
    }
    ctx->pc = 0x2BE9A4u;
    {
        const bool branch_taken_0x2be9a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE9A4u;
        // 0x2be9a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be9a4) {
            ctx->pc = 0x2BEA44u;
            goto label_2bea44;
        }
    }
    ctx->pc = 0x2BE9ACu;
label_2be9ac:
    // 0x2be9ac: 0xc087502  jal         func_21D408
label_2be9b0:
    if (ctx->pc == 0x2BE9B0u) {
        ctx->pc = 0x2BE9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE9ACu;
        // 0x2be9b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE9B4u;
        goto label_2be9b4;
    }
    ctx->pc = 0x2BE9ACu;
    SET_GPR_U32(ctx, 31, 0x2BE9B4u);
    ctx->pc = 0x2BE9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE9ACu;
    // 0x2be9b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2BE9ACu, 0x2BE9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE9B4u;
label_2be9b4:
    // 0x2be9b4: 0xc0a2af0  jal         func_28ABC0
label_2be9b8:
    if (ctx->pc == 0x2BE9B8u) {
        ctx->pc = 0x2BE9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE9B4u;
        // 0x2be9b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE9BCu;
        goto label_2be9bc;
    }
    ctx->pc = 0x2BE9B4u;
    SET_GPR_U32(ctx, 31, 0x2BE9BCu);
    ctx->pc = 0x2BE9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE9B4u;
    // 0x2be9b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28ABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28ABC0u, 0x2BE9B4u, 0x2BE9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE9BCu;
label_2be9bc:
    // 0x2be9bc: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x2be9bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_2be9c0:
    // 0x2be9c0: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2be9c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2be9c4:
    // 0x2be9c4: 0x0  nop
    ctx->pc = 0x2be9c4u;
    // NOP
label_2be9c8:
    // 0x2be9c8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_2be9cc:
    if (ctx->pc == 0x2BE9CCu) {
        ctx->pc = 0x2BE9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE9C8u;
        // 0x2be9cc: 0x2982b  sltu        $s3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE9D0u;
        goto label_2be9d0;
    }
    ctx->pc = 0x2BE9C8u;
    {
        const bool branch_taken_0x2be9c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BE9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE9C8u;
        // 0x2be9cc: 0x2982b  sltu        $s3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be9c8) {
            ctx->pc = 0x2BE9D8u;
            goto label_2be9d8;
        }
    }
    ctx->pc = 0x2BE9D0u;
label_2be9d0:
    // 0x2be9d0: 0x1660001c  bnez        $s3, . + 4 + (0x1C << 2)
label_2be9d4:
    if (ctx->pc == 0x2BE9D4u) {
        ctx->pc = 0x2BE9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE9D0u;
        // 0x2be9d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE9D8u;
        goto label_2be9d8;
    }
    ctx->pc = 0x2BE9D0u;
    {
        const bool branch_taken_0x2be9d0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE9D0u;
        // 0x2be9d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be9d0) {
            ctx->pc = 0x2BEA44u;
            goto label_2bea44;
        }
    }
    ctx->pc = 0x2BE9D8u;
label_2be9d8:
    // 0x2be9d8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2be9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2be9dc:
    // 0x2be9dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2be9dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2be9e0:
    // 0x2be9e0: 0xc0a33f8  jal         func_28CFE0
label_2be9e4:
    if (ctx->pc == 0x2BE9E4u) {
        ctx->pc = 0x2BE9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE9E0u;
        // 0x2be9e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE9E8u;
        goto label_2be9e8;
    }
    ctx->pc = 0x2BE9E0u;
    SET_GPR_U32(ctx, 31, 0x2BE9E8u);
    ctx->pc = 0x2BE9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE9E0u;
    // 0x2be9e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2BE9E0u, 0x2BE9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE9E8u;
label_2be9e8:
    // 0x2be9e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2be9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2be9ec:
    // 0x2be9ec: 0xc0af9c0  jal         func_2BE700
label_2be9f0:
    if (ctx->pc == 0x2BE9F0u) {
        ctx->pc = 0x2BE9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE9ECu;
        // 0x2be9f0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE9F4u;
        goto label_2be9f4;
    }
    ctx->pc = 0x2BE9ECu;
    SET_GPR_U32(ctx, 31, 0x2BE9F4u);
    ctx->pc = 0x2BE9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE9ECu;
    // 0x2be9f0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE700u, 0x2BE9ECu, 0x2BE9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE9F4u;
label_2be9f4:
    // 0x2be9f4: 0x1660008c  bnez        $s3, . + 4 + (0x8C << 2)
label_2be9f8:
    if (ctx->pc == 0x2BE9F8u) {
        ctx->pc = 0x2BE9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE9F4u;
        // 0x2be9f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE9FCu;
        goto label_2be9fc;
    }
    ctx->pc = 0x2BE9F4u;
    {
        const bool branch_taken_0x2be9f4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE9F4u;
        // 0x2be9f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be9f4) {
            ctx->pc = 0x2BEC28u;
            goto label_2bec28;
        }
    }
    ctx->pc = 0x2BE9FCu;
label_2be9fc:
    // 0x2be9fc: 0xc0a367c  jal         func_28D9F0
label_2bea00:
    if (ctx->pc == 0x2BEA00u) {
        ctx->pc = 0x2BEA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE9FCu;
        // 0x2bea00: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEA04u;
        goto label_2bea04;
    }
    ctx->pc = 0x2BE9FCu;
    SET_GPR_U32(ctx, 31, 0x2BEA04u);
    ctx->pc = 0x2BEA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE9FCu;
    // 0x2bea00: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2BE9FCu, 0x2BEA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEA04u;
label_2bea04:
    // 0x2bea04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bea04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bea08:
    // 0x2bea08: 0x12000087  beqz        $s0, . + 4 + (0x87 << 2)
label_2bea0c:
    if (ctx->pc == 0x2BEA0Cu) {
        ctx->pc = 0x2BEA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEA08u;
        // 0x2bea0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEA10u;
        goto label_2bea10;
    }
    ctx->pc = 0x2BEA08u;
    {
        const bool branch_taken_0x2bea08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEA08u;
        // 0x2bea0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bea08) {
            ctx->pc = 0x2BEC28u;
            goto label_2bec28;
        }
    }
    ctx->pc = 0x2BEA10u;
label_2bea10:
    // 0x2bea10: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2bea10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2bea14:
    // 0x2bea14: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2bea14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2bea18:
    // 0x2bea18: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2bea18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2bea1c:
    // 0x2bea1c: 0x40f809  jalr        $v0
label_2bea20:
    if (ctx->pc == 0x2BEA20u) {
        ctx->pc = 0x2BEA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEA1Cu;
        // 0x2bea20: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEA24u;
        goto label_2bea24;
    }
    ctx->pc = 0x2BEA1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BEA24u);
        ctx->pc = 0x2BEA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEA1Cu;
        // 0x2bea20: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BEA1Cu, 0x2BEA24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BEA24u;
label_2bea24:
    // 0x2bea24: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2bea24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bea28:
    // 0x2bea28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bea28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bea2c:
    // 0x2bea2c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2bea2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bea30:
    // 0x2bea30: 0x240707d0  addiu       $a3, $zero, 0x7D0
    ctx->pc = 0x2bea30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
label_2bea34:
    // 0x2bea34: 0xc0bfabe  jal         func_2FEAF8
label_2bea38:
    if (ctx->pc == 0x2BEA38u) {
        ctx->pc = 0x2BEA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEA34u;
        // 0x2bea38: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEA3Cu;
        goto label_2bea3c;
    }
    ctx->pc = 0x2BEA34u;
    SET_GPR_U32(ctx, 31, 0x2BEA3Cu);
    ctx->pc = 0x2BEA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEA34u;
    // 0x2bea38: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEAF8u, 0x2BEA34u, 0x2BEA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEA3Cu;
label_2bea3c:
    // 0x2bea3c: 0x1000007a  b           . + 4 + (0x7A << 2)
label_2bea40:
    if (ctx->pc == 0x2BEA40u) {
        ctx->pc = 0x2BEA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEA3Cu;
        // 0x2bea40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEA44u;
        goto label_2bea44;
    }
    ctx->pc = 0x2BEA3Cu;
    {
        const bool branch_taken_0x2bea3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEA3Cu;
        // 0x2bea40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bea3c) {
            ctx->pc = 0x2BEC28u;
            goto label_2bec28;
        }
    }
    ctx->pc = 0x2BEA44u;
label_2bea44:
    // 0x2bea44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bea44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bea48:
    // 0x2bea48: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2bea48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_2bea4c:
    // 0x2bea4c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bea4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2bea50:
    // 0x2bea50: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2bea50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2bea54:
    // 0x2bea54: 0xc0888a2  jal         func_222288
label_2bea58:
    if (ctx->pc == 0x2BEA58u) {
        ctx->pc = 0x2BEA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEA54u;
        // 0x2bea58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEA5Cu;
        goto label_2bea5c;
    }
    ctx->pc = 0x2BEA54u;
    SET_GPR_U32(ctx, 31, 0x2BEA5Cu);
    ctx->pc = 0x2BEA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEA54u;
    // 0x2bea58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x2BEA54u, 0x2BEA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEA5Cu;
label_2bea5c:
    // 0x2bea5c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2bea60:
    if (ctx->pc == 0x2BEA60u) {
        ctx->pc = 0x2BEA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEA5Cu;
        // 0x2bea60: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEA64u;
        goto label_2bea64;
    }
    ctx->pc = 0x2BEA5Cu;
    {
        const bool branch_taken_0x2bea5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BEA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEA5Cu;
        // 0x2bea60: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bea5c) {
            ctx->pc = 0x2BEA7Cu;
            goto label_2bea7c;
        }
    }
    ctx->pc = 0x2BEA64u;
label_2bea64:
    // 0x2bea64: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2bea64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bea68:
    // 0x2bea68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bea68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bea6c:
    // 0x2bea6c: 0xc0a33f8  jal         func_28CFE0
label_2bea70:
    if (ctx->pc == 0x2BEA70u) {
        ctx->pc = 0x2BEA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEA6Cu;
        // 0x2bea70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEA74u;
        goto label_2bea74;
    }
    ctx->pc = 0x2BEA6Cu;
    SET_GPR_U32(ctx, 31, 0x2BEA74u);
    ctx->pc = 0x2BEA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEA6Cu;
    // 0x2bea70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2BEA6Cu, 0x2BEA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEA74u;
label_2bea74:
    // 0x2bea74: 0x1000006c  b           . + 4 + (0x6C << 2)
label_2bea78:
    if (ctx->pc == 0x2BEA78u) {
        ctx->pc = 0x2BEA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEA74u;
        // 0x2bea78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEA7Cu;
        goto label_2bea7c;
    }
    ctx->pc = 0x2BEA74u;
    {
        const bool branch_taken_0x2bea74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEA74u;
        // 0x2bea78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bea74) {
            ctx->pc = 0x2BEC28u;
            goto label_2bec28;
        }
    }
    ctx->pc = 0x2BEA7Cu;
label_2bea7c:
    // 0x2bea7c: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2bea7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2bea80:
    // 0x2bea80: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_2bea84:
    if (ctx->pc == 0x2BEA84u) {
        ctx->pc = 0x2BEA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEA80u;
        // 0x2bea84: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEA88u;
        goto label_2bea88;
    }
    ctx->pc = 0x2BEA80u;
    {
        const bool branch_taken_0x2bea80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BEA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEA80u;
        // 0x2bea84: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bea80) {
            ctx->pc = 0x2BEAA8u;
            goto label_2beaa8;
        }
    }
    ctx->pc = 0x2BEA88u;
label_2bea88:
    // 0x2bea88: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_2bea8c:
    if (ctx->pc == 0x2BEA8Cu) {
        ctx->pc = 0x2BEA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEA88u;
        // 0x2bea8c: 0x240200bb  addiu       $v0, $zero, 0xBB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEA90u;
        goto label_2bea90;
    }
    ctx->pc = 0x2BEA88u;
    {
        const bool branch_taken_0x2bea88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BEA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEA88u;
        // 0x2bea8c: 0x240200bb  addiu       $v0, $zero, 0xBB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bea88) {
            ctx->pc = 0x2BEAA8u;
            goto label_2beaa8;
        }
    }
    ctx->pc = 0x2BEA90u;
label_2bea90:
    // 0x2bea90: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2bea94:
    if (ctx->pc == 0x2BEA94u) {
        ctx->pc = 0x2BEA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEA90u;
        // 0x2bea94: 0x2402007a  addiu       $v0, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEA98u;
        goto label_2bea98;
    }
    ctx->pc = 0x2BEA90u;
    {
        const bool branch_taken_0x2bea90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BEA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEA90u;
        // 0x2bea94: 0x2402007a  addiu       $v0, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bea90) {
            ctx->pc = 0x2BEAA8u;
            goto label_2beaa8;
        }
    }
    ctx->pc = 0x2BEA98u;
label_2bea98:
    // 0x2bea98: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2bea9c:
    if (ctx->pc == 0x2BEA9Cu) {
        ctx->pc = 0x2BEA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEA98u;
        // 0x2bea9c: 0x2402006b  addiu       $v0, $zero, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEAA0u;
        goto label_2beaa0;
    }
    ctx->pc = 0x2BEA98u;
    {
        const bool branch_taken_0x2bea98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BEA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEA98u;
        // 0x2bea9c: 0x2402006b  addiu       $v0, $zero, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bea98) {
            ctx->pc = 0x2BEAA8u;
            goto label_2beaa8;
        }
    }
    ctx->pc = 0x2BEAA0u;
label_2beaa0:
    // 0x2beaa0: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
label_2beaa4:
    if (ctx->pc == 0x2BEAA4u) {
        ctx->pc = 0x2BEAA8u;
        goto label_2beaa8;
    }
    ctx->pc = 0x2BEAA0u;
    {
        const bool branch_taken_0x2beaa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2beaa0) {
            ctx->pc = 0x2BEAF4u;
            goto label_2beaf4;
        }
    }
    ctx->pc = 0x2BEAA8u;
label_2beaa8:
    // 0x2beaa8: 0xc0a367c  jal         func_28D9F0
label_2beaac:
    if (ctx->pc == 0x2BEAACu) {
        ctx->pc = 0x2BEAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEAA8u;
        // 0x2beaac: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEAB0u;
        goto label_2beab0;
    }
    ctx->pc = 0x2BEAA8u;
    SET_GPR_U32(ctx, 31, 0x2BEAB0u);
    ctx->pc = 0x2BEAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEAA8u;
    // 0x2beaac: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2BEAA8u, 0x2BEAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEAB0u;
label_2beab0:
    // 0x2beab0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2beab0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2beab4:
    // 0x2beab4: 0x1200005c  beqz        $s0, . + 4 + (0x5C << 2)
label_2beab8:
    if (ctx->pc == 0x2BEAB8u) {
        ctx->pc = 0x2BEAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEAB4u;
        // 0x2beab8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEABCu;
        goto label_2beabc;
    }
    ctx->pc = 0x2BEAB4u;
    {
        const bool branch_taken_0x2beab4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEAB4u;
        // 0x2beab8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beab4) {
            ctx->pc = 0x2BEC28u;
            goto label_2bec28;
        }
    }
    ctx->pc = 0x2BEABCu;
label_2beabc:
    // 0x2beabc: 0xc087420  jal         func_21D080
label_2beac0:
    if (ctx->pc == 0x2BEAC0u) {
        ctx->pc = 0x2BEAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEABCu;
        // 0x2beac0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEAC4u;
        goto label_2beac4;
    }
    ctx->pc = 0x2BEABCu;
    SET_GPR_U32(ctx, 31, 0x2BEAC4u);
    ctx->pc = 0x2BEAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEABCu;
    // 0x2beac0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D080u, 0x2BEABCu, 0x2BEAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEAC4u;
label_2beac4:
    // 0x2beac4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2beac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2beac8:
    // 0x2beac8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2beac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2beacc:
    // 0x2beacc: 0x8c6abd30  lw          $t2, -0x42D0($v1)
    ctx->pc = 0x2beaccu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_2bead0:
    // 0x2bead0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bead0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bead4:
    // 0x2bead4: 0x3c013f81  lui         $at, 0x3F81
    ctx->pc = 0x2bead4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16257 << 16));
label_2bead8:
    // 0x2bead8: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x2bead8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_2beadc:
    // 0x2beadc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2beadcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2beae0:
    // 0x2beae0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2beae0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2beae4:
    // 0x2beae4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2beae4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2beae8:
    // 0x2beae8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2beae8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2beaec:
    // 0x2beaec: 0x10000024  b           . + 4 + (0x24 << 2)
label_2beaf0:
    if (ctx->pc == 0x2BEAF0u) {
        ctx->pc = 0x2BEAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEAECu;
        // 0x2beaf0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEAF4u;
        goto label_2beaf4;
    }
    ctx->pc = 0x2BEAECu;
    {
        const bool branch_taken_0x2beaec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEAECu;
        // 0x2beaf0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beaec) {
            ctx->pc = 0x2BEB80u;
            goto label_2beb80;
        }
    }
    ctx->pc = 0x2BEAF4u;
label_2beaf4:
    // 0x2beaf4: 0xc0a4e54  jal         func_293950
label_2beaf8:
    if (ctx->pc == 0x2BEAF8u) {
        ctx->pc = 0x2BEAFCu;
        goto label_2beafc;
    }
    ctx->pc = 0x2BEAF4u;
    SET_GPR_U32(ctx, 31, 0x2BEAFCu);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2BEAF4u, 0x2BEAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEAFCu;
label_2beafc:
    // 0x2beafc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2beafcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2beb00:
    // 0x2beb00: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_2beb04:
    if (ctx->pc == 0x2BEB04u) {
        ctx->pc = 0x2BEB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEB00u;
        // 0x2beb04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEB08u;
        goto label_2beb08;
    }
    ctx->pc = 0x2BEB00u;
    {
        const bool branch_taken_0x2beb00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEB00u;
        // 0x2beb04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beb00) {
            ctx->pc = 0x2BEB18u;
            goto label_2beb18;
        }
    }
    ctx->pc = 0x2BEB08u;
label_2beb08:
    // 0x2beb08: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2beb08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2beb0c:
    // 0x2beb0c: 0x24060fa0  addiu       $a2, $zero, 0xFA0
    ctx->pc = 0x2beb0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
label_2beb10:
    // 0x2beb10: 0xc0acb08  jal         func_2B2C20
label_2beb14:
    if (ctx->pc == 0x2BEB14u) {
        ctx->pc = 0x2BEB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEB10u;
        // 0x2beb14: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEB18u;
        goto label_2beb18;
    }
    ctx->pc = 0x2BEB10u;
    SET_GPR_U32(ctx, 31, 0x2BEB18u);
    ctx->pc = 0x2BEB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEB10u;
    // 0x2beb14: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2C20u, 0x2BEB10u, 0x2BEB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEB18u;
label_2beb18:
    // 0x2beb18: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2beb18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2beb1c:
    // 0x2beb1c: 0xc0a35d6  jal         func_28D758
label_2beb20:
    if (ctx->pc == 0x2BEB20u) {
        ctx->pc = 0x2BEB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEB1Cu;
        // 0x2beb20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEB24u;
        goto label_2beb24;
    }
    ctx->pc = 0x2BEB1Cu;
    SET_GPR_U32(ctx, 31, 0x2BEB24u);
    ctx->pc = 0x2BEB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEB1Cu;
    // 0x2beb20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2BEB1Cu, 0x2BEB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEB24u;
label_2beb24:
    // 0x2beb24: 0x10000040  b           . + 4 + (0x40 << 2)
label_2beb28:
    if (ctx->pc == 0x2BEB28u) {
        ctx->pc = 0x2BEB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEB24u;
        // 0x2beb28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEB2Cu;
        goto label_2beb2c;
    }
    ctx->pc = 0x2BEB24u;
    {
        const bool branch_taken_0x2beb24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEB24u;
        // 0x2beb28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beb24) {
            ctx->pc = 0x2BEC28u;
            goto label_2bec28;
        }
    }
    ctx->pc = 0x2BEB2Cu;
label_2beb2c:
    // 0x2beb2c: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x2beb2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2beb30:
    // 0x2beb30: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2beb30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2beb34:
    // 0x2beb34: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2beb34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2beb38:
    // 0x2beb38: 0x0  nop
    ctx->pc = 0x2beb38u;
    // NOP
label_2beb3c:
    // 0x2beb3c: 0x45000014  bc1f        . + 4 + (0x14 << 2)
label_2beb40:
    if (ctx->pc == 0x2BEB40u) {
        ctx->pc = 0x2BEB44u;
        goto label_2beb44;
    }
    ctx->pc = 0x2BEB3Cu;
    {
        const bool branch_taken_0x2beb3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2beb3c) {
            ctx->pc = 0x2BEB90u;
            goto label_2beb90;
        }
    }
    ctx->pc = 0x2BEB44u;
label_2beb44:
    // 0x2beb44: 0xc0a36c8  jal         func_28DB20
label_2beb48:
    if (ctx->pc == 0x2BEB48u) {
        ctx->pc = 0x2BEB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEB44u;
        // 0x2beb48: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEB4Cu;
        goto label_2beb4c;
    }
    ctx->pc = 0x2BEB44u;
    SET_GPR_U32(ctx, 31, 0x2BEB4Cu);
    ctx->pc = 0x2BEB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEB44u;
    // 0x2beb48: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2BEB44u, 0x2BEB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEB4Cu;
label_2beb4c:
    // 0x2beb4c: 0xc0a367c  jal         func_28D9F0
label_2beb50:
    if (ctx->pc == 0x2BEB50u) {
        ctx->pc = 0x2BEB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEB4Cu;
        // 0x2beb50: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEB54u;
        goto label_2beb54;
    }
    ctx->pc = 0x2BEB4Cu;
    SET_GPR_U32(ctx, 31, 0x2BEB54u);
    ctx->pc = 0x2BEB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEB4Cu;
    // 0x2beb50: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2BEB4Cu, 0x2BEB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEB54u;
label_2beb54:
    // 0x2beb54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2beb54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2beb58:
    // 0x2beb58: 0x10800032  beqz        $a0, . + 4 + (0x32 << 2)
label_2beb5c:
    if (ctx->pc == 0x2BEB5Cu) {
        ctx->pc = 0x2BEB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEB58u;
        // 0x2beb5c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEB60u;
        goto label_2beb60;
    }
    ctx->pc = 0x2BEB58u;
    {
        const bool branch_taken_0x2beb58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEB58u;
        // 0x2beb5c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beb58) {
            ctx->pc = 0x2BEC24u;
            goto label_2bec24;
        }
    }
    ctx->pc = 0x2BEB60u;
label_2beb60:
    // 0x2beb60: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2beb60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2beb64:
    // 0x2beb64: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2beb64u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2beb68:
    // 0x2beb68: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2beb68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2beb6c:
    // 0x2beb6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2beb6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2beb70:
    // 0x2beb70: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2beb70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2beb74:
    // 0x2beb74: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2beb74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2beb78:
    // 0x2beb78: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2beb78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2beb7c:
    // 0x2beb7c: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2beb7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2beb80:
    // 0x2beb80: 0xc0bee7a  jal         func_2FB9E8
label_2beb84:
    if (ctx->pc == 0x2BEB84u) {
        ctx->pc = 0x2BEB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEB80u;
        // 0x2beb84: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEB88u;
        goto label_2beb88;
    }
    ctx->pc = 0x2BEB80u;
    SET_GPR_U32(ctx, 31, 0x2BEB88u);
    ctx->pc = 0x2BEB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEB80u;
    // 0x2beb84: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2BEB80u, 0x2BEB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEB88u;
label_2beb88:
    // 0x2beb88: 0x10000027  b           . + 4 + (0x27 << 2)
label_2beb8c:
    if (ctx->pc == 0x2BEB8Cu) {
        ctx->pc = 0x2BEB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEB88u;
        // 0x2beb8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEB90u;
        goto label_2beb90;
    }
    ctx->pc = 0x2BEB88u;
    {
        const bool branch_taken_0x2beb88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEB88u;
        // 0x2beb8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beb88) {
            ctx->pc = 0x2BEC28u;
            goto label_2bec28;
        }
    }
    ctx->pc = 0x2BEB90u;
label_2beb90:
    // 0x2beb90: 0xc08a0d0  jal         func_228340
label_2beb94:
    if (ctx->pc == 0x2BEB94u) {
        ctx->pc = 0x2BEB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEB90u;
        // 0x2beb94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEB98u;
        goto label_2beb98;
    }
    ctx->pc = 0x2BEB90u;
    SET_GPR_U32(ctx, 31, 0x2BEB98u);
    ctx->pc = 0x2BEB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEB90u;
    // 0x2beb94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x2BEB90u, 0x2BEB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEB98u;
label_2beb98:
    // 0x2beb98: 0x10550022  beq         $v0, $s5, . + 4 + (0x22 << 2)
label_2beb9c:
    if (ctx->pc == 0x2BEB9Cu) {
        ctx->pc = 0x2BEB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEB98u;
        // 0x2beb9c: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEBA0u;
        goto label_2beba0;
    }
    ctx->pc = 0x2BEB98u;
    {
        const bool branch_taken_0x2beb98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x2BEB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEB98u;
        // 0x2beb9c: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beb98) {
            ctx->pc = 0x2BEC24u;
            goto label_2bec24;
        }
    }
    ctx->pc = 0x2BEBA0u;
label_2beba0:
    // 0x2beba0: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x2beba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2beba4:
    // 0x2beba4: 0x8ca2b734  lw          $v0, -0x48CC($a1)
    ctx->pc = 0x2beba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294948660)));
label_2beba8:
    // 0x2beba8: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x2beba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2bebac:
    // 0x2bebac: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x2bebacu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2bebb0:
    // 0x2bebb0: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
label_2bebb4:
    if (ctx->pc == 0x2BEBB4u) {
        ctx->pc = 0x2BEBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEBB0u;
        // 0x2bebb4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEBB8u;
        goto label_2bebb8;
    }
    ctx->pc = 0x2BEBB0u;
    {
        const bool branch_taken_0x2bebb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEBB0u;
        // 0x2bebb4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bebb0) {
            ctx->pc = 0x2BEC24u;
            goto label_2bec24;
        }
    }
    ctx->pc = 0x2BEBB8u;
label_2bebb8:
    // 0x2bebb8: 0xc08a0d0  jal         func_228340
label_2bebbc:
    if (ctx->pc == 0x2BEBBCu) {
        ctx->pc = 0x2BEBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEBB8u;
        // 0x2bebbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEBC0u;
        goto label_2bebc0;
    }
    ctx->pc = 0x2BEBB8u;
    SET_GPR_U32(ctx, 31, 0x2BEBC0u);
    ctx->pc = 0x2BEBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEBB8u;
    // 0x2bebbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x2BEBB8u, 0x2BEBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEBC0u;
label_2bebc0:
    // 0x2bebc0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2bebc4:
    if (ctx->pc == 0x2BEBC4u) {
        ctx->pc = 0x2BEBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEBC0u;
        // 0x2bebc4: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEBC8u;
        goto label_2bebc8;
    }
    ctx->pc = 0x2BEBC0u;
    {
        const bool branch_taken_0x2bebc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bebc0) {
            ctx->pc = 0x2BEBC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BEBC0u;
            // 0x2bebc4: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BEBD4u;
            goto label_2bebd4;
        }
    }
    ctx->pc = 0x2BEBC8u;
label_2bebc8:
    // 0x2bebc8: 0xc08bfbc  jal         func_22FEF0
label_2bebcc:
    if (ctx->pc == 0x2BEBCCu) {
        ctx->pc = 0x2BEBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEBC8u;
        // 0x2bebcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEBD0u;
        goto label_2bebd0;
    }
    ctx->pc = 0x2BEBC8u;
    SET_GPR_U32(ctx, 31, 0x2BEBD0u);
    ctx->pc = 0x2BEBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEBC8u;
    // 0x2bebcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2BEBC8u, 0x2BEBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEBD0u;
label_2bebd0:
    // 0x2bebd0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2bebd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2bebd4:
    // 0x2bebd4: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2bebd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2bebd8:
    // 0x2bebd8: 0xc0cd4ee  jal         func_3353B8
label_2bebdc:
    if (ctx->pc == 0x2BEBDCu) {
        ctx->pc = 0x2BEBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEBD8u;
        // 0x2bebdc: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEBE0u;
        goto label_2bebe0;
    }
    ctx->pc = 0x2BEBD8u;
    SET_GPR_U32(ctx, 31, 0x2BEBE0u);
    ctx->pc = 0x2BEBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEBD8u;
    // 0x2bebdc: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2BEBD8u, 0x2BEBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEBE0u;
label_2bebe0:
    // 0x2bebe0: 0x2c42001e  sltiu       $v0, $v0, 0x1E
    ctx->pc = 0x2bebe0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
label_2bebe4:
    // 0x2bebe4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2bebe8:
    if (ctx->pc == 0x2BEBE8u) {
        ctx->pc = 0x2BEBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEBE4u;
        // 0x2bebe8: 0x8e43b734  lw          $v1, -0x48CC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEBECu;
        goto label_2bebec;
    }
    ctx->pc = 0x2BEBE4u;
    {
        const bool branch_taken_0x2bebe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEBE4u;
        // 0x2bebe8: 0x8e43b734  lw          $v1, -0x48CC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bebe4) {
            ctx->pc = 0x2BEC18u;
            goto label_2bec18;
        }
    }
    ctx->pc = 0x2BEBECu;
label_2bebec:
    // 0x2bebec: 0xc0a367c  jal         func_28D9F0
label_2bebf0:
    if (ctx->pc == 0x2BEBF0u) {
        ctx->pc = 0x2BEBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEBECu;
        // 0x2bebf0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEBF4u;
        goto label_2bebf4;
    }
    ctx->pc = 0x2BEBECu;
    SET_GPR_U32(ctx, 31, 0x2BEBF4u);
    ctx->pc = 0x2BEBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEBECu;
    // 0x2bebf0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2BEBECu, 0x2BEBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEBF4u;
label_2bebf4:
    // 0x2bebf4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2bebf8:
    if (ctx->pc == 0x2BEBF8u) {
        ctx->pc = 0x2BEBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEBF4u;
        // 0x2bebf8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEBFCu;
        goto label_2bebfc;
    }
    ctx->pc = 0x2BEBF4u;
    {
        const bool branch_taken_0x2bebf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEBF4u;
        // 0x2bebf8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bebf4) {
            ctx->pc = 0x2BEC14u;
            goto label_2bec14;
        }
    }
    ctx->pc = 0x2BEBFCu;
label_2bebfc:
    // 0x2bebfc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2bebfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bec00:
    // 0x2bec00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bec00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bec04:
    // 0x2bec04: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2bec04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bec08:
    // 0x2bec08: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2bec08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bec0c:
    // 0x2bec0c: 0xc0be7d2  jal         func_2F9F48
label_2bec10:
    if (ctx->pc == 0x2BEC10u) {
        ctx->pc = 0x2BEC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEC0Cu;
        // 0x2bec10: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEC14u;
        goto label_2bec14;
    }
    ctx->pc = 0x2BEC0Cu;
    SET_GPR_U32(ctx, 31, 0x2BEC14u);
    ctx->pc = 0x2BEC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEC0Cu;
    // 0x2bec10: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9F48u, 0x2BEC0Cu, 0x2BEC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEC14u;
label_2bec14:
    // 0x2bec14: 0x8e43b734  lw          $v1, -0x48CC($s2)
    ctx->pc = 0x2bec14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948660)));
label_2bec18:
    // 0x2bec18: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2bec18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2bec1c:
    // 0x2bec1c: 0x24420bb8  addiu       $v0, $v0, 0xBB8
    ctx->pc = 0x2bec1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3000));
label_2bec20:
    // 0x2bec20: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x2bec20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_2bec24:
    // 0x2bec24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bec24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bec28:
    // 0x2bec28: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2bec28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2bec2c:
    // 0x2bec2c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2bec2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2bec30:
    // 0x2bec30: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2bec30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2bec34:
    // 0x2bec34: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2bec34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2bec38:
    // 0x2bec38: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2bec38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2bec3c:
    // 0x2bec3c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x2bec3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2bec40:
    // 0x2bec40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bec40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2bec44:
    // 0x2bec44: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x2bec44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2bec48:
    // 0x2bec48: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2bec48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2bec4c:
    // 0x2bec4c: 0x3e00008  jr          $ra
label_2bec50:
    if (ctx->pc == 0x2BEC50u) {
        ctx->pc = 0x2BEC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEC4Cu;
        // 0x2bec50: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEC54u;
        goto label_2bec54;
    }
    ctx->pc = 0x2BEC4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BEC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEC4Cu;
        // 0x2bec50: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BEC4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BEC54u;
label_2bec54:
    // 0x2bec54: 0x0  nop
    ctx->pc = 0x2bec54u;
    // NOP
    ctx->pc = 0x2bec58u;
}
