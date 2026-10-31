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

// Function: sub_00286CC8
// Address: 0x286cc8 - 0x287730
void sub_00286CC8_0x286cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286CC8_0x286cc8");
#endif

    switch (ctx->pc) {
        case 0x286d00u: goto label_286d00;
        case 0x286d0cu: goto label_286d0c;
        case 0x286d18u: goto label_286d18;
        case 0x286d38u: goto label_286d38;
        case 0x286d50u: goto label_286d50;
        case 0x286d70u: goto label_286d70;
        case 0x286d84u: goto label_286d84;
        case 0x286d98u: goto label_286d98;
        case 0x286dc4u: goto label_286dc4;
        case 0x286dd4u: goto label_286dd4;
        case 0x286ddcu: goto label_286ddc;
        case 0x286de8u: goto label_286de8;
        case 0x286e04u: goto label_286e04;
        case 0x286e18u: goto label_286e18;
        case 0x286e28u: goto label_286e28;
        case 0x286e44u: goto label_286e44;
        case 0x286e50u: goto label_286e50;
        case 0x286e60u: goto label_286e60;
        case 0x286e80u: goto label_286e80;
        case 0x286e98u: goto label_286e98;
        case 0x286ea8u: goto label_286ea8;
        case 0x286eb8u: goto label_286eb8;
        case 0x286ec8u: goto label_286ec8;
        case 0x286ee8u: goto label_286ee8;
        case 0x286f00u: goto label_286f00;
        case 0x286f10u: goto label_286f10;
        case 0x286f20u: goto label_286f20;
        case 0x286f40u: goto label_286f40;
        case 0x286f50u: goto label_286f50;
        case 0x286f70u: goto label_286f70;
        case 0x286f84u: goto label_286f84;
        case 0x286f94u: goto label_286f94;
        case 0x286fbcu: goto label_286fbc;
        case 0x286fc8u: goto label_286fc8;
        case 0x286fd0u: goto label_286fd0;
        case 0x286fe8u: goto label_286fe8;
        case 0x286ff4u: goto label_286ff4;
        case 0x287004u: goto label_287004;
        case 0x287014u: goto label_287014;
        case 0x287028u: goto label_287028;
        case 0x287038u: goto label_287038;
        case 0x287048u: goto label_287048;
        case 0x287058u: goto label_287058;
        case 0x2870acu: goto label_2870ac;
        case 0x2870b8u: goto label_2870b8;
        case 0x2870c0u: goto label_2870c0;
        case 0x2870d8u: goto label_2870d8;
        case 0x2870e4u: goto label_2870e4;
        case 0x2870f4u: goto label_2870f4;
        case 0x287104u: goto label_287104;
        case 0x287118u: goto label_287118;
        case 0x28714cu: goto label_28714c;
        case 0x28715cu: goto label_28715c;
        case 0x287164u: goto label_287164;
        case 0x28717cu: goto label_28717c;
        case 0x287188u: goto label_287188;
        case 0x287198u: goto label_287198;
        case 0x2871a8u: goto label_2871a8;
        case 0x2871c0u: goto label_2871c0;
        case 0x2871d0u: goto label_2871d0;
        case 0x2871e0u: goto label_2871e0;
        case 0x287200u: goto label_287200;
        case 0x28720cu: goto label_28720c;
        case 0x287218u: goto label_287218;
        case 0x28729cu: goto label_28729c;
        case 0x2872b0u: goto label_2872b0;
        case 0x2872c4u: goto label_2872c4;
        case 0x287304u: goto label_287304;
        case 0x287348u: goto label_287348;
        case 0x287394u: goto label_287394;
        case 0x2873a4u: goto label_2873a4;
        case 0x2873f0u: goto label_2873f0;
        case 0x287440u: goto label_287440;
        case 0x28745cu: goto label_28745c;
        case 0x287464u: goto label_287464;
        case 0x2874b0u: goto label_2874b0;
        case 0x2874ccu: goto label_2874cc;
        case 0x2874d4u: goto label_2874d4;
        case 0x2874e8u: goto label_2874e8;
        case 0x287504u: goto label_287504;
        case 0x28750cu: goto label_28750c;
        case 0x28751cu: goto label_28751c;
        case 0x28753cu: goto label_28753c;
        case 0x287564u: goto label_287564;
        case 0x287574u: goto label_287574;
        case 0x28757cu: goto label_28757c;
        case 0x287594u: goto label_287594;
        case 0x2875a0u: goto label_2875a0;
        case 0x2875b4u: goto label_2875b4;
        case 0x2875bcu: goto label_2875bc;
        case 0x2875d0u: goto label_2875d0;
        case 0x2875e4u: goto label_2875e4;
        case 0x2875ecu: goto label_2875ec;
        case 0x2875fcu: goto label_2875fc;
        case 0x28760cu: goto label_28760c;
        case 0x287620u: goto label_287620;
        case 0x287628u: goto label_287628;
        case 0x28763cu: goto label_28763c;
        case 0x28764cu: goto label_28764c;
        case 0x28765cu: goto label_28765c;
        case 0x28766cu: goto label_28766c;
        case 0x287680u: goto label_287680;
        case 0x28769cu: goto label_28769c;
        case 0x2876acu: goto label_2876ac;
        case 0x2876c8u: goto label_2876c8;
        case 0x2876e0u: goto label_2876e0;
        case 0x2876f8u: goto label_2876f8;
        default: break;
    }

    ctx->pc = 0x286cc8u;

    // 0x286cc8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x286cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x286ccc: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x286cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x286cd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x286cd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286cd4: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x286cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x286cd8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x286cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x286cdc: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x286cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x286ce0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x286ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x286ce4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x286ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x286ce8: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x286ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x286cec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x286cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x286cf0: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x286cf0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x286cf4: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x286cf4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x286cf8: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x286CF8u;
    SET_GPR_U32(ctx, 31, 0x286D00u);
    ctx->pc = 0x286CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286CF8u;
    // 0x286cfc: 0xe7b40090  swc1        $f20, 0x90($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x286CF8u, 0x286D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286D00u;
label_286d00:
    // 0x286d00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286d04: 0xc089b98  jal         func_226E60
    ctx->pc = 0x286D04u;
    SET_GPR_U32(ctx, 31, 0x286D0Cu);
    ctx->pc = 0x286D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286D04u;
    // 0x286d08: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x286D04u, 0x286D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286D0Cu;
label_286d0c:
    // 0x286d0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286d10: 0xc089baa  jal         func_226EA8
    ctx->pc = 0x286D10u;
    SET_GPR_U32(ctx, 31, 0x286D18u);
    ctx->pc = 0x286D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286D10u;
    // 0x286d14: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226EA8u, 0x286D10u, 0x286D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286D18u;
label_286d18:
    // 0x286d18: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x286d18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286d1c: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x286d1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
    // 0x286d20: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x286d20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x286d24: 0x34a5d3e8  ori         $a1, $a1, 0xD3E8
    ctx->pc = 0x286d24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54248);
    // 0x286d28: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x286d28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    // 0x286d2c: 0x34a50300  ori         $a1, $a1, 0x300
    ctx->pc = 0x286d2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)768);
    // 0x286d30: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x286D30u;
    SET_GPR_U32(ctx, 31, 0x286D38u);
    ctx->pc = 0x286D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286D30u;
    // 0x286d34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x286D30u, 0x286D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286D38u;
label_286d38:
    // 0x286d38: 0x14400270  bnez        $v0, . + 4 + (0x270 << 2)
    ctx->pc = 0x286D38u;
    {
        const bool branch_taken_0x286d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D38u;
        // 0x286d3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d38) {
            ctx->pc = 0x2876FCu;
            goto label_2876fc;
        }
    }
    ctx->pc = 0x286D40u;
    // 0x286d40: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x286d40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x286d44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286d48: 0xc089998  jal         func_226660
    ctx->pc = 0x286D48u;
    SET_GPR_U32(ctx, 31, 0x286D50u);
    ctx->pc = 0x286D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286D48u;
    // 0x286d4c: 0x34a5101f  ori         $a1, $a1, 0x101F (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4127);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x286D48u, 0x286D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286D50u;
label_286d50:
    // 0x286d50: 0x1440026a  bnez        $v0, . + 4 + (0x26A << 2)
    ctx->pc = 0x286D50u;
    {
        const bool branch_taken_0x286d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D50u;
        // 0x286d54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d50) {
            ctx->pc = 0x2876FCu;
            goto label_2876fc;
        }
    }
    ctx->pc = 0x286D58u;
    // 0x286d58: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x286d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x286d5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286d60: 0xa44000bc  sh          $zero, 0xBC($v0)
    ctx->pc = 0x286d60u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 188), (uint16_t)GPR_U32(ctx, 0));
    // 0x286d64: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x286d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x286d68: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x286D68u;
    SET_GPR_U32(ctx, 31, 0x286D70u);
    ctx->pc = 0x286D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286D68u;
    // 0x286d6c: 0xac6000b8  sw          $zero, 0xB8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 184), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x286D68u, 0x286D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286D70u;
label_286d70:
    // 0x286d70: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x286d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x286d74: 0x5043000c  beql        $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x286D74u;
    {
        const bool branch_taken_0x286d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x286d74) {
            ctx->pc = 0x286D78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286D74u;
            // 0x286d78: 0x820201b0  lb          $v0, 0x1B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286DA8u;
            goto label_286da8;
        }
    }
    ctx->pc = 0x286D7Cu;
    // 0x286d7c: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x286D7Cu;
    SET_GPR_U32(ctx, 31, 0x286D84u);
    ctx->pc = 0x286D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286D7Cu;
    // 0x286d80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x286D7Cu, 0x286D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286D84u;
label_286d84:
    // 0x286d84: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x286d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x286d88: 0x50430007  beql        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x286D88u;
    {
        const bool branch_taken_0x286d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x286d88) {
            ctx->pc = 0x286D8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286D88u;
            // 0x286d8c: 0x820201b0  lb          $v0, 0x1B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286DA8u;
            goto label_286da8;
        }
    }
    ctx->pc = 0x286D90u;
    // 0x286d90: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x286D90u;
    SET_GPR_U32(ctx, 31, 0x286D98u);
    ctx->pc = 0x286D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286D90u;
    // 0x286d94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x286D90u, 0x286D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286D98u;
