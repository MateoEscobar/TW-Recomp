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

// Function: sub_002880D8
// Address: 0x2880d8 - 0x288698
void sub_002880D8_0x2880d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002880D8_0x2880d8");
#endif

    switch (ctx->pc) {
        case 0x288108u: goto label_288108;
        case 0x288114u: goto label_288114;
        case 0x288120u: goto label_288120;
        case 0x288140u: goto label_288140;
        case 0x288158u: goto label_288158;
        case 0x288168u: goto label_288168;
        case 0x288178u: goto label_288178;
        case 0x28818cu: goto label_28818c;
        case 0x288198u: goto label_288198;
        case 0x2881a8u: goto label_2881a8;
        case 0x2881c4u: goto label_2881c4;
        case 0x2881d0u: goto label_2881d0;
        case 0x2881e4u: goto label_2881e4;
        case 0x2881f0u: goto label_2881f0;
        case 0x288204u: goto label_288204;
        case 0x288218u: goto label_288218;
        case 0x28827cu: goto label_28827c;
        case 0x288290u: goto label_288290;
        case 0x2882a0u: goto label_2882a0;
        case 0x2882b0u: goto label_2882b0;
        case 0x2882ccu: goto label_2882cc;
        case 0x2882e4u: goto label_2882e4;
        case 0x2882f4u: goto label_2882f4;
        case 0x288304u: goto label_288304;
        case 0x288314u: goto label_288314;
        case 0x28831cu: goto label_28831c;
        case 0x288330u: goto label_288330;
        case 0x288368u: goto label_288368;
        case 0x2883b4u: goto label_2883b4;
        case 0x2883d8u: goto label_2883d8;
        case 0x2883f0u: goto label_2883f0;
        case 0x288400u: goto label_288400;
        case 0x288414u: goto label_288414;
        case 0x28842cu: goto label_28842c;
        case 0x28843cu: goto label_28843c;
        case 0x28844cu: goto label_28844c;
        case 0x28845cu: goto label_28845c;
        case 0x28846cu: goto label_28846c;
        case 0x288480u: goto label_288480;
        case 0x2884b0u: goto label_2884b0;
        case 0x2884c0u: goto label_2884c0;
        case 0x2884d0u: goto label_2884d0;
        case 0x2884e8u: goto label_2884e8;
        case 0x2884fcu: goto label_2884fc;
        case 0x288528u: goto label_288528;
        case 0x288538u: goto label_288538;
        case 0x288548u: goto label_288548;
        case 0x288560u: goto label_288560;
        case 0x288574u: goto label_288574;
        case 0x2885d8u: goto label_2885d8;
        case 0x2885f8u: goto label_2885f8;
        case 0x288608u: goto label_288608;
        case 0x288618u: goto label_288618;
        case 0x28862cu: goto label_28862c;
        case 0x288640u: goto label_288640;
        case 0x288658u: goto label_288658;
        case 0x288664u: goto label_288664;
        default: break;
    }

    ctx->pc = 0x2880d8u;

    // 0x2880d8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2880d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2880dc: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2880dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2880e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2880e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2880e4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2880e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2880e8: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x2880e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x2880ec: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2880ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x2880f0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2880f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x2880f4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2880f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2880f8: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x2880f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x2880fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2880fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x288100: 0xc089b88  jal         func_226E20
    ctx->pc = 0x288100u;
    SET_GPR_U32(ctx, 31, 0x288108u);
    ctx->pc = 0x288104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288100u;
    // 0x288104: 0xe7b40090  swc1        $f20, 0x90($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E20u, 0x288100u, 0x288108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288108u;
label_288108:
    // 0x288108: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x288108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28810c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x28810Cu;
    SET_GPR_U32(ctx, 31, 0x288114u);
    ctx->pc = 0x288110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28810Cu;
    // 0x288110: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x28810Cu, 0x288114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288114u;
label_288114:
    // 0x288114: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x288114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288118: 0xc089bfc  jal         func_226FF0
    ctx->pc = 0x288118u;
    SET_GPR_U32(ctx, 31, 0x288120u);
    ctx->pc = 0x28811Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288118u;
    // 0x28811c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x288118u, 0x288120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288120u;
label_288120:
    // 0x288120: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x288120u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288124: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x288124u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
    // 0x288128: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x288128u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x28812c: 0x34a5d3e8  ori         $a1, $a1, 0xD3E8
    ctx->pc = 0x28812cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54248);
    // 0x288130: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x288130u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    // 0x288134: 0x34a50300  ori         $a1, $a1, 0x300
    ctx->pc = 0x288134u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)768);
    // 0x288138: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x288138u;
    SET_GPR_U32(ctx, 31, 0x288140u);
    ctx->pc = 0x28813Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288138u;
    // 0x28813c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x288138u, 0x288140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288140u;
label_288140:
    // 0x288140: 0x14400149  bnez        $v0, . + 4 + (0x149 << 2)
    ctx->pc = 0x288140u;
    {
        const bool branch_taken_0x288140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288140u;
        // 0x288144: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288140) {
            ctx->pc = 0x288668u;
            goto label_288668;
        }
    }
    ctx->pc = 0x288148u;
    // 0x288148: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x288148u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x28814c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28814cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288150: 0xc089998  jal         func_226660
    ctx->pc = 0x288150u;
    SET_GPR_U32(ctx, 31, 0x288158u);
    ctx->pc = 0x288154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288150u;
    // 0x288154: 0x34a5101f  ori         $a1, $a1, 0x101F (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4127);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x288150u, 0x288158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288158u;