label_286d98:
    // 0x286d98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x286d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x286d9c: 0x1443006a  bne         $v0, $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x286D9Cu;
    {
        const bool branch_taken_0x286d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x286d9c) {
            ctx->pc = 0x286F48u;
            goto label_286f48;
        }
    }
    ctx->pc = 0x286DA4u;
    // 0x286da4: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x286da4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_286da8:
    // 0x286da8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x286da8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x286dac: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x286DACu;
    {
        const bool branch_taken_0x286dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x286dac) {
            ctx->pc = 0x286DD4u;
            goto label_286dd4;
        }
    }
    ctx->pc = 0x286DB4u;
    // 0x286db4: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x286db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x286db8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x286db8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x286dbc: 0xc09e9b0  jal         func_27A6C0
    ctx->pc = 0x286DBCu;
    SET_GPR_U32(ctx, 31, 0x286DC4u);
    ctx->pc = 0x286DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286DBCu;
    // 0x286dc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A6C0u, 0x286DBCu, 0x286DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286DC4u;
label_286dc4:
    // 0x286dc4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x286dc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286dc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286dcc: 0xc089b34  jal         func_226CD0
    ctx->pc = 0x286DCCu;
    SET_GPR_U32(ctx, 31, 0x286DD4u);
    ctx->pc = 0x286DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286DCCu;
    // 0x286dd0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226CD0u, 0x286DCCu, 0x286DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286DD4u;
label_286dd4:
    // 0x286dd4: 0xc089b98  jal         func_226E60
    ctx->pc = 0x286DD4u;
    SET_GPR_U32(ctx, 31, 0x286DDCu);
    ctx->pc = 0x286DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286DD4u;
    // 0x286dd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x286DD4u, 0x286DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286DDCu;
label_286ddc:
    // 0x286ddc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x286ddcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286de0: 0xc08a0d0  jal         func_228340
    ctx->pc = 0x286DE0u;
    SET_GPR_U32(ctx, 31, 0x286DE8u);
    ctx->pc = 0x286DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286DE0u;
    // 0x286de4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x286DE0u, 0x286DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286DE8u;
label_286de8:
    // 0x286de8: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x286DE8u;
    {
        const bool branch_taken_0x286de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286DE8u;
        // 0x286dec: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286de8) {
            ctx->pc = 0x286E68u;
            goto label_286e68;
        }
    }
    ctx->pc = 0x286DF0u;
    // 0x286df0: 0x8c43031c  lw          $v1, 0x31C($v0)
    ctx->pc = 0x286df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 796)));
    // 0x286df4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x286DF4u;
    {
        const bool branch_taken_0x286df4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x286df4) {
            ctx->pc = 0x286E10u;
            goto label_286e10;
        }
    }
    ctx->pc = 0x286DFCu;
    // 0x286dfc: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x286DFCu;
    SET_GPR_U32(ctx, 31, 0x286E04u);
    ctx->pc = 0x286E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286DFCu;
    // 0x286e00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x286DFCu, 0x286E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286E04u;
label_286e04:
    // 0x286e04: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x286e04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x286e08: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x286E08u;
    {
        const bool branch_taken_0x286e08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x286e08) {
            ctx->pc = 0x286E68u;
            goto label_286e68;
        }
    }
    ctx->pc = 0x286E10u;
label_286e10:
    // 0x286e10: 0xc088e98  jal         func_223A60
    ctx->pc = 0x286E10u;
    SET_GPR_U32(ctx, 31, 0x286E18u);
    ctx->pc = 0x286E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286E10u;
    // 0x286e14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A60u, 0x286E10u, 0x286E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286E18u;
label_286e18:
    // 0x286e18: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x286E18u;
    {
        const bool branch_taken_0x286e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x286e18) {
            ctx->pc = 0x286E58u;
            goto label_286e58;
        }
    }
    ctx->pc = 0x286E20u;
    // 0x286e20: 0xc089704  jal         func_225C10
    ctx->pc = 0x286E20u;
    SET_GPR_U32(ctx, 31, 0x286E28u);
    ctx->pc = 0x286E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286E20u;
    // 0x286e24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225C10u, 0x286E20u, 0x286E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286E28u;
label_286e28:
    // 0x286e28: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x286E28u;
    {
        const bool branch_taken_0x286e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x286e28) {
            ctx->pc = 0x286E58u;
            goto label_286e58;
        }
    }
    ctx->pc = 0x286E30u;
    // 0x286e30: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x286E30u;
    {
        const bool branch_taken_0x286e30 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x286E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E30u;
        // 0x286e34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286e30) {
            ctx->pc = 0x286E44u;
            goto label_286e44;
        }
    }
    ctx->pc = 0x286E38u;
    // 0x286e38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x286e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286e3c: 0xc087570  jal         func_21D5C0
    ctx->pc = 0x286E3Cu;
    SET_GPR_U32(ctx, 31, 0x286E44u);
    ctx->pc = 0x286E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286E3Cu;
    // 0x286e40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D5C0u, 0x286E3Cu, 0x286E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286E44u;
label_286e44:
    // 0x286e44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286e48: 0xc0992a0  jal         func_264A80
    ctx->pc = 0x286E48u;
    SET_GPR_U32(ctx, 31, 0x286E50u);
    ctx->pc = 0x286E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286E48u;
    // 0x286e4c: 0x240501f5  addiu       $a1, $zero, 0x1F5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 501));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264A80u, 0x286E48u, 0x286E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286E50u;
label_286e50:
    // 0x286e50: 0x1000022a  b           . + 4 + (0x22A << 2)
    ctx->pc = 0x286E50u;
    {
        const bool branch_taken_0x286e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E50u;
        // 0x286e54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286e50) {
            ctx->pc = 0x2876FCu;
            goto label_2876fc;
        }
    }
    ctx->pc = 0x286E58u;
label_286e58:
    // 0x286e58: 0xc0a001a  jal         func_280068
    ctx->pc = 0x286E58u;
    SET_GPR_U32(ctx, 31, 0x286E60u);
    ctx->pc = 0x286E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286E58u;
    // 0x286e5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280068u, 0x286E58u, 0x286E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286E60u;
label_286e60:
    // 0x286e60: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x286E60u;
    {
        const bool branch_taken_0x286e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x286e60) {
            ctx->pc = 0x286E88u;
            goto label_286e88;
        }
    }
    ctx->pc = 0x286E68u;
label_286e68:
    // 0x286e68: 0x16400009  bnez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x286E68u;
    {
        const bool branch_taken_0x286e68 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x286E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E68u;
        // 0x286e6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286e68) {
            ctx->pc = 0x286E90u;
            goto label_286e90;
        }
    }
    ctx->pc = 0x286E70u;
    // 0x286e70: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x286E70u;
    {
        const bool branch_taken_0x286e70 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x286E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E70u;
        // 0x286e74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286e70) {
            ctx->pc = 0x286E88u;
            goto label_286e88;
        }
    }
    ctx->pc = 0x286E78u;
    // 0x286e78: 0xc098fae  jal         func_263EB8
    ctx->pc = 0x286E78u;
    SET_GPR_U32(ctx, 31, 0x286E80u);
    ctx->pc = 0x286E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286E78u;
    // 0x286e7c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263EB8u, 0x286E78u, 0x286E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286E80u;
label_286e80:
    // 0x286e80: 0x1000021e  b           . + 4 + (0x21E << 2)
    ctx->pc = 0x286E80u;
    {
        const bool branch_taken_0x286e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E80u;
        // 0x286e84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286e80) {
            ctx->pc = 0x2876FCu;
            goto label_2876fc;
        }
    }
    ctx->pc = 0x286E88u;
label_286e88:
    // 0x286e88: 0x12400027  beqz        $s2, . + 4 + (0x27 << 2)
    ctx->pc = 0x286E88u;
    {
        const bool branch_taken_0x286e88 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x286E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E88u;
        // 0x286e8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286e88) {
            ctx->pc = 0x286F28u;
            goto label_286f28;
        }
    }
    ctx->pc = 0x286E90u;
label_286e90:
    // 0x286e90: 0xc089480  jal         func_225200
    ctx->pc = 0x286E90u;
    SET_GPR_U32(ctx, 31, 0x286E98u);
    ctx->pc = 0x286E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286E90u;
    // 0x286e94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225200u, 0x286E90u, 0x286E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286E98u;
label_286e98:
    // 0x286e98: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x286E98u;
    {
        const bool branch_taken_0x286e98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E98u;
        // 0x286e9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286e98) {
            ctx->pc = 0x286EB0u;
            goto label_286eb0;
        }
    }
    ctx->pc = 0x286EA0u;
    // 0x286ea0: 0xc089428  jal         func_2250A0
    ctx->pc = 0x286EA0u;
    SET_GPR_U32(ctx, 31, 0x286EA8u);
    ctx->pc = 0x286EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286EA0u;
    // 0x286ea4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2250A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2250A0u, 0x286EA0u, 0x286EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286EA8u;
label_286ea8:
    // 0x286ea8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x286EA8u;
    {
        const bool branch_taken_0x286ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x286ea8) {
            ctx->pc = 0x286EF0u;
            goto label_286ef0;
        }
    }
    ctx->pc = 0x286EB0u;
label_286eb0:
    // 0x286eb0: 0xc08a170  jal         func_2285C0
    ctx->pc = 0x286EB0u;
    SET_GPR_U32(ctx, 31, 0x286EB8u);
    ctx->pc = 0x286EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286EB0u;
    // 0x286eb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2285C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2285C0u, 0x286EB0u, 0x286EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286EB8u;
label_286eb8:
    // 0x286eb8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x286EB8u;
    {
        const bool branch_taken_0x286eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x286eb8) {
            ctx->pc = 0x286EF0u;
            goto label_286ef0;
        }
    }
    ctx->pc = 0x286EC0u;
    // 0x286ec0: 0xc08a17e  jal         func_2285F8
    ctx->pc = 0x286EC0u;
    SET_GPR_U32(ctx, 31, 0x286EC8u);
    ctx->pc = 0x286EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286EC0u;
    // 0x286ec4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2285F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2285F8u, 0x286EC0u, 0x286EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286EC8u;