label_288158:
    // 0x288158: 0x14400143  bnez        $v0, . + 4 + (0x143 << 2)
    ctx->pc = 0x288158u;
    {
        const bool branch_taken_0x288158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28815Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288158u;
        // 0x28815c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288158) {
            ctx->pc = 0x288668u;
            goto label_288668;
        }
    }
    ctx->pc = 0x288160u;
    // 0x288160: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x288160u;
    SET_GPR_U32(ctx, 31, 0x288168u);
    ctx->pc = 0x288164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288160u;
    // 0x288164: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x288160u, 0x288168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288168u;
label_288168:
    // 0x288168: 0x1040013f  beqz        $v0, . + 4 + (0x13F << 2)
    ctx->pc = 0x288168u;
    {
        const bool branch_taken_0x288168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28816Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288168u;
        // 0x28816c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288168) {
            ctx->pc = 0x288668u;
            goto label_288668;
        }
    }
    ctx->pc = 0x288170u;
    // 0x288170: 0xc08c68e  jal         func_231A38
    ctx->pc = 0x288170u;
    SET_GPR_U32(ctx, 31, 0x288178u);
    ctx->pc = 0x288174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288170u;
    // 0x288174: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A38u, 0x288170u, 0x288178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288178u;
label_288178:
    // 0x288178: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x288178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x28817c: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x28817Cu;
    {
        const bool branch_taken_0x28817c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x288180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28817Cu;
        // 0x288180: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28817c) {
            ctx->pc = 0x2881A0u;
            goto label_2881a0;
        }
    }
    ctx->pc = 0x288184u;
    // 0x288184: 0xc094fca  jal         func_253F28
    ctx->pc = 0x288184u;
    SET_GPR_U32(ctx, 31, 0x28818Cu);
    ctx->pc = 0x288188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288184u;
    // 0x288188: 0x24110005  addiu       $s1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F28u, 0x288184u, 0x28818Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28818Cu;
label_28818c:
    // 0x28818c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28818cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288190: 0xc094fb4  jal         func_253ED0
    ctx->pc = 0x288190u;
    SET_GPR_U32(ctx, 31, 0x288198u);
    ctx->pc = 0x288194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288190u;
    // 0x288194: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253ED0u, 0x288190u, 0x288198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288198u;
label_288198:
    // 0x288198: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x288198u;
    {
        const bool branch_taken_0x288198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28819Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288198u;
        // 0x28819c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288198) {
            ctx->pc = 0x2881B0u;
            goto label_2881b0;
        }
    }
    ctx->pc = 0x2881A0u;
label_2881a0:
    // 0x2881a0: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x2881A0u;
    SET_GPR_U32(ctx, 31, 0x2881A8u);
    ctx->pc = 0x2881A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2881A0u;
    // 0x2881a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x2881A0u, 0x2881A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2881A8u;
label_2881a8:
    // 0x2881a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2881a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2881ac: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2881acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2881b0:
    // 0x2881b0: 0x162200b9  bne         $s1, $v0, . + 4 + (0xB9 << 2)
    ctx->pc = 0x2881B0u;
    {
        const bool branch_taken_0x2881b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2881B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2881B0u;
        // 0x2881b4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2881b0) {
            ctx->pc = 0x288498u;
            goto label_288498;
        }
    }
    ctx->pc = 0x2881B8u;
    // 0x2881b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2881b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2881bc: 0xc089b98  jal         func_226E60
    ctx->pc = 0x2881BCu;
    SET_GPR_U32(ctx, 31, 0x2881C4u);
    ctx->pc = 0x2881C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2881BCu;
    // 0x2881c0: 0x3c160056  lui         $s6, 0x56 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)86 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x2881BCu, 0x2881C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2881C4u;
label_2881c4:
    // 0x2881c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2881c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2881c8: 0xc08c68e  jal         func_231A38
    ctx->pc = 0x2881C8u;
    SET_GPR_U32(ctx, 31, 0x2881D0u);
    ctx->pc = 0x2881CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2881C8u;
    // 0x2881cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A38u, 0x2881C8u, 0x2881D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2881D0u;
label_2881d0:
    // 0x2881d0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2881d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2881d4: 0x10430097  beq         $v0, $v1, . + 4 + (0x97 << 2)
    ctx->pc = 0x2881D4u;
    {
        const bool branch_taken_0x2881d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2881D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2881D4u;
        // 0x2881d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2881d4) {
            ctx->pc = 0x288434u;
            goto label_288434;
        }
    }
    ctx->pc = 0x2881DCu;
    // 0x2881dc: 0xc095142  jal         func_254508
    ctx->pc = 0x2881DCu;
    SET_GPR_U32(ctx, 31, 0x2881E4u);
    ctx->pc = 0x2881E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2881DCu;
    // 0x2881e0: 0x240501d9  addiu       $a1, $zero, 0x1D9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 473));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254508u, 0x2881DCu, 0x2881E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2881E4u;
label_2881e4:
    // 0x2881e4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2881e4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2881e8: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x2881E8u;
    SET_GPR_U32(ctx, 31, 0x2881F0u);
    ctx->pc = 0x2881ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2881E8u;
    // 0x2881ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2881E8u, 0x2881F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2881F0u;
label_2881f0:
    // 0x2881f0: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x2881f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x2881f4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2881F4u;
    {
        const bool branch_taken_0x2881f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2881F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2881F4u;
        // 0x2881f8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2881f4) {
            ctx->pc = 0x288208u;
            goto label_288208;
        }
    }
    ctx->pc = 0x2881FCu;
    // 0x2881fc: 0xc09eb0c  jal         func_27AC30
    ctx->pc = 0x2881FCu;
    SET_GPR_U32(ctx, 31, 0x288204u);
    ctx->pc = 0x288200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2881FCu;
    // 0x288200: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AC30u, 0x2881FCu, 0x288204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288204u;
label_288204:
    // 0x288204: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x288204u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_288208:
    // 0x288208: 0x1220008a  beqz        $s1, . + 4 + (0x8A << 2)
    ctx->pc = 0x288208u;
    {
        const bool branch_taken_0x288208 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x288208) {
            ctx->pc = 0x288434u;
            goto label_288434;
        }
    }
    ctx->pc = 0x288210u;
    // 0x288210: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x288210u;
    SET_GPR_U32(ctx, 31, 0x288218u);
    ctx->pc = 0x288214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288210u;
    // 0x288214: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x288210u, 0x288218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288218u;
label_288218:
    // 0x288218: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x288218u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x28821c: 0x14600085  bnez        $v1, . + 4 + (0x85 << 2)
    ctx->pc = 0x28821Cu;
    {
        const bool branch_taken_0x28821c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x288220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28821Cu;
        // 0x288220: 0x26c4f430  addiu       $a0, $s6, -0xBD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294964272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28821c) {
            ctx->pc = 0x288434u;
            goto label_288434;
        }
    }
    ctx->pc = 0x288224u;
    // 0x288224: 0x860301be  lh          $v1, 0x1BE($s0)
    ctx->pc = 0x288224u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
    // 0x288228: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x288228u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x28822c: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x28822Cu;
    {
        const bool branch_taken_0x28822c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x288230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28822Cu;
        // 0x288230: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28822c) {
            ctx->pc = 0x288264u;
            goto label_288264;
        }
    }
    ctx->pc = 0x288234u;
    // 0x288234: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x288234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x288238: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x288238u;
    {
        const bool branch_taken_0x288238 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288238u;
        // 0x28823c: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288238) {
            ctx->pc = 0x288250u;
            goto label_288250;
        }
    }
    ctx->pc = 0x288240u;
    // 0x288240: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x288240u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x288244: 0x860201c0  lh          $v0, 0x1C0($s0)
    ctx->pc = 0x288244u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x288248: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x288248u;
    {
        const bool branch_taken_0x288248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x28824Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288248u;
        // 0x28824c: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288248) {
            ctx->pc = 0x288260u;
            goto label_288260;
        }
    }
    ctx->pc = 0x288250u;
label_288250:
    // 0x288250: 0x8e0301c0  lw          $v1, 0x1C0($s0)
    ctx->pc = 0x288250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x288254: 0x24424770  addiu       $v0, $v0, 0x4770
    ctx->pc = 0x288254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18288));
    // 0x288258: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x288258u;
    {
        const bool branch_taken_0x288258 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x288258) {
            ctx->pc = 0x288264u;
            goto label_288264;
        }
    }
    ctx->pc = 0x288260u;
label_288260:
    // 0x288260: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x288260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_288264:
    // 0x288264: 0x14a00073  bnez        $a1, . + 4 + (0x73 << 2)
    ctx->pc = 0x288264u;
    {
        const bool branch_taken_0x288264 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x288268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288264u;
        // 0x288268: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288264) {
            ctx->pc = 0x288434u;
            goto label_288434;
        }
    }
    ctx->pc = 0x28826Cu;
    // 0x28826c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28826cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288270: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x288270u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288274: 0xc099cb4  jal         func_2672D0
    ctx->pc = 0x288274u;
    SET_GPR_U32(ctx, 31, 0x28827Cu);
    ctx->pc = 0x288278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288274u;
    // 0x288278: 0x241201db  addiu       $s2, $zero, 0x1DB (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 475));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2672D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2672D0u, 0x288274u, 0x28827Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28827Cu;
label_28827c:
    // 0x28827c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x28827cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288280: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x288280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288284: 0x240201d9  addiu       $v0, $zero, 0x1D9
    ctx->pc = 0x288284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 473));
    // 0x288288: 0xc08a05a  jal         func_228168
    ctx->pc = 0x288288u;
    SET_GPR_U32(ctx, 31, 0x288290u);
    ctx->pc = 0x28828Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288288u;
    // 0x28828c: 0x53900a  movz        $s2, $v0, $s3 (Delay Slot)
    if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228168u, 0x288288u, 0x288290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288290u;
label_288290:
    // 0x288290: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x288290u;
    {
        const bool branch_taken_0x288290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288290u;
        // 0x288294: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288290) {
            ctx->pc = 0x28835Cu;
            goto label_28835c;
        }
    }
    ctx->pc = 0x288298u;
    // 0x288298: 0xc08a658  jal         func_229960
    ctx->pc = 0x288298u;
    SET_GPR_U32(ctx, 31, 0x2882A0u);
    ctx->pc = 0x28829Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288298u;
    // 0x28829c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229960u, 0x288298u, 0x2882A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2882A0u;
label_2882a0:
    // 0x2882a0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2882a0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2882a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2882a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2882a8: 0xc095142  jal         func_254508
    ctx->pc = 0x2882A8u;
    SET_GPR_U32(ctx, 31, 0x2882B0u);
    ctx->pc = 0x2882ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2882A8u;
    // 0x2882ac: 0x2405027d  addiu       $a1, $zero, 0x27D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 637));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254508u, 0x2882A8u, 0x2882B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2882B0u;
label_2882b0:
    // 0x2882b0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2882b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2882b4: 0x0  nop
    ctx->pc = 0x2882b4u;
    // NOP
    // 0x2882b8: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x2882B8u;
    {
        const bool branch_taken_0x2882b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2882BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2882B8u;
        // 0x2882bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2882b8) {
            ctx->pc = 0x288324u;
            goto label_288324;
        }
    }
    ctx->pc = 0x2882C0u;
    // 0x2882c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2882c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2882c4: 0xc099cb4  jal         func_2672D0
    ctx->pc = 0x2882C4u;
    SET_GPR_U32(ctx, 31, 0x2882CCu);
    ctx->pc = 0x2882C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2882C4u;
    // 0x2882c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2672D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2672D0u, 0x2882C4u, 0x2882CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2882CCu;