label_286ec8:
    // 0x286ec8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x286EC8u;
    {
        const bool branch_taken_0x286ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286EC8u;
        // 0x286ecc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286ec8) {
            ctx->pc = 0x286EF0u;
            goto label_286ef0;
        }
    }
    ctx->pc = 0x286ED0u;
    // 0x286ed0: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x286ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x286ed4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x286ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286ed8: 0xa46000bc  sh          $zero, 0xBC($v1)
    ctx->pc = 0x286ed8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 188), (uint16_t)GPR_U32(ctx, 0));
    // 0x286edc: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x286edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x286ee0: 0xc098682  jal         func_261A08
    ctx->pc = 0x286EE0u;
    SET_GPR_U32(ctx, 31, 0x286EE8u);
    ctx->pc = 0x286EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286EE0u;
    // 0x286ee4: 0x8c460074  lw          $a2, 0x74($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261A08u, 0x286EE0u, 0x286EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286EE8u;
label_286ee8:
    // 0x286ee8: 0x10000204  b           . + 4 + (0x204 << 2)
    ctx->pc = 0x286EE8u;
    {
        const bool branch_taken_0x286ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286EE8u;
        // 0x286eec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286ee8) {
            ctx->pc = 0x2876FCu;
            goto label_2876fc;
        }
    }
    ctx->pc = 0x286EF0u;
label_286ef0:
    // 0x286ef0: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x286EF0u;
    {
        const bool branch_taken_0x286ef0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x286EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286EF0u;
        // 0x286ef4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286ef0) {
            ctx->pc = 0x286F28u;
            goto label_286f28;
        }
    }
    ctx->pc = 0x286EF8u;
    // 0x286ef8: 0xc096384  jal         func_258E10
    ctx->pc = 0x286EF8u;
    SET_GPR_U32(ctx, 31, 0x286F00u);
    ctx->pc = 0x286EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286EF8u;
    // 0x286efc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258E10u, 0x286EF8u, 0x286F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286F00u;
label_286f00:
    // 0x286f00: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x286F00u;
    {
        const bool branch_taken_0x286f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x286f00) {
            ctx->pc = 0x286F04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286F00u;
            // 0x286f04: 0x8e0300d4  lw          $v1, 0xD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286F2Cu;
            goto label_286f2c;
        }
    }
    ctx->pc = 0x286F08u;
    // 0x286f08: 0xc0e409a  jal         func_390268
    ctx->pc = 0x286F08u;
    SET_GPR_U32(ctx, 31, 0x286F10u);
    ctx->pc = 0x286F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286F08u;
    // 0x286f0c: 0x264400c4  addiu       $a0, $s2, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x286F08u, 0x286F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286F10u;
label_286f10:
    // 0x286f10: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x286f10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286f14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286f18: 0xc09be18  jal         func_26F860
    ctx->pc = 0x286F18u;
    SET_GPR_U32(ctx, 31, 0x286F20u);
    ctx->pc = 0x286F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286F18u;
    // 0x286f1c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F860u, 0x286F18u, 0x286F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286F20u;
label_286f20:
    // 0x286f20: 0x100001f6  b           . + 4 + (0x1F6 << 2)
    ctx->pc = 0x286F20u;
    {
        const bool branch_taken_0x286f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286F20u;
        // 0x286f24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286f20) {
            ctx->pc = 0x2876FCu;
            goto label_2876fc;
        }
    }
    ctx->pc = 0x286F28u;
label_286f28:
    // 0x286f28: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x286f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_286f2c:
    // 0x286f2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286f30: 0xa46000bc  sh          $zero, 0xBC($v1)
    ctx->pc = 0x286f30u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 188), (uint16_t)GPR_U32(ctx, 0));
    // 0x286f34: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x286f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x286f38: 0xc09896a  jal         func_2625A8
    ctx->pc = 0x286F38u;
    SET_GPR_U32(ctx, 31, 0x286F40u);
    ctx->pc = 0x286F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286F38u;
    // 0x286f3c: 0x8c450068  lw          $a1, 0x68($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2625A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2625A8u, 0x286F38u, 0x286F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286F40u;
label_286f40:
    // 0x286f40: 0x100001ee  b           . + 4 + (0x1EE << 2)
    ctx->pc = 0x286F40u;
    {
        const bool branch_taken_0x286f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286F40u;
        // 0x286f44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286f40) {
            ctx->pc = 0x2876FCu;
            goto label_2876fc;
        }
    }
    ctx->pc = 0x286F48u;
label_286f48:
    // 0x286f48: 0xc08a0d0  jal         func_228340
    ctx->pc = 0x286F48u;
    SET_GPR_U32(ctx, 31, 0x286F50u);
    ctx->pc = 0x286F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286F48u;
    // 0x286f4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x286F48u, 0x286F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286F50u;
label_286f50:
    // 0x286f50: 0x544000a4  bnel        $v0, $zero, . + 4 + (0xA4 << 2)
    ctx->pc = 0x286F50u;
    {
        const bool branch_taken_0x286f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x286f50) {
            ctx->pc = 0x286F54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286F50u;
            // 0x286f54: 0x86050092  lh          $a1, 0x92($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2871E4u;
            goto label_2871e4;
        }
    }
    ctx->pc = 0x286F58u;
    // 0x286f58: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x286f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x286f5c: 0x8c43031c  lw          $v1, 0x31C($v0)
    ctx->pc = 0x286f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51031Cu));
    // 0x286f60: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x286F60u;
    {
        const bool branch_taken_0x286f60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x286f60) {
            ctx->pc = 0x286F7Cu;
            goto label_286f7c;
        }
    }
    ctx->pc = 0x286F68u;
    // 0x286f68: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x286F68u;
    SET_GPR_U32(ctx, 31, 0x286F70u);
    ctx->pc = 0x286F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286F68u;
    // 0x286f6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x286F68u, 0x286F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286F70u;
label_286f70:
    // 0x286f70: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x286f70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x286f74: 0x5460009b  bnel        $v1, $zero, . + 4 + (0x9B << 2)
    ctx->pc = 0x286F74u;
    {
        const bool branch_taken_0x286f74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x286f74) {
            ctx->pc = 0x286F78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286F74u;
            // 0x286f78: 0x86050092  lh          $a1, 0x92($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2871E4u;
            goto label_2871e4;
        }
    }
    ctx->pc = 0x286F7Cu;
label_286f7c:
    // 0x286f7c: 0xc088e98  jal         func_223A60
    ctx->pc = 0x286F7Cu;
    SET_GPR_U32(ctx, 31, 0x286F84u);
    ctx->pc = 0x286F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286F7Cu;
    // 0x286f80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A60u, 0x286F7Cu, 0x286F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286F84u;
label_286f84:
    // 0x286f84: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x286F84u;
    {
        const bool branch_taken_0x286f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x286f84) {
            ctx->pc = 0x287030u;
            goto label_287030;
        }
    }
    ctx->pc = 0x286F8Cu;
    // 0x286f8c: 0xc089704  jal         func_225C10
    ctx->pc = 0x286F8Cu;
    SET_GPR_U32(ctx, 31, 0x286F94u);
    ctx->pc = 0x286F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286F8Cu;
    // 0x286f90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225C10u, 0x286F8Cu, 0x286F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286F94u;
label_286f94:
    // 0x286f94: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x286F94u;
    {
        const bool branch_taken_0x286f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x286f94) {
            ctx->pc = 0x287030u;
            goto label_287030;
        }
    }
    ctx->pc = 0x286F9Cu;
    // 0x286f9c: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x286f9cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x286fa0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x286fa0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x286fa4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x286FA4u;
    {
        const bool branch_taken_0x286fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x286fa4) {
            ctx->pc = 0x286FD4u;
            goto label_286fd4;
        }
    }
    ctx->pc = 0x286FACu;
    // 0x286fac: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x286facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x286fb0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x286fb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x286fb4: 0xc09e9b0  jal         func_27A6C0
    ctx->pc = 0x286FB4u;
    SET_GPR_U32(ctx, 31, 0x286FBCu);
    ctx->pc = 0x286FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286FB4u;
    // 0x286fb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A6C0u, 0x286FB4u, 0x286FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286FBCu;
label_286fbc:
    // 0x286fbc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x286fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286fc0: 0xc089b34  jal         func_226CD0
    ctx->pc = 0x286FC0u;
    SET_GPR_U32(ctx, 31, 0x286FC8u);
    ctx->pc = 0x286FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286FC0u;
    // 0x286fc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226CD0u, 0x286FC0u, 0x286FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286FC8u;
label_286fc8:
    // 0x286fc8: 0xc089b98  jal         func_226E60
    ctx->pc = 0x286FC8u;
    SET_GPR_U32(ctx, 31, 0x286FD0u);
    ctx->pc = 0x286FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286FC8u;
    // 0x286fcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x286FC8u, 0x286FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286FD0u;
label_286fd0:
    // 0x286fd0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x286fd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_286fd4:
    // 0x286fd4: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x286FD4u;
    {
        const bool branch_taken_0x286fd4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x286FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286FD4u;
        // 0x286fd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286fd4) {
            ctx->pc = 0x28701Cu;
            goto label_28701c;
        }
    }
    ctx->pc = 0x286FDCu;
    // 0x286fdc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x286fdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286fe0: 0xc087570  jal         func_21D5C0
    ctx->pc = 0x286FE0u;
    SET_GPR_U32(ctx, 31, 0x286FE8u);
    ctx->pc = 0x286FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286FE0u;
    // 0x286fe4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D5C0u, 0x286FE0u, 0x286FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286FE8u;
label_286fe8:
    // 0x286fe8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x286fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286fec: 0xc089480  jal         func_225200
    ctx->pc = 0x286FECu;
    SET_GPR_U32(ctx, 31, 0x286FF4u);
    ctx->pc = 0x286FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286FECu;
    // 0x286ff0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225200u, 0x286FECu, 0x286FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286FF4u;
label_286ff4:
    // 0x286ff4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x286FF4u;
    {
        const bool branch_taken_0x286ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286FF4u;
        // 0x286ff8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286ff4) {
            ctx->pc = 0x287020u;
            goto label_287020;
        }
    }
    ctx->pc = 0x286FFCu;
    // 0x286ffc: 0xc0a001a  jal         func_280068
    ctx->pc = 0x286FFCu;
    SET_GPR_U32(ctx, 31, 0x287004u);
    ctx->pc = 0x287000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286FFCu;
    // 0x287000: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280068u, 0x286FFCu, 0x287004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287004u;
label_287004:
    // 0x287004: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x287004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287008: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x287008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28700c: 0xc098682  jal         func_261A08
    ctx->pc = 0x28700Cu;
    SET_GPR_U32(ctx, 31, 0x287014u);
    ctx->pc = 0x287010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28700Cu;
    // 0x287010: 0x240600c1  addiu       $a2, $zero, 0xC1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261A08u, 0x28700Cu, 0x287014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287014u;
label_287014:
    // 0x287014: 0x100001b9  b           . + 4 + (0x1B9 << 2)
    ctx->pc = 0x287014u;
    {
        const bool branch_taken_0x287014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287014u;
        // 0x287018: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287014) {
            ctx->pc = 0x2876FCu;
            goto label_2876fc;
        }
    }
    ctx->pc = 0x28701Cu;
label_28701c:
    // 0x28701c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28701cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287020:
    // 0x287020: 0xc0992a0  jal         func_264A80
    ctx->pc = 0x287020u;
    SET_GPR_U32(ctx, 31, 0x287028u);
    ctx->pc = 0x287024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287020u;
    // 0x287024: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264A80u, 0x287020u, 0x287028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287028u;
label_287028:
    // 0x287028: 0x100001b4  b           . + 4 + (0x1B4 << 2)
    ctx->pc = 0x287028u;
    {
        const bool branch_taken_0x287028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28702Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287028u;
        // 0x28702c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287028) {
            ctx->pc = 0x2876FCu;
            goto label_2876fc;
        }
    }
    ctx->pc = 0x287030u;
label_287030:
    // 0x287030: 0xc088e8c  jal         func_223A30
    ctx->pc = 0x287030u;
    SET_GPR_U32(ctx, 31, 0x287038u);
    ctx->pc = 0x287034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287030u;
    // 0x287034: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A30u, 0x287030u, 0x287038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287038u;
label_287038:
    // 0x287038: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x287038u;
    {
        const bool branch_taken_0x287038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x287038) {
            ctx->pc = 0x28703Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287038u;
            // 0x28703c: 0x92a20018  lbu         $v0, 0x18($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287064u;
            goto label_287064;
        }
    }
    ctx->pc = 0x287040u;
    // 0x287040: 0xc088e90  jal         func_223A40
    ctx->pc = 0x287040u;
    SET_GPR_U32(ctx, 31, 0x287048u);
    ctx->pc = 0x287044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287040u;
    // 0x287044: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A40u, 0x287040u, 0x287048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287048u;
label_287048:
    // 0x287048: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x287048u;
    {
        const bool branch_taken_0x287048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x287048) {
            ctx->pc = 0x28704Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287048u;
            // 0x28704c: 0x92a20018  lbu         $v0, 0x18($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287064u;
            goto label_287064;
        }
    }
    ctx->pc = 0x287050u;
    // 0x287050: 0xc088e94  jal         func_223A50
    ctx->pc = 0x287050u;
    SET_GPR_U32(ctx, 31, 0x287058u);
    ctx->pc = 0x287054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287050u;
    // 0x287054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A50u, 0x287050u, 0x287058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287058u;
label_287058:
    // 0x287058: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x287058u;
    {
        const bool branch_taken_0x287058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287058u;
        // 0x28705c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287058) {
            ctx->pc = 0x287120u;
            goto label_287120;
        }
    }
    ctx->pc = 0x287060u;
    // 0x287060: 0x92a20018  lbu         $v0, 0x18($s5)
    ctx->pc = 0x287060u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 24)));
label_287064:
    // 0x287064: 0x3c013df5  lui         $at, 0x3DF5
    ctx->pc = 0x287064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15861 << 16));
    // 0x287068: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x287068u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x28706c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28706cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x287070: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x287070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x287074: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x287074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x287078: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x287078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28707c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x28707cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x287080: 0x0  nop
    ctx->pc = 0x287080u;
    // NOP
    // 0x287084: 0x45000026  bc1f        . + 4 + (0x26 << 2)
    ctx->pc = 0x287084u;
    {
        const bool branch_taken_0x287084 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x287088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287084u;
        // 0x287088: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287084) {
            ctx->pc = 0x287120u;
            goto label_287120;
        }
    }
    ctx->pc = 0x28708Cu;
    // 0x28708c: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x28708cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x287090: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x287090u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x287094: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x287094u;
    {
        const bool branch_taken_0x287094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287094) {
            ctx->pc = 0x2870C4u;
            goto label_2870c4;
        }
    }
    ctx->pc = 0x28709Cu;
    // 0x28709c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x28709cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2870a0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2870a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2870a4: 0xc09e9b0  jal         func_27A6C0
    ctx->pc = 0x2870A4u;
    SET_GPR_U32(ctx, 31, 0x2870ACu);
    ctx->pc = 0x2870A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2870A4u;
    // 0x2870a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A6C0u, 0x2870A4u, 0x2870ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2870ACu;
label_2870ac:
    // 0x2870ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2870acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2870b0: 0xc089b34  jal         func_226CD0
    ctx->pc = 0x2870B0u;
    SET_GPR_U32(ctx, 31, 0x2870B8u);
    ctx->pc = 0x2870B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2870B0u;
    // 0x2870b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226CD0u, 0x2870B0u, 0x2870B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2870B8u;
label_2870b8:
    // 0x2870b8: 0xc089b98  jal         func_226E60
    ctx->pc = 0x2870B8u;
    SET_GPR_U32(ctx, 31, 0x2870C0u);
    ctx->pc = 0x2870BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2870B8u;
    // 0x2870bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x2870B8u, 0x2870C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2870C0u;
label_2870c0:
    // 0x2870c0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2870c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2870c4:
    // 0x2870c4: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x2870C4u;
    {
        const bool branch_taken_0x2870c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2870C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2870C4u;
        // 0x2870c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2870c4) {
            ctx->pc = 0x28710Cu;
            goto label_28710c;
        }
    }
    ctx->pc = 0x2870CCu;
    // 0x2870cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2870ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2870d0: 0xc087570  jal         func_21D5C0
    ctx->pc = 0x2870D0u;
    SET_GPR_U32(ctx, 31, 0x2870D8u);
    ctx->pc = 0x2870D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2870D0u;
    // 0x2870d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D5C0u, 0x2870D0u, 0x2870D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2870D8u;
label_2870d8:
    // 0x2870d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2870d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2870dc: 0xc089480  jal         func_225200
    ctx->pc = 0x2870DCu;
    SET_GPR_U32(ctx, 31, 0x2870E4u);
    ctx->pc = 0x2870E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2870DCu;
    // 0x2870e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225200u, 0x2870DCu, 0x2870E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2870E4u;
label_2870e4:
    // 0x2870e4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2870E4u;
    {
        const bool branch_taken_0x2870e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2870E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2870E4u;
        // 0x2870e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2870e4) {
            ctx->pc = 0x287110u;
            goto label_287110;
        }
    }
    ctx->pc = 0x2870ECu;
    // 0x2870ec: 0xc0a001a  jal         func_280068
    ctx->pc = 0x2870ECu;
    SET_GPR_U32(ctx, 31, 0x2870F4u);
    ctx->pc = 0x2870F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2870ECu;
    // 0x2870f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280068u, 0x2870ECu, 0x2870F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2870F4u;
label_2870f4:
    // 0x2870f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2870f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2870f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2870f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2870fc: 0xc098682  jal         func_261A08
    ctx->pc = 0x2870FCu;
    SET_GPR_U32(ctx, 31, 0x287104u);
    ctx->pc = 0x287100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2870FCu;
    // 0x287100: 0x240600c1  addiu       $a2, $zero, 0xC1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261A08u, 0x2870FCu, 0x287104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287104u;
label_287104:
    // 0x287104: 0x1000017d  b           . + 4 + (0x17D << 2)
    ctx->pc = 0x287104u;
    {
        const bool branch_taken_0x287104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287104u;
        // 0x287108: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287104) {
            ctx->pc = 0x2876FCu;
            goto label_2876fc;
        }
    }
    ctx->pc = 0x28710Cu;
label_28710c:
    // 0x28710c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28710cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287110:
    // 0x287110: 0xc0992a0  jal         func_264A80
    ctx->pc = 0x287110u;
    SET_GPR_U32(ctx, 31, 0x287118u);
    ctx->pc = 0x287114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287110u;
    // 0x287114: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264A80u, 0x287110u, 0x287118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287118u;
label_287118:
    // 0x287118: 0x10000178  b           . + 4 + (0x178 << 2)
    ctx->pc = 0x287118u;
    {
        const bool branch_taken_0x287118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28711Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287118u;
        // 0x28711c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287118) {
            ctx->pc = 0x2876FCu;
            goto label_2876fc;
        }
    }
    ctx->pc = 0x287120u;
label_287120:
    // 0x287120: 0x8c430270  lw          $v1, 0x270($v0)
    ctx->pc = 0x287120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 624)));
    // 0x287124: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x287124u;
    {
        const bool branch_taken_0x287124 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x287124) {
            ctx->pc = 0x2871D8u;
            goto label_2871d8;
        }
    }
    ctx->pc = 0x28712Cu;
    // 0x28712c: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x28712cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x287130: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x287130u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x287134: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x287134u;
    {
        const bool branch_taken_0x287134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287134) {
            ctx->pc = 0x287168u;
            goto label_287168;
        }
    }
    ctx->pc = 0x28713Cu;
    // 0x28713c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x28713cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x287140: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x287140u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x287144: 0xc09e9b0  jal         func_27A6C0
    ctx->pc = 0x287144u;
    SET_GPR_U32(ctx, 31, 0x28714Cu);
    ctx->pc = 0x287148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287144u;
    // 0x287148: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A6C0u, 0x287144u, 0x28714Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28714Cu;
label_28714c:
    // 0x28714c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x28714cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287150: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x287150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287154: 0xc089b34  jal         func_226CD0
    ctx->pc = 0x287154u;
    SET_GPR_U32(ctx, 31, 0x28715Cu);
    ctx->pc = 0x287158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287154u;
    // 0x287158: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226CD0u, 0x287154u, 0x28715Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28715Cu;
label_28715c:
    // 0x28715c: 0xc089b98  jal         func_226E60
    ctx->pc = 0x28715Cu;
    SET_GPR_U32(ctx, 31, 0x287164u);
    ctx->pc = 0x287160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28715Cu;
    // 0x287160: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x28715Cu, 0x287164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287164u;