label_2882cc:
    // 0x2882cc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2882ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2882d0: 0x14430058  bne         $v0, $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x2882D0u;
    {
        const bool branch_taken_0x2882d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2882D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2882D0u;
        // 0x2882d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2882d0) {
            ctx->pc = 0x288434u;
            goto label_288434;
        }
    }
    ctx->pc = 0x2882D8u;
    // 0x2882d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2882d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2882dc: 0xc099cb4  jal         func_2672D0
    ctx->pc = 0x2882DCu;
    SET_GPR_U32(ctx, 31, 0x2882E4u);
    ctx->pc = 0x2882E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2882DCu;
    // 0x2882e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2672D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2672D0u, 0x2882DCu, 0x2882E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2882E4u;
label_2882e4:
    // 0x2882e4: 0x14400053  bnez        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x2882E4u;
    {
        const bool branch_taken_0x2882e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2882E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2882E4u;
        // 0x2882e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2882e4) {
            ctx->pc = 0x288434u;
            goto label_288434;
        }
    }
    ctx->pc = 0x2882ECu;
    // 0x2882ec: 0xc089548  jal         func_225520
    ctx->pc = 0x2882ECu;
    SET_GPR_U32(ctx, 31, 0x2882F4u);
    ctx->pc = 0x2882F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2882ECu;
    // 0x2882f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225520u, 0x2882ECu, 0x2882F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2882F4u;
label_2882f4:
    // 0x2882f4: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x2882F4u;
    {
        const bool branch_taken_0x2882f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2882F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2882F4u;
        // 0x2882f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2882f4) {
            ctx->pc = 0x288434u;
            goto label_288434;
        }
    }
    ctx->pc = 0x2882FCu;
    // 0x2882fc: 0xc08702a  jal         func_21C0A8
    ctx->pc = 0x2882FCu;
    SET_GPR_U32(ctx, 31, 0x288304u);
    ctx->pc = 0x288300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2882FCu;
    // 0x288300: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C0A8u, 0x2882FCu, 0x288304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288304u;
label_288304:
    // 0x288304: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x288304u;
    {
        const bool branch_taken_0x288304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288304u;
        // 0x288308: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288304) {
            ctx->pc = 0x288434u;
            goto label_288434;
        }
    }
    ctx->pc = 0x28830Cu;
    // 0x28830c: 0xc089b0c  jal         func_226C30
    ctx->pc = 0x28830Cu;
    SET_GPR_U32(ctx, 31, 0x288314u);
    ctx->pc = 0x288310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28830Cu;
    // 0x288310: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226C30u, 0x28830Cu, 0x288314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288314u;
label_288314:
    // 0x288314: 0xc0991ce  jal         func_264738
    ctx->pc = 0x288314u;
    SET_GPR_U32(ctx, 31, 0x28831Cu);
    ctx->pc = 0x288318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288314u;
    // 0x288318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264738u, 0x288314u, 0x28831Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28831Cu;
label_28831c:
    // 0x28831c: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x28831Cu;
    {
        const bool branch_taken_0x28831c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28831Cu;
        // 0x288320: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28831c) {
            ctx->pc = 0x288668u;
            goto label_288668;
        }
    }
    ctx->pc = 0x288324u;
label_288324:
    // 0x288324: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x288324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288328: 0xc095142  jal         func_254508
    ctx->pc = 0x288328u;
    SET_GPR_U32(ctx, 31, 0x288330u);
    ctx->pc = 0x28832Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288328u;
    // 0x28832c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254508u, 0x288328u, 0x288330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288330u;
label_288330:
    // 0x288330: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x288330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x288334: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x288334u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x288338: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x288338u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28833c: 0x0  nop
    ctx->pc = 0x28833cu;
    // NOP
    // 0x288340: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x288340u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x288344: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x288344u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x288348: 0x0  nop
    ctx->pc = 0x288348u;
    // NOP
    // 0x28834c: 0x45000039  bc1f        . + 4 + (0x39 << 2)
    ctx->pc = 0x28834Cu;
    {
        const bool branch_taken_0x28834c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x288350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28834Cu;
        // 0x288350: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28834c) {
            ctx->pc = 0x288434u;
            goto label_288434;
        }
    }
    ctx->pc = 0x288354u;
    // 0x288354: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x288354u;
    {
        const bool branch_taken_0x288354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288354u;
        // 0x288358: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288354) {
            ctx->pc = 0x28866Cu;
            goto label_28866c;
        }
    }
    ctx->pc = 0x28835Cu;
label_28835c:
    // 0x28835c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28835cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288360: 0xc089548  jal         func_225520
    ctx->pc = 0x288360u;
    SET_GPR_U32(ctx, 31, 0x288368u);
    ctx->pc = 0x288364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288360u;
    // 0x288364: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225520u, 0x288360u, 0x288368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288368u;
label_288368:
    // 0x288368: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x288368u;
    {
        const bool branch_taken_0x288368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x288368) {
            ctx->pc = 0x288434u;
            goto label_288434;
        }
    }
    ctx->pc = 0x288370u;
    // 0x288370: 0xde2300e0  ld          $v1, 0xE0($s1)
    ctx->pc = 0x288370u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x288374: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x288374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x288378: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x288378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x28837c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x28837cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x288380: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x288380u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x288384: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x288384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x288388: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x288388u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x28838c: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x28838Cu;
    {
        const bool branch_taken_0x28838c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28838Cu;
        // 0x288390: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28838c) {
            ctx->pc = 0x288434u;
            goto label_288434;
        }
    }
    ctx->pc = 0x288394u;
    // 0x288394: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x288394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x288398: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x288398u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x28839c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x28839cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2883a0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2883a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2883a4: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2883A4u;
    {
        const bool branch_taken_0x2883a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2883A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2883A4u;
        // 0x2883a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2883a4) {
            ctx->pc = 0x288434u;
            goto label_288434;
        }
    }
    ctx->pc = 0x2883ACu;
    // 0x2883ac: 0xc08702a  jal         func_21C0A8
    ctx->pc = 0x2883ACu;
    SET_GPR_U32(ctx, 31, 0x2883B4u);
    ctx->pc = 0x2883B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2883ACu;
    // 0x2883b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C0A8u, 0x2883ACu, 0x2883B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2883B4u;