label_287164:
    // 0x287164: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x287164u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_287168:
    // 0x287168: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x287168u;
    {
        const bool branch_taken_0x287168 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x28716Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287168u;
        // 0x28716c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287168) {
            ctx->pc = 0x2871B0u;
            goto label_2871b0;
        }
    }
    ctx->pc = 0x287170u;
    // 0x287170: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x287170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287174: 0xc087570  jal         func_21D5C0
    ctx->pc = 0x287174u;
    SET_GPR_U32(ctx, 31, 0x28717Cu);
    ctx->pc = 0x287178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287174u;
    // 0x287178: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D5C0u, 0x287174u, 0x28717Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28717Cu;
label_28717c:
    // 0x28717c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28717cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287180: 0xc089480  jal         func_225200
    ctx->pc = 0x287180u;
    SET_GPR_U32(ctx, 31, 0x287188u);
    ctx->pc = 0x287184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287180u;
    // 0x287184: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225200u, 0x287180u, 0x287188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287188u;
label_287188:
    // 0x287188: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x287188u;
    {
        const bool branch_taken_0x287188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28718Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287188u;
        // 0x28718c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287188) {
            ctx->pc = 0x2871C8u;
            goto label_2871c8;
        }
    }
    ctx->pc = 0x287190u;
    // 0x287190: 0xc0a001a  jal         func_280068
    ctx->pc = 0x287190u;
    SET_GPR_U32(ctx, 31, 0x287198u);
    ctx->pc = 0x287194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287190u;
    // 0x287194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280068u, 0x287190u, 0x287198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287198u;
label_287198:
    // 0x287198: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x287198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28719c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28719cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2871a0: 0xc098682  jal         func_261A08
    ctx->pc = 0x2871A0u;
    SET_GPR_U32(ctx, 31, 0x2871A8u);
    ctx->pc = 0x2871A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2871A0u;
    // 0x2871a4: 0x240600c1  addiu       $a2, $zero, 0xC1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261A08u, 0x2871A0u, 0x2871A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2871A8u;
label_2871a8:
    // 0x2871a8: 0x10000154  b           . + 4 + (0x154 << 2)
    ctx->pc = 0x2871A8u;
    {
        const bool branch_taken_0x2871a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2871ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2871A8u;
        // 0x2871ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2871a8) {
            ctx->pc = 0x2876FCu;
            goto label_2876fc;
        }
    }
    ctx->pc = 0x2871B0u;
label_2871b0:
    // 0x2871b0: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2871B0u;
    {
        const bool branch_taken_0x2871b0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2871B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2871B0u;
        // 0x2871b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2871b0) {
            ctx->pc = 0x2871C8u;
            goto label_2871c8;
        }
    }
    ctx->pc = 0x2871B8u;
    // 0x2871b8: 0xc09905e  jal         func_264178
    ctx->pc = 0x2871B8u;
    SET_GPR_U32(ctx, 31, 0x2871C0u);
    ctx->pc = 0x2871BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2871B8u;
    // 0x2871bc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x2871B8u, 0x2871C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2871C0u;
label_2871c0:
    // 0x2871c0: 0x1000014e  b           . + 4 + (0x14E << 2)
    ctx->pc = 0x2871C0u;
    {
        const bool branch_taken_0x2871c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2871C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2871C0u;
        // 0x2871c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2871c0) {
            ctx->pc = 0x2876FCu;
            goto label_2876fc;
        }
    }
    ctx->pc = 0x2871C8u;
label_2871c8:
    // 0x2871c8: 0xc0988da  jal         func_262368
    ctx->pc = 0x2871C8u;
    SET_GPR_U32(ctx, 31, 0x2871D0u);
    ctx->pc = 0x2871CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2871C8u;
    // 0x2871cc: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262368u, 0x2871C8u, 0x2871D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2871D0u;
label_2871d0:
    // 0x2871d0: 0x1000014a  b           . + 4 + (0x14A << 2)
    ctx->pc = 0x2871D0u;
    {
        const bool branch_taken_0x2871d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2871D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2871D0u;
        // 0x2871d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2871d0) {
            ctx->pc = 0x2876FCu;
            goto label_2876fc;
        }
    }
    ctx->pc = 0x2871D8u;
label_2871d8:
    // 0x2871d8: 0xc0a001a  jal         func_280068
    ctx->pc = 0x2871D8u;
    SET_GPR_U32(ctx, 31, 0x2871E0u);
    ctx->pc = 0x2871DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2871D8u;
    // 0x2871dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280068u, 0x2871D8u, 0x2871E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2871E0u;
label_2871e0:
    // 0x2871e0: 0x86050092  lh          $a1, 0x92($s0)
    ctx->pc = 0x2871e0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_2871e4:
    // 0x2871e4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2871e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2871e8: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2871e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2871ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2871ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2871f0: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2871f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2871f4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2871f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2871f8: 0xc0cd8ec  jal         func_3363B0
    ctx->pc = 0x2871F8u;
    SET_GPR_U32(ctx, 31, 0x287200u);
    ctx->pc = 0x2871FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2871F8u;
    // 0x2871fc: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x2871F8u, 0x287200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287200u;
label_287200:
    // 0x287200: 0xc7ad0000  lwc1        $f13, 0x0($sp)
    ctx->pc = 0x287200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x287204: 0xc0cd5ea  jal         func_3357A8
    ctx->pc = 0x287204u;
    SET_GPR_U32(ctx, 31, 0x28720Cu);
    ctx->pc = 0x287208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287204u;
    // 0x287208: 0xc7ac0004  lwc1        $f12, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x287204u, 0x28720Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28720Cu;
label_28720c:
    // 0x28720c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x28720cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x287210: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x287210u;
    SET_GPR_U32(ctx, 31, 0x287218u);
    ctx->pc = 0x287214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287210u;
    // 0x287214: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x287210u, 0x287218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287218u;
label_287218:
    // 0x287218: 0x90430018  lbu         $v1, 0x18($v0)
    ctx->pc = 0x287218u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x28721c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x28721cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x287220: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x287220u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x287224: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x287224u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x287228: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x287228u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28722c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28722cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x287230: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x287230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287234: 0x46140541  sub.s       $f21, $f0, $f20
    ctx->pc = 0x287234u;
    ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x287238: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x287238u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28723c: 0x0  nop
    ctx->pc = 0x28723cu;
    // NOP
    // 0x287240: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x287240u;
    {
        const bool branch_taken_0x287240 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x287240) {
            ctx->pc = 0x28725Cu;
            goto label_28725c;
        }
    }
    ctx->pc = 0x287248u;
    // 0x287248: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x287248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x28724c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x28724cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x287250: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x287250u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287254: 0x0  nop
    ctx->pc = 0x287254u;
    // NOP
    // 0x287258: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x287258u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_28725c:
    // 0x28725c: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x28725cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
    // 0x287260: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x287260u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x287264: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x287264u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287268: 0x0  nop
    ctx->pc = 0x287268u;
    // NOP
    // 0x28726c: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x28726cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x287270: 0x0  nop
    ctx->pc = 0x287270u;
    // NOP
    // 0x287274: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x287274u;
    {
        const bool branch_taken_0x287274 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x287278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287274u;
        // 0x287278: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287274) {
            ctx->pc = 0x287290u;
            goto label_287290;
        }
    }
    ctx->pc = 0x28727Cu;
    // 0x28727c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x28727cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x287280: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x287280u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x287284: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x287284u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287288: 0x0  nop
    ctx->pc = 0x287288u;
    // NOP
    // 0x28728c: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x28728cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_287290:
    // 0x287290: 0x4600ad85  abs.s       $f22, $f21
    ctx->pc = 0x287290u;
    ctx->f[22] = FPU_ABS_S(ctx->f[21]);
    // 0x287294: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x287294u;
    SET_GPR_U32(ctx, 31, 0x28729Cu);
    ctx->pc = 0x287298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287294u;
    // 0x287298: 0x26b60010  addiu       $s6, $s5, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x287294u, 0x28729Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28729Cu;
label_28729c:
    // 0x28729c: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x28729cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x2872a0: 0x50600047  beql        $v1, $zero, . + 4 + (0x47 << 2)
    ctx->pc = 0x2872A0u;
    {
        const bool branch_taken_0x2872a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2872a0) {
            ctx->pc = 0x2872A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2872A0u;
            // 0x2872a4: 0x92a20018  lbu         $v0, 0x18($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2873C0u;
            goto label_2873c0;
        }
    }
    ctx->pc = 0x2872A8u;
    // 0x2872a8: 0xc089f22  jal         func_227C88
    ctx->pc = 0x2872A8u;
    SET_GPR_U32(ctx, 31, 0x2872B0u);
    ctx->pc = 0x2872ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2872A8u;
    // 0x2872ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227C88u, 0x2872A8u, 0x2872B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2872B0u;
label_2872b0:
    // 0x2872b0: 0x50400043  beql        $v0, $zero, . + 4 + (0x43 << 2)
    ctx->pc = 0x2872B0u;
    {
        const bool branch_taken_0x2872b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2872b0) {
            ctx->pc = 0x2872B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2872B0u;
            // 0x2872b4: 0x92a20018  lbu         $v0, 0x18($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2873C0u;
            goto label_2873c0;
        }
    }
    ctx->pc = 0x2872B8u;
    // 0x2872b8: 0xc61401ac  lwc1        $f20, 0x1AC($s0)
    ctx->pc = 0x2872b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2872bc: 0xc088574  jal         func_2215D0
    ctx->pc = 0x2872BCu;
    SET_GPR_U32(ctx, 31, 0x2872C4u);
    ctx->pc = 0x2872C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2872BCu;
    // 0x2872c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2215D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2215D0u, 0x2872BCu, 0x2872C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2872C4u;
label_2872c4:
    // 0x2872c4: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2872c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2872c8: 0x0  nop
    ctx->pc = 0x2872c8u;
    // NOP
    // 0x2872cc: 0x4500003c  bc1f        . + 4 + (0x3C << 2)
    ctx->pc = 0x2872CCu;
    {
        const bool branch_taken_0x2872cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2872D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2872CCu;
        // 0x2872d0: 0x92a20018  lbu         $v0, 0x18($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2872cc) {
            ctx->pc = 0x2873C0u;
            goto label_2873c0;
        }
    }
    ctx->pc = 0x2872D4u;
    // 0x2872d4: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x2872d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
    // 0x2872d8: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x2872d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x2872dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2872dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2872e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2872e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2872e4: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x2872e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x2872e8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2872e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2872ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2872ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2872f0: 0x0  nop
    ctx->pc = 0x2872f0u;
    // NOP
    // 0x2872f4: 0x45000031  bc1f        . + 4 + (0x31 << 2)
    ctx->pc = 0x2872F4u;
    {
        const bool branch_taken_0x2872f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2872F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2872F4u;
        // 0x2872f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2872f4) {
            ctx->pc = 0x2873BCu;
            goto label_2873bc;
        }
    }
    ctx->pc = 0x2872FCu;
    // 0x2872fc: 0xc089b98  jal         func_226E60
    ctx->pc = 0x2872FCu;
    SET_GPR_U32(ctx, 31, 0x287304u);
    ctx->pc = 0x287300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2872FCu;
    // 0x287300: 0x24140020  addiu       $s4, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x2872FCu, 0x287304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287304u;
label_287304:
    // 0x287304: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x287304u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287308: 0x5220002d  beql        $s1, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x287308u;
    {
        const bool branch_taken_0x287308 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x287308) {
            ctx->pc = 0x28730Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287308u;
            // 0x28730c: 0x92a20018  lbu         $v0, 0x18($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2873C0u;
            goto label_2873c0;
        }
    }
    ctx->pc = 0x287310u;
    // 0x287310: 0x3c014016  lui         $at, 0x4016
    ctx->pc = 0x287310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16406 << 16));
    // 0x287314: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x287314u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
    // 0x287318: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x287318u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28731c: 0x0  nop
    ctx->pc = 0x28731cu;
    // NOP
    // 0x287320: 0x4600b036  c.le.s      $f22, $f0
    ctx->pc = 0x287320u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x287324: 0x0  nop
    ctx->pc = 0x287324u;
    // NOP
    // 0x287328: 0x45000024  bc1f        . + 4 + (0x24 << 2)
    ctx->pc = 0x287328u;
    {
        const bool branch_taken_0x287328 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28732Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287328u;
        // 0x28732c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287328) {
            ctx->pc = 0x2873BCu;
            goto label_2873bc;
        }
    }
    ctx->pc = 0x287330u;
    // 0x287330: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x287330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x287334: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x287334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287338: 0xa44000bc  sh          $zero, 0xBC($v0)
    ctx->pc = 0x287338u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 188), (uint16_t)GPR_U32(ctx, 0));
    // 0x28733c: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x28733cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x287340: 0xc089b0c  jal         func_226C30
    ctx->pc = 0x287340u;
    SET_GPR_U32(ctx, 31, 0x287348u);
    ctx->pc = 0x287344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287340u;
    // 0x287344: 0xac6000b8  sw          $zero, 0xB8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 184), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226C30u, 0x287340u, 0x287348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287348u;
label_287348:
    // 0x287348: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x287348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x28734c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x28734cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x287350: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x287350u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287354: 0x0  nop
    ctx->pc = 0x287354u;
    // NOP
    // 0x287358: 0x4600b036  c.le.s      $f22, $f0
    ctx->pc = 0x287358u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28735c: 0x0  nop
    ctx->pc = 0x28735cu;
    // NOP
    // 0x287360: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x287360u;
    {
        const bool branch_taken_0x287360 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x287360) {
            ctx->pc = 0x287370u;
            goto label_287370;
        }
    }
    ctx->pc = 0x287368u;
    // 0x287368: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x287368u;
    {
        const bool branch_taken_0x287368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28736Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287368u;
        // 0x28736c: 0x24140021  addiu       $s4, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287368) {
            ctx->pc = 0x287388u;
            goto label_287388;
        }
    }
    ctx->pc = 0x287370u;
label_287370:
    // 0x287370: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x287370u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287374: 0x0  nop
    ctx->pc = 0x287374u;
    // NOP
    // 0x287378: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x287378u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28737c: 0x0  nop
    ctx->pc = 0x28737cu;
    // NOP
    // 0x287380: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x287380u;
    {
        const bool branch_taken_0x287380 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x287380) {
            ctx->pc = 0x287384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287380u;
            // 0x287384: 0x2414001f  addiu       $s4, $zero, 0x1F (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287388u;
            goto label_287388;
        }
    }
    ctx->pc = 0x287388u;
label_287388:
    // 0x287388: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x287388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28738c: 0xc08a658  jal         func_229960
    ctx->pc = 0x28738Cu;
    SET_GPR_U32(ctx, 31, 0x287394u);
    ctx->pc = 0x287390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28738Cu;
    // 0x287390: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229960u, 0x28738Cu, 0x287394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287394u;
label_287394:
    // 0x287394: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x287394u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x287398: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x287398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28739c: 0xc095142  jal         func_254508
    ctx->pc = 0x28739Cu;
    SET_GPR_U32(ctx, 31, 0x2873A4u);
    ctx->pc = 0x2873A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28739Cu;
    // 0x2873a0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254508u, 0x28739Cu, 0x2873A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2873A4u;
label_2873a4:
    // 0x2873a4: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2873a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2873a8: 0x0  nop
    ctx->pc = 0x2873a8u;
    // NOP
    // 0x2873ac: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2873ACu;
    {
        const bool branch_taken_0x2873ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2873B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2873ACu;
        // 0x2873b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2873ac) {
            ctx->pc = 0x2873BCu;
            goto label_2873bc;
        }
    }
    ctx->pc = 0x2873B4u;
    // 0x2873b4: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x2873B4u;
    {
        const bool branch_taken_0x2873b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2873B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2873B4u;
        // 0x2873b8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2873b4) {
            ctx->pc = 0x2876F0u;
            goto label_2876f0;
        }
    }
    ctx->pc = 0x2873BCu;
label_2873bc:
    // 0x2873bc: 0x92a20018  lbu         $v0, 0x18($s5)
    ctx->pc = 0x2873bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 24)));
label_2873c0:
    // 0x2873c0: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x2873c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
    // 0x2873c4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x2873c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x2873c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2873c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2873cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2873ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2873d0: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x2873d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x2873d4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2873d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2873d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2873d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2873dc: 0x0  nop
    ctx->pc = 0x2873dcu;
    // NOP
    // 0x2873e0: 0x4500004c  bc1f        . + 4 + (0x4C << 2)
    ctx->pc = 0x2873E0u;
    {
        const bool branch_taken_0x2873e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2873E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2873E0u;
        // 0x2873e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2873e0) {
            ctx->pc = 0x287514u;
            goto label_287514;
        }
    }
    ctx->pc = 0x2873E8u;
    // 0x2873e8: 0xc09ea8e  jal         func_27AA38
    ctx->pc = 0x2873E8u;
    SET_GPR_U32(ctx, 31, 0x2873F0u);
    ctx->pc = 0x2873ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2873E8u;
    // 0x2873ec: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AA38u, 0x2873E8u, 0x2873F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2873F0u;
label_2873f0:
    // 0x2873f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2873f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2873f4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2873f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2873f8: 0x8c4602b4  lw          $a2, 0x2B4($v0)
    ctx->pc = 0x2873f8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5102B4u));
    // 0x2873fc: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2873FCu;
    {
        const bool branch_taken_0x2873fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2873fc) {
            ctx->pc = 0x28740Cu;
            goto label_28740c;
        }
    }
    ctx->pc = 0x287404u;
    // 0x287404: 0x12200043  beqz        $s1, . + 4 + (0x43 << 2)
    ctx->pc = 0x287404u;
    {
        const bool branch_taken_0x287404 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x287404) {
            ctx->pc = 0x287514u;
            goto label_287514;
        }
    }
    ctx->pc = 0x28740Cu;
label_28740c:
    // 0x28740c: 0x12320041  beq         $s1, $s2, . + 4 + (0x41 << 2)
    ctx->pc = 0x28740Cu;
    {
        const bool branch_taken_0x28740c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 18));
        if (branch_taken_0x28740c) {
            ctx->pc = 0x287514u;
            goto label_287514;
        }
    }
    ctx->pc = 0x287414u;
    // 0x287414: 0x3c014016  lui         $at, 0x4016
    ctx->pc = 0x287414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16406 << 16));
    // 0x287418: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x287418u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
    // 0x28741c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28741cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287420: 0x0  nop
    ctx->pc = 0x287420u;
    // NOP
    // 0x287424: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x287424u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x287428: 0x0  nop
    ctx->pc = 0x287428u;
    // NOP
    // 0x28742c: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x28742Cu;
    {
        const bool branch_taken_0x28742c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x287430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28742Cu;
        // 0x287430: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28742c) {
            ctx->pc = 0x28746Cu;
            goto label_28746c;
        }
    }
    ctx->pc = 0x287434u;
    // 0x287434: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x287434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x287438: 0xc099118  jal         func_264460
    ctx->pc = 0x287438u;
    SET_GPR_U32(ctx, 31, 0x287440u);
    ctx->pc = 0x28743Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287438u;
    // 0x28743c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264460u, 0x287438u, 0x287440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287440u;
label_287440:
    // 0x287440: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x287440u;
    {
        const bool branch_taken_0x287440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287440) {
            ctx->pc = 0x287514u;
            goto label_287514;
        }
    }
    ctx->pc = 0x287448u;
    // 0x287448: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x287448u;
    {
        const bool branch_taken_0x287448 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28744Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287448u;
        // 0x28744c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287448) {
            ctx->pc = 0x28745Cu;
            goto label_28745c;
        }
    }
    ctx->pc = 0x287450u;
    // 0x287450: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x287450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287454: 0xc087570  jal         func_21D5C0
    ctx->pc = 0x287454u;
    SET_GPR_U32(ctx, 31, 0x28745Cu);
    ctx->pc = 0x287458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287454u;
    // 0x287458: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D5C0u, 0x287454u, 0x28745Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28745Cu;
label_28745c:
    // 0x28745c: 0xc0a001a  jal         func_280068
    ctx->pc = 0x28745Cu;
    SET_GPR_U32(ctx, 31, 0x287464u);
    ctx->pc = 0x287460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28745Cu;
    // 0x287460: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280068u, 0x28745Cu, 0x287464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287464u;