label_2883b4:
    // 0x2883b4: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2883B4u;
    {
        const bool branch_taken_0x2883b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2883b4) {
            ctx->pc = 0x288434u;
            goto label_288434;
        }
    }
    ctx->pc = 0x2883BCu;
    // 0x2883bc: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x2883bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
    // 0x2883c0: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x2883c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x2883c4: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x2883c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
    // 0x2883c8: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x2883c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    // 0x2883cc: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x2883ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
    // 0x2883d0: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x2883D0u;
    SET_GPR_U32(ctx, 31, 0x2883D8u);
    ctx->pc = 0x2883D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2883D0u;
    // 0x2883d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x2883D0u, 0x2883D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2883D8u;
label_2883d8:
    // 0x2883d8: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2883D8u;
    {
        const bool branch_taken_0x2883d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2883DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2883D8u;
        // 0x2883dc: 0x2e660001  sltiu       $a2, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2883d8) {
            ctx->pc = 0x288434u;
            goto label_288434;
        }
    }
    ctx->pc = 0x2883E0u;
    // 0x2883e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2883e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2883e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2883e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2883e8: 0xc09dec8  jal         func_277B20
    ctx->pc = 0x2883E8u;
    SET_GPR_U32(ctx, 31, 0x2883F0u);
    ctx->pc = 0x2883ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2883E8u;
    // 0x2883ec: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277B20u, 0x2883E8u, 0x2883F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2883F0u;
label_2883f0:
    // 0x2883f0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2883F0u;
    {
        const bool branch_taken_0x2883f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2883f0) {
            ctx->pc = 0x288434u;
            goto label_288434;
        }
    }
    ctx->pc = 0x2883F8u;
    // 0x2883f8: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x2883F8u;
    SET_GPR_U32(ctx, 31, 0x288400u);
    ctx->pc = 0x2883FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2883F8u;
    // 0x2883fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2883F8u, 0x288400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288400u;
label_288400:
    // 0x288400: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x288400u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x288404: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x288404u;
    {
        const bool branch_taken_0x288404 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x288408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288404u;
        // 0x288408: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288404) {
            ctx->pc = 0x288414u;
            goto label_288414;
        }
    }
    ctx->pc = 0x28840Cu;
    // 0x28840c: 0xc089b0c  jal         func_226C30
    ctx->pc = 0x28840Cu;
    SET_GPR_U32(ctx, 31, 0x288414u);
    ctx->pc = 0x288410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28840Cu;
    // 0x288410: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226C30u, 0x28840Cu, 0x288414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288414u;
label_288414:
    // 0x288414: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x288414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288418: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x288418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28841c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28841cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288420: 0x24072000  addiu       $a3, $zero, 0x2000
    ctx->pc = 0x288420u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x288424: 0xc098ab2  jal         func_262AC8
    ctx->pc = 0x288424u;
    SET_GPR_U32(ctx, 31, 0x28842Cu);
    ctx->pc = 0x288428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288424u;
    // 0x288428: 0x3c080040  lui         $t0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AC8u, 0x288424u, 0x28842Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28842Cu;
label_28842c:
    // 0x28842c: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x28842Cu;
    {
        const bool branch_taken_0x28842c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28842Cu;
        // 0x288430: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28842c) {
            ctx->pc = 0x288668u;
            goto label_288668;
        }
    }
    ctx->pc = 0x288434u;
label_288434:
    // 0x288434: 0xc088e94  jal         func_223A50
    ctx->pc = 0x288434u;
    SET_GPR_U32(ctx, 31, 0x28843Cu);
    ctx->pc = 0x288438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288434u;
    // 0x288438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A50u, 0x288434u, 0x28843Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28843Cu;
label_28843c:
    // 0x28843c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x28843Cu;
    {
        const bool branch_taken_0x28843c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28843Cu;
        // 0x288440: 0x241201d8  addiu       $s2, $zero, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28843c) {
            ctx->pc = 0x288488u;
            goto label_288488;
        }
    }
    ctx->pc = 0x288444u;
    // 0x288444: 0xc088e98  jal         func_223A60
    ctx->pc = 0x288444u;
    SET_GPR_U32(ctx, 31, 0x28844Cu);
    ctx->pc = 0x288448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288444u;
    // 0x288448: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A60u, 0x288444u, 0x28844Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28844Cu;
label_28844c:
    // 0x28844c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x28844Cu;
    {
        const bool branch_taken_0x28844c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28844Cu;
        // 0x288450: 0x241201d8  addiu       $s2, $zero, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28844c) {
            ctx->pc = 0x288488u;
            goto label_288488;
        }
    }
    ctx->pc = 0x288454u;
    // 0x288454: 0xc088ea6  jal         func_223A98
    ctx->pc = 0x288454u;
    SET_GPR_U32(ctx, 31, 0x28845Cu);
    ctx->pc = 0x288458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288454u;
    // 0x288458: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A98u, 0x288454u, 0x28845Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28845Cu;
label_28845c:
    // 0x28845c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x28845Cu;
    {
        const bool branch_taken_0x28845c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28845Cu;
        // 0x288460: 0x241201d8  addiu       $s2, $zero, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28845c) {
            ctx->pc = 0x288488u;
            goto label_288488;
        }
    }
    ctx->pc = 0x288464u;
    // 0x288464: 0xc08a0d0  jal         func_228340
    ctx->pc = 0x288464u;
    SET_GPR_U32(ctx, 31, 0x28846Cu);
    ctx->pc = 0x288468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288464u;
    // 0x288468: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x288464u, 0x28846Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28846Cu;