label_287464:
    // 0x287464: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x287464u;
    {
        const bool branch_taken_0x287464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287464u;
        // 0x287468: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287464) {
            ctx->pc = 0x2876FCu;
            goto label_2876fc;
        }
    }
    ctx->pc = 0x28746Cu;
label_28746c:
    // 0x28746c: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x28746cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x287470: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x287470u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x287474: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x287474u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287478: 0x0  nop
    ctx->pc = 0x287478u;
    // NOP
    // 0x28747c: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x28747cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x287480: 0x0  nop
    ctx->pc = 0x287480u;
    // NOP
    // 0x287484: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x287484u;
    {
        const bool branch_taken_0x287484 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x287484) {
            ctx->pc = 0x287514u;
            goto label_287514;
        }
    }
    ctx->pc = 0x28748Cu;
    // 0x28748c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28748cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287490: 0x0  nop
    ctx->pc = 0x287490u;
    // NOP
    // 0x287494: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x287494u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x287498: 0x0  nop
    ctx->pc = 0x287498u;
    // NOP
    // 0x28749c: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x28749Cu;
    {
        const bool branch_taken_0x28749c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2874A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28749Cu;
        // 0x2874a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28749c) {
            ctx->pc = 0x2874DCu;
            goto label_2874dc;
        }
    }
    ctx->pc = 0x2874A4u;
    // 0x2874a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2874a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2874a8: 0xc099118  jal         func_264460
    ctx->pc = 0x2874A8u;
    SET_GPR_U32(ctx, 31, 0x2874B0u);
    ctx->pc = 0x2874ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2874A8u;
    // 0x2874ac: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264460u, 0x2874A8u, 0x2874B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2874B0u;
label_2874b0:
    // 0x2874b0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2874B0u;
    {
        const bool branch_taken_0x2874b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2874b0) {
            ctx->pc = 0x287514u;
            goto label_287514;
        }
    }
    ctx->pc = 0x2874B8u;
    // 0x2874b8: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2874B8u;
    {
        const bool branch_taken_0x2874b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2874BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2874B8u;
        // 0x2874bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2874b8) {
            ctx->pc = 0x2874CCu;
            goto label_2874cc;
        }
    }
    ctx->pc = 0x2874C0u;
    // 0x2874c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2874c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2874c4: 0xc087570  jal         func_21D5C0
    ctx->pc = 0x2874C4u;
    SET_GPR_U32(ctx, 31, 0x2874CCu);
    ctx->pc = 0x2874C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2874C4u;
    // 0x2874c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D5C0u, 0x2874C4u, 0x2874CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2874CCu;
label_2874cc:
    // 0x2874cc: 0xc0a001a  jal         func_280068
    ctx->pc = 0x2874CCu;
    SET_GPR_U32(ctx, 31, 0x2874D4u);
    ctx->pc = 0x2874D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2874CCu;
    // 0x2874d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280068u, 0x2874CCu, 0x2874D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2874D4u;
label_2874d4:
    // 0x2874d4: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x2874D4u;
    {
        const bool branch_taken_0x2874d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2874D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2874D4u;
        // 0x2874d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2874d4) {
            ctx->pc = 0x2876FCu;
            goto label_2876fc;
        }
    }
    ctx->pc = 0x2874DCu;
label_2874dc:
    // 0x2874dc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2874dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2874e0: 0xc099118  jal         func_264460
    ctx->pc = 0x2874E0u;
    SET_GPR_U32(ctx, 31, 0x2874E8u);
    ctx->pc = 0x2874E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2874E0u;
    // 0x2874e4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264460u, 0x2874E0u, 0x2874E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2874E8u;
label_2874e8:
    // 0x2874e8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2874E8u;
    {
        const bool branch_taken_0x2874e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2874e8) {
            ctx->pc = 0x287514u;
            goto label_287514;
        }
    }
    ctx->pc = 0x2874F0u;
    // 0x2874f0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2874F0u;
    {
        const bool branch_taken_0x2874f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2874F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2874F0u;
        // 0x2874f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2874f0) {
            ctx->pc = 0x287504u;
            goto label_287504;
        }
    }
    ctx->pc = 0x2874F8u;
    // 0x2874f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2874f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2874fc: 0xc087570  jal         func_21D5C0
    ctx->pc = 0x2874FCu;
    SET_GPR_U32(ctx, 31, 0x287504u);
    ctx->pc = 0x287500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2874FCu;
    // 0x287500: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D5C0u, 0x2874FCu, 0x287504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287504u;
label_287504:
    // 0x287504: 0xc0a001a  jal         func_280068
    ctx->pc = 0x287504u;
    SET_GPR_U32(ctx, 31, 0x28750Cu);
    ctx->pc = 0x287508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287504u;
    // 0x287508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280068u, 0x287504u, 0x28750Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28750Cu;
label_28750c:
    // 0x28750c: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x28750Cu;
    {
        const bool branch_taken_0x28750c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28750Cu;
        // 0x287510: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28750c) {
            ctx->pc = 0x2876FCu;
            goto label_2876fc;
        }
    }
    ctx->pc = 0x287514u;
label_287514:
    // 0x287514: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x287514u;
    SET_GPR_U32(ctx, 31, 0x28751Cu);
    ctx->pc = 0x287518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287514u;
    // 0x287518: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x287514u, 0x28751Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28751Cu;
label_28751c:
    // 0x28751c: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x28751cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x287520: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x287520u;
    {
        const bool branch_taken_0x287520 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x287520) {
            ctx->pc = 0x287524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287520u;
            // 0x287524: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287534u;
            goto label_287534;
        }
    }
    ctx->pc = 0x287528u;
    // 0x287528: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x287528u;
    {
        const bool branch_taken_0x287528 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x287528) {
            ctx->pc = 0x287554u;
            goto label_287554;
        }
    }
    ctx->pc = 0x287530u;
    // 0x287530: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x287530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287534:
    // 0x287534: 0xc08a62e  jal         func_2298B8
    ctx->pc = 0x287534u;
    SET_GPR_U32(ctx, 31, 0x28753Cu);
    ctx->pc = 0x287538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287534u;
    // 0x287538: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2298B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2298B8u, 0x287534u, 0x28753Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28753Cu;
label_28753c:
    // 0x28753c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x28753cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x287540: 0xc44104c0  lwc1        $f1, 0x4C0($v0)
    ctx->pc = 0x287540u;
    { uint32_t bits = FAST_READ32(0x5104C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x287544: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x287544u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x287548: 0x0  nop
    ctx->pc = 0x287548u;
    // NOP
    // 0x28754c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x28754Cu;
    {
        const bool branch_taken_0x28754c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28754c) {
            ctx->pc = 0x287580u;
            goto label_287580;
        }
    }
    ctx->pc = 0x287554u;
label_287554:
    // 0x287554: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x287554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x287558: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x287558u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28755c: 0xc09e9b0  jal         func_27A6C0
    ctx->pc = 0x28755Cu;
    SET_GPR_U32(ctx, 31, 0x287564u);
    ctx->pc = 0x287560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28755Cu;
    // 0x287560: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A6C0u, 0x28755Cu, 0x287564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287564u;
label_287564:
    // 0x287564: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x287564u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287568: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x287568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28756c: 0xc089b34  jal         func_226CD0
    ctx->pc = 0x28756Cu;
    SET_GPR_U32(ctx, 31, 0x287574u);
    ctx->pc = 0x287570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28756Cu;
    // 0x287570: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226CD0u, 0x28756Cu, 0x287574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287574u;
label_287574:
    // 0x287574: 0xc089b98  jal         func_226E60
    ctx->pc = 0x287574u;
    SET_GPR_U32(ctx, 31, 0x28757Cu);
    ctx->pc = 0x287578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287574u;
    // 0x287578: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x287574u, 0x28757Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28757Cu;
label_28757c:
    // 0x28757c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28757cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_287580:
    // 0x287580: 0x12400053  beqz        $s2, . + 4 + (0x53 << 2)
    ctx->pc = 0x287580u;
    {
        const bool branch_taken_0x287580 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x287584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287580u;
        // 0x287584: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287580) {
            ctx->pc = 0x2876D0u;
            goto label_2876d0;
        }
    }
    ctx->pc = 0x287588u;
    // 0x287588: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x287588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28758c: 0xc087570  jal         func_21D5C0
    ctx->pc = 0x28758Cu;
    SET_GPR_U32(ctx, 31, 0x287594u);
    ctx->pc = 0x287590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28758Cu;
    // 0x287590: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D5C0u, 0x28758Cu, 0x287594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287594u;
label_287594:
    // 0x287594: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x287594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287598: 0xc089480  jal         func_225200
    ctx->pc = 0x287598u;
    SET_GPR_U32(ctx, 31, 0x2875A0u);
    ctx->pc = 0x28759Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287598u;
    // 0x28759c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225200u, 0x287598u, 0x2875A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2875A0u;
label_2875a0:
    // 0x2875a0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2875A0u;
    {
        const bool branch_taken_0x2875a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2875A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2875A0u;
        // 0x2875a4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2875a0) {
            ctx->pc = 0x2875C4u;
            goto label_2875c4;
        }
    }
    ctx->pc = 0x2875A8u;
    // 0x2875a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2875a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2875ac: 0xc098682  jal         func_261A08
    ctx->pc = 0x2875ACu;
    SET_GPR_U32(ctx, 31, 0x2875B4u);
    ctx->pc = 0x2875B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2875ACu;
    // 0x2875b0: 0x240600c1  addiu       $a2, $zero, 0xC1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261A08u, 0x2875ACu, 0x2875B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2875B4u;
label_2875b4:
    // 0x2875b4: 0xc0a001a  jal         func_280068
    ctx->pc = 0x2875B4u;
    SET_GPR_U32(ctx, 31, 0x2875BCu);
    ctx->pc = 0x2875B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2875B4u;
    // 0x2875b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280068u, 0x2875B4u, 0x2875BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2875BCu;
label_2875bc:
    // 0x2875bc: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x2875BCu;
    {
        const bool branch_taken_0x2875bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2875C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2875BCu;
        // 0x2875c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2875bc) {
            ctx->pc = 0x2876FCu;
            goto label_2876fc;
        }
    }
    ctx->pc = 0x2875C4u;
label_2875c4:
    // 0x2875c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2875c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2875c8: 0xc089428  jal         func_2250A0
    ctx->pc = 0x2875C8u;
    SET_GPR_U32(ctx, 31, 0x2875D0u);
    ctx->pc = 0x2875CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2875C8u;
    // 0x2875cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2250A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2250A0u, 0x2875C8u, 0x2875D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2875D0u;