label_28846c:
    // 0x28846c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28846Cu;
    {
        const bool branch_taken_0x28846c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28846Cu;
        // 0x288470: 0x241201d3  addiu       $s2, $zero, 0x1D3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 467));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28846c) {
            ctx->pc = 0x288488u;
            goto label_288488;
        }
    }
    ctx->pc = 0x288474u;
    // 0x288474: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x288474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288478: 0xc088e90  jal         func_223A40
    ctx->pc = 0x288478u;
    SET_GPR_U32(ctx, 31, 0x288480u);
    ctx->pc = 0x28847Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288478u;
    // 0x28847c: 0x241201d7  addiu       $s2, $zero, 0x1D7 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 471));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A40u, 0x288478u, 0x288480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288480u;
label_288480:
    // 0x288480: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x288480u;
    {
        const bool branch_taken_0x288480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x288480) {
            ctx->pc = 0x288484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288480u;
            // 0x288484: 0x241201d3  addiu       $s2, $zero, 0x1D3 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 467));
            ctx->in_delay_slot = false;
            ctx->pc = 0x288488u;
            goto label_288488;
        }
    }
    ctx->pc = 0x288488u;
label_288488:
    // 0x288488: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x288488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x28848c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x28848cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x288490: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x288490u;
    {
        const bool branch_taken_0x288490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288490u;
        // 0x288494: 0x26c4f430  addiu       $a0, $s6, -0xBD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294964272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288490) {
            ctx->pc = 0x288588u;
            goto label_288588;
        }
    }
    ctx->pc = 0x288498u;
label_288498:
    // 0x288498: 0x1622001d  bne         $s1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x288498u;
    {
        const bool branch_taken_0x288498 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x28849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288498u;
        // 0x28849c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288498) {
            ctx->pc = 0x288510u;
            goto label_288510;
        }
    }
    ctx->pc = 0x2884A0u;
    // 0x2884a0: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2884a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2884a4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2884a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2884a8: 0xc088e94  jal         func_223A50
    ctx->pc = 0x2884A8u;
    SET_GPR_U32(ctx, 31, 0x2884B0u);
    ctx->pc = 0x2884ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2884A8u;
    // 0x2884ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A50u, 0x2884A8u, 0x2884B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2884B0u;
label_2884b0:
    // 0x2884b0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2884B0u;
    {
        const bool branch_taken_0x2884b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2884B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2884B0u;
        // 0x2884b4: 0x241201fb  addiu       $s2, $zero, 0x1FB (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 507));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2884b0) {
            ctx->pc = 0x2884D8u;
            goto label_2884d8;
        }
    }
    ctx->pc = 0x2884B8u;
    // 0x2884b8: 0xc088e98  jal         func_223A60
    ctx->pc = 0x2884B8u;
    SET_GPR_U32(ctx, 31, 0x2884C0u);
    ctx->pc = 0x2884BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2884B8u;
    // 0x2884bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A60u, 0x2884B8u, 0x2884C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2884C0u;
label_2884c0:
    // 0x2884c0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2884C0u;
    {
        const bool branch_taken_0x2884c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2884C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2884C0u;
        // 0x2884c4: 0x241201fb  addiu       $s2, $zero, 0x1FB (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 507));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2884c0) {
            ctx->pc = 0x2884D8u;
            goto label_2884d8;
        }
    }
    ctx->pc = 0x2884C8u;
    // 0x2884c8: 0xc088ea6  jal         func_223A98
    ctx->pc = 0x2884C8u;
    SET_GPR_U32(ctx, 31, 0x2884D0u);
    ctx->pc = 0x2884CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2884C8u;
    // 0x2884cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A98u, 0x2884C8u, 0x2884D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2884D0u;
label_2884d0:
    // 0x2884d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2884D0u;
    {
        const bool branch_taken_0x2884d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2884D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2884D0u;
        // 0x2884d4: 0x241201fb  addiu       $s2, $zero, 0x1FB (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 507));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2884d0) {
            ctx->pc = 0x2884E0u;
            goto label_2884e0;
        }
    }
    ctx->pc = 0x2884D8u;
label_2884d8:
    // 0x2884d8: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2884D8u;
    {
        const bool branch_taken_0x2884d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2884DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2884D8u;
        // 0x2884dc: 0x3c160056  lui         $s6, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2884d8) {
            ctx->pc = 0x288584u;
            goto label_288584;
        }
    }
    ctx->pc = 0x2884E0u;
label_2884e0:
    // 0x2884e0: 0xc08a0d0  jal         func_228340
    ctx->pc = 0x2884E0u;
    SET_GPR_U32(ctx, 31, 0x2884E8u);
    ctx->pc = 0x2884E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2884E0u;
    // 0x2884e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x2884E0u, 0x2884E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2884E8u;
label_2884e8:
    // 0x2884e8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2884E8u;
    {
        const bool branch_taken_0x2884e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2884ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2884E8u;
        // 0x2884ec: 0x241201f9  addiu       $s2, $zero, 0x1F9 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 505));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2884e8) {
            ctx->pc = 0x288508u;
            goto label_288508;
        }
    }
    ctx->pc = 0x2884F0u;
    // 0x2884f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2884f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2884f4: 0xc088e90  jal         func_223A40
    ctx->pc = 0x2884F4u;
    SET_GPR_U32(ctx, 31, 0x2884FCu);
    ctx->pc = 0x2884F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2884F4u;
    // 0x2884f8: 0x241201fa  addiu       $s2, $zero, 0x1FA (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 506));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A40u, 0x2884F4u, 0x2884FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2884FCu;
label_2884fc:
    // 0x2884fc: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2884FCu;
    {
        const bool branch_taken_0x2884fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2884FCu;
        // 0x288500: 0x3c160056  lui         $s6, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2884fc) {
            ctx->pc = 0x288584u;
            goto label_288584;
        }
    }
    ctx->pc = 0x288504u;
    // 0x288504: 0x241201f9  addiu       $s2, $zero, 0x1F9
    ctx->pc = 0x288504u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 505));
label_288508:
    // 0x288508: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x288508u;
    {
        const bool branch_taken_0x288508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288508u;
        // 0x28850c: 0x3c160056  lui         $s6, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288508) {
            ctx->pc = 0x288584u;
            goto label_288584;
        }
    }
    ctx->pc = 0x288510u;
label_288510:
    // 0x288510: 0x16220055  bne         $s1, $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x288510u;
    {
        const bool branch_taken_0x288510 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x288514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288510u;
        // 0x288514: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288510) {
            ctx->pc = 0x288668u;
            goto label_288668;
        }
    }
    ctx->pc = 0x288518u;
    // 0x288518: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x288518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x28851c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x28851cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x288520: 0xc088e94  jal         func_223A50
    ctx->pc = 0x288520u;
    SET_GPR_U32(ctx, 31, 0x288528u);
    ctx->pc = 0x288524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288520u;
    // 0x288524: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A50u, 0x288520u, 0x288528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288528u;
label_288528:
    // 0x288528: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x288528u;
    {
        const bool branch_taken_0x288528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28852Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288528u;
        // 0x28852c: 0x24120229  addiu       $s2, $zero, 0x229 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 553));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288528) {
            ctx->pc = 0x288550u;
            goto label_288550;
        }
    }
    ctx->pc = 0x288530u;
    // 0x288530: 0xc088e98  jal         func_223A60
    ctx->pc = 0x288530u;
    SET_GPR_U32(ctx, 31, 0x288538u);
    ctx->pc = 0x288534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288530u;
    // 0x288534: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A60u, 0x288530u, 0x288538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288538u;
label_288538:
    // 0x288538: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x288538u;
    {
        const bool branch_taken_0x288538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288538u;
        // 0x28853c: 0x24120229  addiu       $s2, $zero, 0x229 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 553));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288538) {
            ctx->pc = 0x288550u;
            goto label_288550;
        }
    }
    ctx->pc = 0x288540u;
    // 0x288540: 0xc088ea6  jal         func_223A98
    ctx->pc = 0x288540u;
    SET_GPR_U32(ctx, 31, 0x288548u);
    ctx->pc = 0x288544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288540u;
    // 0x288544: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A98u, 0x288540u, 0x288548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288548u;
label_288548:
    // 0x288548: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x288548u;
    {
        const bool branch_taken_0x288548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28854Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288548u;
        // 0x28854c: 0x24120229  addiu       $s2, $zero, 0x229 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 553));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288548) {
            ctx->pc = 0x288558u;
            goto label_288558;
        }
    }
    ctx->pc = 0x288550u;
label_288550:
    // 0x288550: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x288550u;
    {
        const bool branch_taken_0x288550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288550u;
        // 0x288554: 0x3c160056  lui         $s6, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288550) {
            ctx->pc = 0x288584u;
            goto label_288584;
        }
    }
    ctx->pc = 0x288558u;
label_288558:
    // 0x288558: 0xc08a0d0  jal         func_228340
    ctx->pc = 0x288558u;
    SET_GPR_U32(ctx, 31, 0x288560u);
    ctx->pc = 0x28855Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288558u;
    // 0x28855c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x288558u, 0x288560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288560u;
label_288560:
    // 0x288560: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x288560u;
    {
        const bool branch_taken_0x288560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288560u;
        // 0x288564: 0x24120227  addiu       $s2, $zero, 0x227 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 551));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288560) {
            ctx->pc = 0x288580u;
            goto label_288580;
        }
    }
    ctx->pc = 0x288568u;
    // 0x288568: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x288568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28856c: 0xc088e90  jal         func_223A40
    ctx->pc = 0x28856Cu;
    SET_GPR_U32(ctx, 31, 0x288574u);
    ctx->pc = 0x288570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28856Cu;
    // 0x288570: 0x24120228  addiu       $s2, $zero, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A40u, 0x28856Cu, 0x288574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288574u;
label_288574:
    // 0x288574: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x288574u;
    {
        const bool branch_taken_0x288574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288574u;
        // 0x288578: 0x3c160056  lui         $s6, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288574) {
            ctx->pc = 0x288584u;
            goto label_288584;
        }
    }
    ctx->pc = 0x28857Cu;
    // 0x28857c: 0x24120227  addiu       $s2, $zero, 0x227
    ctx->pc = 0x28857cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 551));
label_288580:
    // 0x288580: 0x3c160056  lui         $s6, 0x56
    ctx->pc = 0x288580u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)86 << 16));
label_288584:
    // 0x288584: 0x26c4f430  addiu       $a0, $s6, -0xBD0
    ctx->pc = 0x288584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294964272));
label_288588:
    // 0x288588: 0x860301be  lh          $v1, 0x1BE($s0)
    ctx->pc = 0x288588u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
    // 0x28858c: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x28858cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x288590: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x288590u;
    {
        const bool branch_taken_0x288590 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x288594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288590u;
        // 0x288594: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288590) {
            ctx->pc = 0x2885C8u;
            goto label_2885c8;
        }
    }
    ctx->pc = 0x288598u;
    // 0x288598: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x288598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28859c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28859Cu;
    {
        const bool branch_taken_0x28859c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2885A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28859Cu;
        // 0x2885a0: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28859c) {
            ctx->pc = 0x2885B4u;
            goto label_2885b4;
        }
    }
    ctx->pc = 0x2885A4u;
    // 0x2885a4: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x2885a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2885a8: 0x860201c0  lh          $v0, 0x1C0($s0)
    ctx->pc = 0x2885a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x2885ac: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2885ACu;
    {
        const bool branch_taken_0x2885ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2885B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2885ACu;
        // 0x2885b0: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2885ac) {
            ctx->pc = 0x2885C4u;
            goto label_2885c4;
        }
    }
    ctx->pc = 0x2885B4u;