label_2875d0:
    // 0x2875d0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2875D0u;
    {
        const bool branch_taken_0x2875d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2875D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2875D0u;
        // 0x2875d4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2875d0) {
            ctx->pc = 0x2875F4u;
            goto label_2875f4;
        }
    }
    ctx->pc = 0x2875D8u;
    // 0x2875d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2875d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2875dc: 0xc098720  jal         func_261C80
    ctx->pc = 0x2875DCu;
    SET_GPR_U32(ctx, 31, 0x2875E4u);
    ctx->pc = 0x2875E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2875DCu;
    // 0x2875e0: 0x240600d4  addiu       $a2, $zero, 0xD4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261C80u, 0x2875DCu, 0x2875E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2875E4u;
label_2875e4:
    // 0x2875e4: 0xc0a001a  jal         func_280068
    ctx->pc = 0x2875E4u;
    SET_GPR_U32(ctx, 31, 0x2875ECu);
    ctx->pc = 0x2875E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2875E4u;
    // 0x2875e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280068u, 0x2875E4u, 0x2875ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2875ECu;
label_2875ec:
    // 0x2875ec: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x2875ECu;
    {
        const bool branch_taken_0x2875ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2875F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2875ECu;
        // 0x2875f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2875ec) {
            ctx->pc = 0x2876FCu;
            goto label_2876fc;
        }
    }
    ctx->pc = 0x2875F4u;
label_2875f4:
    // 0x2875f4: 0xc088e50  jal         func_223940
    ctx->pc = 0x2875F4u;
    SET_GPR_U32(ctx, 31, 0x2875FCu);
    ctx->pc = 0x2875F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2875F4u;
    // 0x2875f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223940u, 0x2875F4u, 0x2875FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2875FCu;
label_2875fc:
    // 0x2875fc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2875FCu;
    {
        const bool branch_taken_0x2875fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2875FCu;
        // 0x287600: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2875fc) {
            ctx->pc = 0x287614u;
            goto label_287614;
        }
    }
    ctx->pc = 0x287604u;
    // 0x287604: 0xc088e68  jal         func_2239A0
    ctx->pc = 0x287604u;
    SET_GPR_U32(ctx, 31, 0x28760Cu);
    ctx->pc = 0x287608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287604u;
    // 0x287608: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239A0u, 0x287604u, 0x28760Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28760Cu;
label_28760c:
    // 0x28760c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28760Cu;
    {
        const bool branch_taken_0x28760c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28760Cu;
        // 0x287610: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28760c) {
            ctx->pc = 0x287630u;
            goto label_287630;
        }
    }
    ctx->pc = 0x287614u;
label_287614:
    // 0x287614: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x287614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287618: 0xc098720  jal         func_261C80
    ctx->pc = 0x287618u;
    SET_GPR_U32(ctx, 31, 0x287620u);
    ctx->pc = 0x28761Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287618u;
    // 0x28761c: 0x24060078  addiu       $a2, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261C80u, 0x287618u, 0x287620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287620u;
label_287620:
    // 0x287620: 0xc0a001a  jal         func_280068
    ctx->pc = 0x287620u;
    SET_GPR_U32(ctx, 31, 0x287628u);
    ctx->pc = 0x287624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287620u;
    // 0x287624: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280068u, 0x287620u, 0x287628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287628u;
label_287628:
    // 0x287628: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x287628u;
    {
        const bool branch_taken_0x287628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28762Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287628u;
        // 0x28762c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287628) {
            ctx->pc = 0x2876FCu;
            goto label_2876fc;
        }
    }
    ctx->pc = 0x287630u;
label_287630:
    // 0x287630: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x287630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287634: 0xc096384  jal         func_258E10
    ctx->pc = 0x287634u;
    SET_GPR_U32(ctx, 31, 0x28763Cu);
    ctx->pc = 0x287638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287634u;
    // 0x287638: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258E10u, 0x287634u, 0x28763Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28763Cu;
label_28763c:
    // 0x28763c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28763Cu;
    {
        const bool branch_taken_0x28763c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28763c) {
            ctx->pc = 0x287664u;
            goto label_287664;
        }
    }
    ctx->pc = 0x287644u;
    // 0x287644: 0xc0e409a  jal         func_390268
    ctx->pc = 0x287644u;
    SET_GPR_U32(ctx, 31, 0x28764Cu);
    ctx->pc = 0x287648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287644u;
    // 0x287648: 0x264400c4  addiu       $a0, $s2, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x287644u, 0x28764Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28764Cu;
label_28764c:
    // 0x28764c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x28764cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287650: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x287650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287654: 0xc09be18  jal         func_26F860
    ctx->pc = 0x287654u;
    SET_GPR_U32(ctx, 31, 0x28765Cu);
    ctx->pc = 0x287658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287654u;
    // 0x287658: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F860u, 0x287654u, 0x28765Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28765Cu;
label_28765c:
    // 0x28765c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x28765Cu;
    {
        const bool branch_taken_0x28765c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28765Cu;
        // 0x287660: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28765c) {
            ctx->pc = 0x2876FCu;
            goto label_2876fc;
        }
    }
    ctx->pc = 0x287664u;
label_287664:
    // 0x287664: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x287664u;
    SET_GPR_U32(ctx, 31, 0x28766Cu);
    ctx->pc = 0x287668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287664u;
    // 0x287668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x287664u, 0x28766Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28766Cu;
label_28766c:
    // 0x28766c: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x28766cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x287670: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x287670u;
    {
        const bool branch_taken_0x287670 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x287674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287670u;
        // 0x287674: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287670) {
            ctx->pc = 0x2876E8u;
            goto label_2876e8;
        }
    }
    ctx->pc = 0x287678u;
    // 0x287678: 0xc0963a2  jal         func_258E88
    ctx->pc = 0x287678u;
    SET_GPR_U32(ctx, 31, 0x287680u);
    ctx->pc = 0x28767Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287678u;
    // 0x28767c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258E88u, 0x287678u, 0x287680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287680u;
label_287680:
    // 0x287680: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x287680u;
    {
        const bool branch_taken_0x287680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287680u;
        // 0x287684: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287680) {
            ctx->pc = 0x2876A4u;
            goto label_2876a4;
        }
    }
    ctx->pc = 0x287688u;
    // 0x287688: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x287688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28768c: 0x2406004c  addiu       $a2, $zero, 0x4C
    ctx->pc = 0x28768cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x287690: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x287690u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x287694: 0xc098ab2  jal         func_262AC8
    ctx->pc = 0x287694u;
    SET_GPR_U32(ctx, 31, 0x28769Cu);
    ctx->pc = 0x287698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287694u;
    // 0x287698: 0x3c080040  lui         $t0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AC8u, 0x287694u, 0x28769Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28769Cu;
label_28769c:
    // 0x28769c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x28769Cu;
    {
        const bool branch_taken_0x28769c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2876A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28769Cu;
        // 0x2876a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28769c) {
            ctx->pc = 0x2876FCu;
            goto label_2876fc;
        }
    }
    ctx->pc = 0x2876A4u;
label_2876a4:
    // 0x2876a4: 0xc09643e  jal         func_2590F8
    ctx->pc = 0x2876A4u;
    SET_GPR_U32(ctx, 31, 0x2876ACu);
    ctx->pc = 0x2876A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2876A4u;
    // 0x2876a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2590F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2590F8u, 0x2876A4u, 0x2876ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2876ACu;
label_2876ac:
    // 0x2876ac: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2876ACu;
    {
        const bool branch_taken_0x2876ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2876B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2876ACu;
        // 0x2876b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2876ac) {
            ctx->pc = 0x2876E8u;
            goto label_2876e8;
        }
    }
    ctx->pc = 0x2876B4u;
    // 0x2876b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2876b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2876b8: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x2876b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2876bc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2876bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2876c0: 0xc098ab2  jal         func_262AC8
    ctx->pc = 0x2876C0u;
    SET_GPR_U32(ctx, 31, 0x2876C8u);
    ctx->pc = 0x2876C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2876C0u;
    // 0x2876c4: 0x3c080040  lui         $t0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AC8u, 0x2876C0u, 0x2876C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2876C8u;
label_2876c8:
    // 0x2876c8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2876C8u;
    {
        const bool branch_taken_0x2876c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2876CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2876C8u;
        // 0x2876cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2876c8) {
            ctx->pc = 0x2876FCu;
            goto label_2876fc;
        }
    }
    ctx->pc = 0x2876D0u;
label_2876d0:
    // 0x2876d0: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2876D0u;
    {
        const bool branch_taken_0x2876d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2876D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2876D0u;
        // 0x2876d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2876d0) {
            ctx->pc = 0x2876E8u;
            goto label_2876e8;
        }
    }
    ctx->pc = 0x2876D8u;
    // 0x2876d8: 0xc09905e  jal         func_264178
    ctx->pc = 0x2876D8u;
    SET_GPR_U32(ctx, 31, 0x2876E0u);
    ctx->pc = 0x2876DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2876D8u;
    // 0x2876dc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x2876D8u, 0x2876E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2876E0u;
label_2876e0:
    // 0x2876e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2876E0u;
    {
        const bool branch_taken_0x2876e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2876E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2876E0u;
        // 0x2876e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2876e0) {
            ctx->pc = 0x2876FCu;
            goto label_2876fc;
        }
    }
    ctx->pc = 0x2876E8u;
label_2876e8:
    // 0x2876e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2876e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2876ec: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2876ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2876f0:
    // 0x2876f0: 0xc09896a  jal         func_2625A8
    ctx->pc = 0x2876F0u;
    SET_GPR_U32(ctx, 31, 0x2876F8u);
    ctx->pc = 0x2625A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2625A8u, 0x2876F0u, 0x2876F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2876F8u;
label_2876f8:
    // 0x2876f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2876f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2876fc:
    // 0x2876fc: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2876fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x287700: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x287700u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x287704: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x287704u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x287708: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x287708u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28770c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28770cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x287710: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x287710u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x287714: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x287714u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x287718: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x287718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28771c: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x28771cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x287720: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x287720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x287724: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x287724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x287728: 0x3e00008  jr          $ra
    ctx->pc = 0x287728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28772Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287728u;
        // 0x28772c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287730u;
}