label_2885b4:
    // 0x2885b4: 0x8e0301c0  lw          $v1, 0x1C0($s0)
    ctx->pc = 0x2885b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x2885b8: 0x24424770  addiu       $v0, $v0, 0x4770
    ctx->pc = 0x2885b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18288));
    // 0x2885bc: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2885BCu;
    {
        const bool branch_taken_0x2885bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2885bc) {
            ctx->pc = 0x2885C8u;
            goto label_2885c8;
        }
    }
    ctx->pc = 0x2885C4u;
label_2885c4:
    // 0x2885c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2885c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2885c8:
    // 0x2885c8: 0x14a0001a  bnez        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2885C8u;
    {
        const bool branch_taken_0x2885c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2885CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2885C8u;
        // 0x2885cc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2885c8) {
            ctx->pc = 0x288634u;
            goto label_288634;
        }
    }
    ctx->pc = 0x2885D0u;
    // 0x2885d0: 0xc087502  jal         func_21D408
    ctx->pc = 0x2885D0u;
    SET_GPR_U32(ctx, 31, 0x2885D8u);
    ctx->pc = 0x2885D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2885D0u;
    // 0x2885d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2885D0u, 0x2885D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2885D8u;
label_2885d8:
    // 0x2885d8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2885d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2885dc: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2885DCu;
    {
        const bool branch_taken_0x2885dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2885E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2885DCu;
        // 0x2885e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2885dc) {
            ctx->pc = 0x288608u;
            goto label_288608;
        }
    }
    ctx->pc = 0x2885E4u;
    // 0x2885e4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2885e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2885e8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2885e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2885ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2885ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2885f0: 0xc09eb60  jal         func_27AD80
    ctx->pc = 0x2885F0u;
    SET_GPR_U32(ctx, 31, 0x2885F8u);
    ctx->pc = 0x2885F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2885F0u;
    // 0x2885f4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AD80u, 0x2885F0u, 0x2885F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2885F8u;
label_2885f8:
    // 0x2885f8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2885f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2885fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2885fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288600: 0xc089b34  jal         func_226CD0
    ctx->pc = 0x288600u;
    SET_GPR_U32(ctx, 31, 0x288608u);
    ctx->pc = 0x288604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288600u;
    // 0x288604: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226CD0u, 0x288600u, 0x288608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288608u;
label_288608:
    // 0x288608: 0x1280000d  beqz        $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x288608u;
    {
        const bool branch_taken_0x288608 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x28860Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288608u;
        // 0x28860c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288608) {
            ctx->pc = 0x288640u;
            goto label_288640;
        }
    }
    ctx->pc = 0x288610u;
    // 0x288610: 0xc040596  jal         func_101658
    ctx->pc = 0x288610u;
    SET_GPR_U32(ctx, 31, 0x288618u);
    ctx->pc = 0x288614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288610u;
    // 0x288614: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101658u, 0x288610u, 0x288618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288618u;
label_288618:
    // 0x288618: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x288618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28861c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x28861cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x288620: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x288620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288624: 0xc088736  jal         func_221CD8
    ctx->pc = 0x288624u;
    SET_GPR_U32(ctx, 31, 0x28862Cu);
    ctx->pc = 0x288628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288624u;
    // 0x288628: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221CD8u, 0x288624u, 0x28862Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28862Cu;
label_28862c:
    // 0x28862c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x28862Cu;
    {
        const bool branch_taken_0x28862c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28862c) {
            ctx->pc = 0x288640u;
            goto label_288640;
        }
    }
    ctx->pc = 0x288634u;
label_288634:
    // 0x288634: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x288634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288638: 0xc089abe  jal         func_226AF8
    ctx->pc = 0x288638u;
    SET_GPR_U32(ctx, 31, 0x288640u);
    ctx->pc = 0x28863Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288638u;
    // 0x28863c: 0x8c45bd30  lw          $a1, -0x42D0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226AF8u, 0x288638u, 0x288640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288640u;
label_288640:
    // 0x288640: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x288640u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x288644: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x288644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288648: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x288648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28864c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28864cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288650: 0xc08a5dc  jal         func_229770
    ctx->pc = 0x288650u;
    SET_GPR_U32(ctx, 31, 0x288658u);
    ctx->pc = 0x288654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288650u;
    // 0x288654: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229770u, 0x288650u, 0x288658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288658u;
label_288658:
    // 0x288658: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x288658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28865c: 0xc09879e  jal         func_261E78
    ctx->pc = 0x28865Cu;
    SET_GPR_U32(ctx, 31, 0x288664u);
    ctx->pc = 0x288660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28865Cu;
    // 0x288660: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261E78u, 0x28865Cu, 0x288664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288664u;
label_288664:
    // 0x288664: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x288664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_288668:
    // 0x288668: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x288668u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_28866c:
    // 0x28866c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x28866cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x288670: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x288670u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x288674: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x288674u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x288678: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x288678u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28867c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x28867cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x288680: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x288680u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x288684: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x288684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288688: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x288688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28868c: 0x3e00008  jr          $ra
    ctx->pc = 0x28868Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28868Cu;
        // 0x288690: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28868Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288694u;
    // 0x288694: 0x0  nop
    ctx->pc = 0x288694u;
    // NOP
    ctx->pc = 0x288698u;
}
