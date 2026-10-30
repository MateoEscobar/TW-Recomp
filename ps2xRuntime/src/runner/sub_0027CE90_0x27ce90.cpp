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

// Function: sub_0027CE90
// Address: 0x27ce90 - 0x27d5a0
void sub_0027CE90_0x27ce90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027CE90_0x27ce90");
#endif

    switch (ctx->pc) {
        case 0x27cec4u: goto label_27cec4;
        case 0x27ced0u: goto label_27ced0;
        case 0x27cee0u: goto label_27cee0;
        case 0x27ceecu: goto label_27ceec;
        case 0x27cefcu: goto label_27cefc;
        case 0x27cf04u: goto label_27cf04;
        case 0x27cf14u: goto label_27cf14;
        case 0x27cf1cu: goto label_27cf1c;
        case 0x27cf2cu: goto label_27cf2c;
        case 0x27cf34u: goto label_27cf34;
        case 0x27cf44u: goto label_27cf44;
        case 0x27cf4cu: goto label_27cf4c;
        case 0x27cf5cu: goto label_27cf5c;
        case 0x27cf68u: goto label_27cf68;
        case 0x27cf78u: goto label_27cf78;
        case 0x27cf8cu: goto label_27cf8c;
        case 0x27cf94u: goto label_27cf94;
        case 0x27cfa4u: goto label_27cfa4;
        case 0x27cfccu: goto label_27cfcc;
        case 0x27cfecu: goto label_27cfec;
        case 0x27cffcu: goto label_27cffc;
        case 0x27d008u: goto label_27d008;
        case 0x27d014u: goto label_27d014;
        case 0x27d01cu: goto label_27d01c;
        case 0x27d024u: goto label_27d024;
        case 0x27d030u: goto label_27d030;
        case 0x27d040u: goto label_27d040;
        case 0x27d04cu: goto label_27d04c;
        case 0x27d074u: goto label_27d074;
        case 0x27d084u: goto label_27d084;
        case 0x27d094u: goto label_27d094;
        case 0x27d0c8u: goto label_27d0c8;
        case 0x27d0d8u: goto label_27d0d8;
        case 0x27d0ecu: goto label_27d0ec;
        case 0x27d100u: goto label_27d100;
        case 0x27d108u: goto label_27d108;
        case 0x27d110u: goto label_27d110;
        case 0x27d118u: goto label_27d118;
        case 0x27d138u: goto label_27d138;
        case 0x27d198u: goto label_27d198;
        case 0x27d1bcu: goto label_27d1bc;
        case 0x27d1ccu: goto label_27d1cc;
        case 0x27d1e8u: goto label_27d1e8;
        case 0x27d1f0u: goto label_27d1f0;
        case 0x27d1f8u: goto label_27d1f8;
        case 0x27d20cu: goto label_27d20c;
        case 0x27d21cu: goto label_27d21c;
        case 0x27d224u: goto label_27d224;
        case 0x27d234u: goto label_27d234;
        case 0x27d23cu: goto label_27d23c;
        case 0x27d270u: goto label_27d270;
        case 0x27d2d4u: goto label_27d2d4;
        case 0x27d2e8u: goto label_27d2e8;
        case 0x27d32cu: goto label_27d32c;
        case 0x27d33cu: goto label_27d33c;
        case 0x27d34cu: goto label_27d34c;
        case 0x27d364u: goto label_27d364;
        case 0x27d36cu: goto label_27d36c;
        case 0x27d418u: goto label_27d418;
        case 0x27d434u: goto label_27d434;
        case 0x27d43cu: goto label_27d43c;
        case 0x27d448u: goto label_27d448;
        case 0x27d458u: goto label_27d458;
        case 0x27d490u: goto label_27d490;
        case 0x27d49cu: goto label_27d49c;
        case 0x27d4ccu: goto label_27d4cc;
        case 0x27d4e0u: goto label_27d4e0;
        case 0x27d50cu: goto label_27d50c;
        case 0x27d528u: goto label_27d528;
        case 0x27d538u: goto label_27d538;
        case 0x27d548u: goto label_27d548;
        case 0x27d574u: goto label_27d574;
        default: break;
    }

    ctx->pc = 0x27ce90u;

    // 0x27ce90: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x27ce90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x27ce94: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x27ce94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x27ce98: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27ce98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ce9c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x27ce9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x27cea0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x27cea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x27cea4: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x27cea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x27cea8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x27cea8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x27ceac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27ceacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x27ceb0: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x27ceb0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ceb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27ceb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27ceb8: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x27ceb8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x27cebc: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x27CEBCu;
    SET_GPR_U32(ctx, 31, 0x27CEC4u);
    ctx->pc = 0x27CEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CEBCu;
    // 0x27cec0: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x27CEBCu, 0x27CEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CEC4u;
label_27cec4:
    // 0x27cec4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27cec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cec8: 0xc051fe6  jal         func_147F98
    ctx->pc = 0x27CEC8u;
    SET_GPR_U32(ctx, 31, 0x27CED0u);
    ctx->pc = 0x27CECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CEC8u;
    // 0x27cecc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147F98u, 0x27CEC8u, 0x27CED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CED0u;
label_27ced0:
    // 0x27ced0: 0xc60c04c4  lwc1        $f12, 0x4C4($s0)
    ctx->pc = 0x27ced0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27ced4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27ced4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ced8: 0xc09ec68  jal         func_27B1A0
    ctx->pc = 0x27CED8u;
    SET_GPR_U32(ctx, 31, 0x27CEE0u);
    ctx->pc = 0x27CEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CED8u;
    // 0x27cedc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B1A0u, 0x27CED8u, 0x27CEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CEE0u;
label_27cee0:
    // 0x27cee0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27cee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cee4: 0xc089b98  jal         func_226E60
    ctx->pc = 0x27CEE4u;
    SET_GPR_U32(ctx, 31, 0x27CEECu);
    ctx->pc = 0x27CEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CEE4u;
    // 0x27cee8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x27CEE4u, 0x27CEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CEECu;
label_27ceec:
    // 0x27ceec: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x27CEECu;
    {
        const bool branch_taken_0x27ceec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ceec) {
            ctx->pc = 0x27CF94u;
            goto label_27cf94;
        }
    }
    ctx->pc = 0x27CEF4u;
    // 0x27cef4: 0xc089b98  jal         func_226E60
    ctx->pc = 0x27CEF4u;
    SET_GPR_U32(ctx, 31, 0x27CEFCu);
    ctx->pc = 0x27CEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CEF4u;
    // 0x27cef8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x27CEF4u, 0x27CEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CEFCu;
label_27cefc:
    // 0x27cefc: 0xc089fac  jal         func_227EB0
    ctx->pc = 0x27CEFCu;
    SET_GPR_U32(ctx, 31, 0x27CF04u);
    ctx->pc = 0x27CF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CEFCu;
    // 0x27cf00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x27CEFCu, 0x27CF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CF04u;
label_27cf04:
    // 0x27cf04: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x27CF04u;
    {
        const bool branch_taken_0x27cf04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27cf04) {
            ctx->pc = 0x27CF54u;
            goto label_27cf54;
        }
    }
    ctx->pc = 0x27CF0Cu;
    // 0x27cf0c: 0xc089b98  jal         func_226E60
    ctx->pc = 0x27CF0Cu;
    SET_GPR_U32(ctx, 31, 0x27CF14u);
    ctx->pc = 0x27CF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CF0Cu;
    // 0x27cf10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x27CF0Cu, 0x27CF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CF14u;
label_27cf14:
    // 0x27cf14: 0xc089f86  jal         func_227E18
    ctx->pc = 0x27CF14u;
    SET_GPR_U32(ctx, 31, 0x27CF1Cu);
    ctx->pc = 0x27CF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CF14u;
    // 0x27cf18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E18u, 0x27CF14u, 0x27CF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CF1Cu;
label_27cf1c:
    // 0x27cf1c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x27CF1Cu;
    {
        const bool branch_taken_0x27cf1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27cf1c) {
            ctx->pc = 0x27CF54u;
            goto label_27cf54;
        }
    }
    ctx->pc = 0x27CF24u;
    // 0x27cf24: 0xc089b98  jal         func_226E60
    ctx->pc = 0x27CF24u;
    SET_GPR_U32(ctx, 31, 0x27CF2Cu);
    ctx->pc = 0x27CF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CF24u;
    // 0x27cf28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x27CF24u, 0x27CF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CF2Cu;
label_27cf2c:
    // 0x27cf2c: 0xc089f76  jal         func_227DD8
    ctx->pc = 0x27CF2Cu;
    SET_GPR_U32(ctx, 31, 0x27CF34u);
    ctx->pc = 0x27CF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CF2Cu;
    // 0x27cf30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x27CF2Cu, 0x27CF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CF34u;
label_27cf34:
    // 0x27cf34: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27CF34u;
    {
        const bool branch_taken_0x27cf34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27cf34) {
            ctx->pc = 0x27CF54u;
            goto label_27cf54;
        }
    }
    ctx->pc = 0x27CF3Cu;
    // 0x27cf3c: 0xc089b98  jal         func_226E60
    ctx->pc = 0x27CF3Cu;
    SET_GPR_U32(ctx, 31, 0x27CF44u);
    ctx->pc = 0x27CF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CF3Cu;
    // 0x27cf40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x27CF3Cu, 0x27CF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CF44u;
label_27cf44:
    // 0x27cf44: 0xc089f4a  jal         func_227D28
    ctx->pc = 0x27CF44u;
    SET_GPR_U32(ctx, 31, 0x27CF4Cu);
    ctx->pc = 0x27CF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CF44u;
    // 0x27cf48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D28u, 0x27CF44u, 0x27CF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CF4Cu;
label_27cf4c:
    // 0x27cf4c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x27CF4Cu;
    {
        const bool branch_taken_0x27cf4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cf4c) {
            ctx->pc = 0x27CF94u;
            goto label_27cf94;
        }
    }
    ctx->pc = 0x27CF54u;
label_27cf54:
    // 0x27cf54: 0xc089b98  jal         func_226E60
    ctx->pc = 0x27CF54u;
    SET_GPR_U32(ctx, 31, 0x27CF5Cu);
    ctx->pc = 0x27CF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CF54u;
    // 0x27cf58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x27CF54u, 0x27CF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CF5Cu;
label_27cf5c:
    // 0x27cf5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27cf5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cf60: 0xc089998  jal         func_226660
    ctx->pc = 0x27CF60u;
    SET_GPR_U32(ctx, 31, 0x27CF68u);
    ctx->pc = 0x27CF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CF60u;
    // 0x27cf64: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x27CF60u, 0x27CF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CF68u;
label_27cf68:
    // 0x27cf68: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x27CF68u;
    {
        const bool branch_taken_0x27cf68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27cf68) {
            ctx->pc = 0x27CF94u;
            goto label_27cf94;
        }
    }
    ctx->pc = 0x27CF70u;
    // 0x27cf70: 0xc089b98  jal         func_226E60
    ctx->pc = 0x27CF70u;
    SET_GPR_U32(ctx, 31, 0x27CF78u);
    ctx->pc = 0x27CF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CF70u;
    // 0x27cf74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x27CF70u, 0x27CF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CF78u;
label_27cf78:
    // 0x27cf78: 0x501026  xor         $v0, $v0, $s0
    ctx->pc = 0x27cf78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
    // 0x27cf7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27cf7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cf80: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x27cf80u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x27cf84: 0xc089988  jal         func_226620
    ctx->pc = 0x27CF84u;
    SET_GPR_U32(ctx, 31, 0x27CF8Cu);
    ctx->pc = 0x27CF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CF84u;
    // 0x27cf88: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x27CF84u, 0x27CF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CF8Cu;
label_27cf8c:
    // 0x27cf8c: 0xc089bdc  jal         func_226F70
    ctx->pc = 0x27CF8Cu;
    SET_GPR_U32(ctx, 31, 0x27CF94u);
    ctx->pc = 0x27CF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CF8Cu;
    // 0x27cf90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x27CF8Cu, 0x27CF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CF94u;
label_27cf94:
    // 0x27cf94: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27CF94u;
    {
        const bool branch_taken_0x27cf94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CF94u;
        // 0x27cf98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cf94) {
            ctx->pc = 0x27CFACu;
            goto label_27cfac;
        }
    }
    ctx->pc = 0x27CF9Cu;
    // 0x27cf9c: 0xc08a62e  jal         func_2298B8
    ctx->pc = 0x27CF9Cu;
    SET_GPR_U32(ctx, 31, 0x27CFA4u);
    ctx->pc = 0x27CFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CF9Cu;
    // 0x27cfa0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2298B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2298B8u, 0x27CF9Cu, 0x27CFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CFA4u;
label_27cfa4:
    // 0x27cfa4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x27CFA4u;
    {
        const bool branch_taken_0x27cfa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CFA4u;
        // 0x27cfa8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cfa4) {
            ctx->pc = 0x27CFC0u;
            goto label_27cfc0;
        }
    }
    ctx->pc = 0x27CFACu;
label_27cfac:
    // 0x27cfac: 0xc68104c4  lwc1        $f1, 0x4C4($s4)
    ctx->pc = 0x27cfacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27cfb0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27cfb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27cfb4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27cfb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27cfb8: 0x0  nop
    ctx->pc = 0x27cfb8u;
    // NOP
    // 0x27cfbc: 0x46000d40  add.s       $f21, $f1, $f0
    ctx->pc = 0x27cfbcu;
    ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_27cfc0:
    // 0x27cfc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27cfc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cfc4: 0xc089988  jal         func_226620
    ctx->pc = 0x27CFC4u;
    SET_GPR_U32(ctx, 31, 0x27CFCCu);
    ctx->pc = 0x27CFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CFC4u;
    // 0x27cfc8: 0x3c050100  lui         $a1, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x27CFC4u, 0x27CFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CFCCu;
label_27cfcc:
    // 0x27cfcc: 0x12400013  beqz        $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x27CFCCu;
    {
        const bool branch_taken_0x27cfcc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cfcc) {
            ctx->pc = 0x27D01Cu;
            goto label_27d01c;
        }
    }
    ctx->pc = 0x27CFD4u;
    // 0x27cfd4: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x27cfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x27cfd8: 0x8443014a  lh          $v1, 0x14A($v0)
    ctx->pc = 0x27cfd8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 330)));
    // 0x27cfdc: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x27CFDCu;
    {
        const bool branch_taken_0x27cfdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CFDCu;
        // 0x27cfe0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cfdc) {
            ctx->pc = 0x27D01Cu;
            goto label_27d01c;
        }
    }
    ctx->pc = 0x27CFE4u;
    // 0x27cfe4: 0xc089998  jal         func_226660
    ctx->pc = 0x27CFE4u;
    SET_GPR_U32(ctx, 31, 0x27CFECu);
    ctx->pc = 0x27CFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CFE4u;
    // 0x27cfe8: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x27CFE4u, 0x27CFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CFECu;
label_27cfec:
    // 0x27cfec: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x27CFECu;
    {
        const bool branch_taken_0x27cfec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27cfec) {
            ctx->pc = 0x27D01Cu;
            goto label_27d01c;
        }
    }
    ctx->pc = 0x27CFF4u;
    // 0x27cff4: 0xc08c050  jal         func_230140
    ctx->pc = 0x27CFF4u;
    SET_GPR_U32(ctx, 31, 0x27CFFCu);
    ctx->pc = 0x27CFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CFF4u;
    // 0x27cff8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230140u, 0x27CFF4u, 0x27CFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CFFCu;
label_27cffc:
    // 0x27cffc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27cffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d000: 0xc089974  jal         func_2265D0
    ctx->pc = 0x27D000u;
    SET_GPR_U32(ctx, 31, 0x27D008u);
    ctx->pc = 0x27D004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D000u;
    // 0x27d004: 0x3c050100  lui         $a1, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x27D000u, 0x27D008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D008u;
label_27d008:
    // 0x27d008: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27d008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d00c: 0xc089988  jal         func_226620
    ctx->pc = 0x27D00Cu;
    SET_GPR_U32(ctx, 31, 0x27D014u);
    ctx->pc = 0x27D010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D00Cu;
    // 0x27d010: 0x34058008  ori         $a1, $zero, 0x8008 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32776);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x27D00Cu, 0x27D014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D014u;
label_27d014:
    // 0x27d014: 0xc089bdc  jal         func_226F70
    ctx->pc = 0x27D014u;
    SET_GPR_U32(ctx, 31, 0x27D01Cu);
    ctx->pc = 0x27D018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D014u;
    // 0x27d018: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x27D014u, 0x27D01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D01Cu;
label_27d01c:
    // 0x27d01c: 0xc089b98  jal         func_226E60
    ctx->pc = 0x27D01Cu;
    SET_GPR_U32(ctx, 31, 0x27D024u);
    ctx->pc = 0x27D020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D01Cu;
    // 0x27d020: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x27D01Cu, 0x27D024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D024u;
label_27d024:
    // 0x27d024: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x27d024u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d028: 0xc089b98  jal         func_226E60
    ctx->pc = 0x27D028u;
    SET_GPR_U32(ctx, 31, 0x27D030u);
    ctx->pc = 0x27D02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D028u;
    // 0x27d02c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x27D028u, 0x27D030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D030u;
label_27d030:
    // 0x27d030: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27D030u;
    {
        const bool branch_taken_0x27d030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D030u;
        // 0x27d034: 0xc69404c4  lwc1        $f20, 0x4C4($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d030) {
            ctx->pc = 0x27D050u;
            goto label_27d050;
        }
    }
    ctx->pc = 0x27D038u;
    // 0x27d038: 0xc089b98  jal         func_226E60
    ctx->pc = 0x27D038u;
    SET_GPR_U32(ctx, 31, 0x27D040u);
    ctx->pc = 0x27D03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D038u;
    // 0x27d03c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x27D038u, 0x27D040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D040u;
label_27d040:
    // 0x27d040: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27d040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d044: 0xc08a62e  jal         func_2298B8
    ctx->pc = 0x27D044u;
    SET_GPR_U32(ctx, 31, 0x27D04Cu);
    ctx->pc = 0x27D048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D044u;
    // 0x27d048: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2298B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2298B8u, 0x27D044u, 0x27D04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D04Cu;
label_27d04c:
    // 0x27d04c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x27d04cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_27d050:
    // 0x27d050: 0x3c014329  lui         $at, 0x4329
    ctx->pc = 0x27d050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17193 << 16));
    // 0x27d054: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27d054u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d058: 0x0  nop
    ctx->pc = 0x27d058u;
    // NOP
    // 0x27d05c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x27d05cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d060: 0x0  nop
    ctx->pc = 0x27d060u;
    // NOP
    // 0x27d064: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x27D064u;
    {
        const bool branch_taken_0x27d064 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27D068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D064u;
        // 0x27d068: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d064) {
            ctx->pc = 0x27D074u;
            goto label_27d074;
        }
    }
    ctx->pc = 0x27D06Cu;
    // 0x27d06c: 0xc089988  jal         func_226620
    ctx->pc = 0x27D06Cu;
    SET_GPR_U32(ctx, 31, 0x27D074u);
    ctx->pc = 0x27D070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D06Cu;
    // 0x27d070: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x27D06Cu, 0x27D074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D074u;
label_27d074:
    // 0x27d074: 0x16400016  bnez        $s2, . + 4 + (0x16 << 2)
    ctx->pc = 0x27D074u;
    {
        const bool branch_taken_0x27d074 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d074) {
            ctx->pc = 0x27D0D0u;
            goto label_27d0d0;
        }
    }
    ctx->pc = 0x27D07Cu;
    // 0x27d07c: 0xc088e98  jal         func_223A60
    ctx->pc = 0x27D07Cu;
    SET_GPR_U32(ctx, 31, 0x27D084u);
    ctx->pc = 0x27D080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D07Cu;
    // 0x27d080: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A60u, 0x27D07Cu, 0x27D084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D084u;
label_27d084:
    // 0x27d084: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x27D084u;
    {
        const bool branch_taken_0x27d084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d084) {
            ctx->pc = 0x27D0D0u;
            goto label_27d0d0;
        }
    }
    ctx->pc = 0x27D08Cu;
    // 0x27d08c: 0xc088ea6  jal         func_223A98
    ctx->pc = 0x27D08Cu;
    SET_GPR_U32(ctx, 31, 0x27D094u);
    ctx->pc = 0x27D090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D08Cu;
    // 0x27d090: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A98u, 0x27D08Cu, 0x27D094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D094u;
label_27d094:
    // 0x27d094: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x27D094u;
    {
        const bool branch_taken_0x27d094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d094) {
            ctx->pc = 0x27D0D0u;
            goto label_27d0d0;
        }
    }
    ctx->pc = 0x27D09Cu;
    // 0x27d09c: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x27d09cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x27d0a0: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x27d0a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x27d0a4: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x27d0a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x27d0a8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x27d0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x27d0ac: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x27d0acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x27d0b0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x27d0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x27d0b4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x27d0b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x27d0b8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x27D0B8u;
    {
        const bool branch_taken_0x27d0b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D0B8u;
        // 0x27d0bc: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d0b8) {
            ctx->pc = 0x27D140u;
            goto label_27d140;
        }
    }
    ctx->pc = 0x27D0C0u;
    // 0x27d0c0: 0xc089f22  jal         func_227C88
    ctx->pc = 0x27D0C0u;
    SET_GPR_U32(ctx, 31, 0x27D0C8u);
    ctx->pc = 0x27D0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D0C0u;
    // 0x27d0c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227C88u, 0x27D0C0u, 0x27D0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D0C8u;
label_27d0c8:
    // 0x27d0c8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x27D0C8u;
    {
        const bool branch_taken_0x27d0c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D0C8u;
        // 0x27d0cc: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d0c8) {
            ctx->pc = 0x27D140u;
            goto label_27d140;
        }
    }
    ctx->pc = 0x27D0D0u;
label_27d0d0:
    // 0x27d0d0: 0xc08a0d0  jal         func_228340
    ctx->pc = 0x27D0D0u;
    SET_GPR_U32(ctx, 31, 0x27D0D8u);
    ctx->pc = 0x27D0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D0D0u;
    // 0x27d0d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x27D0D0u, 0x27D0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D0D8u;
label_27d0d8:
    // 0x27d0d8: 0x10400126  beqz        $v0, . + 4 + (0x126 << 2)
    ctx->pc = 0x27D0D8u;
    {
        const bool branch_taken_0x27d0d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D0D8u;
        // 0x27d0dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d0d8) {
            ctx->pc = 0x27D574u;
            goto label_27d574;
        }
    }
    ctx->pc = 0x27D0E0u;
    // 0x27d0e0: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x27d0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x27d0e4: 0xc089998  jal         func_226660
    ctx->pc = 0x27D0E4u;
    SET_GPR_U32(ctx, 31, 0x27D0ECu);
    ctx->pc = 0x27D0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D0E4u;
    // 0x27d0e8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x27D0E4u, 0x27D0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D0ECu;
label_27d0ec:
    // 0x27d0ec: 0x14400122  bnez        $v0, . + 4 + (0x122 << 2)
    ctx->pc = 0x27D0ECu;
    {
        const bool branch_taken_0x27d0ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D0ECu;
        // 0x27d0f0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d0ec) {
            ctx->pc = 0x27D578u;
            goto label_27d578;
        }
    }
    ctx->pc = 0x27D0F4u;
    // 0x27d0f4: 0x34058008  ori         $a1, $zero, 0x8008
    ctx->pc = 0x27d0f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32776);
    // 0x27d0f8: 0xc089988  jal         func_226620
    ctx->pc = 0x27D0F8u;
    SET_GPR_U32(ctx, 31, 0x27D100u);
    ctx->pc = 0x27D0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D0F8u;
    // 0x27d0fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x27D0F8u, 0x27D100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D100u;
label_27d100:
    // 0x27d100: 0xc089bdc  jal         func_226F70
    ctx->pc = 0x27D100u;
    SET_GPR_U32(ctx, 31, 0x27D108u);
    ctx->pc = 0x27D104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D100u;
    // 0x27d104: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x27D100u, 0x27D108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D108u;
label_27d108:
    // 0x27d108: 0xc08c050  jal         func_230140
    ctx->pc = 0x27D108u;
    SET_GPR_U32(ctx, 31, 0x27D110u);
    ctx->pc = 0x27D10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D108u;
    // 0x27d10c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230140u, 0x27D108u, 0x27D110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D110u;
label_27d110:
    // 0x27d110: 0xc0a007a  jal         func_2801E8
    ctx->pc = 0x27D110u;
    SET_GPR_U32(ctx, 31, 0x27D118u);
    ctx->pc = 0x27D114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D110u;
    // 0x27d114: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2801E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2801E8u, 0x27D110u, 0x27D118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D118u;
label_27d118:
    // 0x27d118: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x27d118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x27d11c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x27d11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x27d120: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x27d120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x27d124: 0x14640114  bne         $v1, $a0, . + 4 + (0x114 << 2)
    ctx->pc = 0x27D124u;
    {
        const bool branch_taken_0x27d124 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x27D128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D124u;
        // 0x27d128: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d124) {
            ctx->pc = 0x27D578u;
            goto label_27d578;
        }
    }
    ctx->pc = 0x27D12Cu;
    // 0x27d12c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27d12cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d130: 0xc0899aa  jal         func_2266A8
    ctx->pc = 0x27D130u;
    SET_GPR_U32(ctx, 31, 0x27D138u);
    ctx->pc = 0x27D134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D130u;
    // 0x27d134: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x27D130u, 0x27D138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D138u;
label_27d138:
    // 0x27d138: 0x1000010f  b           . + 4 + (0x10F << 2)
    ctx->pc = 0x27D138u;
    {
        const bool branch_taken_0x27d138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D138u;
        // 0x27d13c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d138) {
            ctx->pc = 0x27D578u;
            goto label_27d578;
        }
    }
    ctx->pc = 0x27D140u;
label_27d140:
    // 0x27d140: 0x862401be  lh          $a0, 0x1BE($s1)
    ctx->pc = 0x27d140u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 446)));
    // 0x27d144: 0x2445e888  addiu       $a1, $v0, -0x1778
    ctx->pc = 0x27d144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961288));
    // 0x27d148: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27d148u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d14c: 0x84a30002  lh          $v1, 0x2($a1)
    ctx->pc = 0x27d14cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x27d150: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x27D150u;
    {
        const bool branch_taken_0x27d150 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x27D154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D150u;
        // 0x27d154: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d150) {
            ctx->pc = 0x27D188u;
            goto label_27d188;
        }
    }
    ctx->pc = 0x27D158u;
    // 0x27d158: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x27d158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27d15c: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27D15Cu;
    {
        const bool branch_taken_0x27d15c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x27D160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D15Cu;
        // 0x27d160: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d15c) {
            ctx->pc = 0x27D174u;
            goto label_27d174;
        }
    }
    ctx->pc = 0x27D164u;
    // 0x27d164: 0x84a30004  lh          $v1, 0x4($a1)
    ctx->pc = 0x27d164u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x27d168: 0x862201c0  lh          $v0, 0x1C0($s1)
    ctx->pc = 0x27d168u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 448)));
    // 0x27d16c: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27D16Cu;
    {
        const bool branch_taken_0x27d16c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x27D170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D16Cu;
        // 0x27d170: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d16c) {
            ctx->pc = 0x27D184u;
            goto label_27d184;
        }
    }
    ctx->pc = 0x27D174u;
label_27d174:
    // 0x27d174: 0x8e2301c0  lw          $v1, 0x1C0($s1)
    ctx->pc = 0x27d174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 448)));
    // 0x27d178: 0x24421b90  addiu       $v0, $v0, 0x1B90
    ctx->pc = 0x27d178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7056));
    // 0x27d17c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x27D17Cu;
    {
        const bool branch_taken_0x27d17c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27d17c) {
            ctx->pc = 0x27D188u;
            goto label_27d188;
        }
    }
    ctx->pc = 0x27D184u;
label_27d184:
    // 0x27d184: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27d184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27d188:
    // 0x27d188: 0x14c0003b  bnez        $a2, . + 4 + (0x3B << 2)
    ctx->pc = 0x27D188u;
    {
        const bool branch_taken_0x27d188 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D188u;
        // 0x27d18c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d188) {
            ctx->pc = 0x27D278u;
            goto label_27d278;
        }
    }
    ctx->pc = 0x27D190u;
    // 0x27d190: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x27D190u;
    SET_GPR_U32(ctx, 31, 0x27D198u);
    ctx->pc = 0x27D194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D190u;
    // 0x27d194: 0x3c050020  lui         $a1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x27D190u, 0x27D198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D198u;
label_27d198:
    // 0x27d198: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x27D198u;
    {
        const bool branch_taken_0x27d198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D198u;
        // 0x27d19c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d198) {
            ctx->pc = 0x27D278u;
            goto label_27d278;
        }
    }
    ctx->pc = 0x27D1A0u;
    // 0x27d1a0: 0xc44004bc  lwc1        $f0, 0x4BC($v0)
    ctx->pc = 0x27d1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d1a4: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x27d1a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d1a8: 0x0  nop
    ctx->pc = 0x27d1a8u;
    // NOP
    // 0x27d1ac: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x27D1ACu;
    {
        const bool branch_taken_0x27d1ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27d1ac) {
            ctx->pc = 0x27D1C4u;
            goto label_27d1c4;
        }
    }
    ctx->pc = 0x27D1B4u;
    // 0x27d1b4: 0xc089f22  jal         func_227C88
    ctx->pc = 0x27D1B4u;
    SET_GPR_U32(ctx, 31, 0x27D1BCu);
    ctx->pc = 0x27D1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D1B4u;
    // 0x27d1b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227C88u, 0x27D1B4u, 0x27D1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D1BCu;
label_27d1bc:
    // 0x27d1bc: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x27D1BCu;
    {
        const bool branch_taken_0x27d1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d1bc) {
            ctx->pc = 0x27D278u;
            goto label_27d278;
        }
    }
    ctx->pc = 0x27D1C4u;
label_27d1c4:
    // 0x27d1c4: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x27D1C4u;
    SET_GPR_U32(ctx, 31, 0x27D1CCu);
    ctx->pc = 0x27D1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D1C4u;
    // 0x27d1c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x27D1C4u, 0x27D1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D1CCu;
label_27d1cc:
    // 0x27d1cc: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x27d1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x27d1d0: 0x504000e9  beql        $v0, $zero, . + 4 + (0xE9 << 2)
    ctx->pc = 0x27D1D0u;
    {
        const bool branch_taken_0x27d1d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d1d0) {
            ctx->pc = 0x27D1D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D1D0u;
            // 0x27d1d4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D578u;
            goto label_27d578;
        }
    }
    ctx->pc = 0x27D1D8u;
    // 0x27d1d8: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x27d1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x27d1dc: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x27d1dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x27d1e0: 0xc089988  jal         func_226620
    ctx->pc = 0x27D1E0u;
    SET_GPR_U32(ctx, 31, 0x27D1E8u);
    ctx->pc = 0x27D1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D1E0u;
    // 0x27d1e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x27D1E0u, 0x27D1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D1E8u;
label_27d1e8:
    // 0x27d1e8: 0xc0a001a  jal         func_280068
    ctx->pc = 0x27D1E8u;
    SET_GPR_U32(ctx, 31, 0x27D1F0u);
    ctx->pc = 0x27D1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D1E8u;
    // 0x27d1ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280068u, 0x27D1E8u, 0x27D1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D1F0u;
label_27d1f0:
    // 0x27d1f0: 0xc089b98  jal         func_226E60
    ctx->pc = 0x27D1F0u;
    SET_GPR_U32(ctx, 31, 0x27D1F8u);
    ctx->pc = 0x27D1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D1F0u;
    // 0x27d1f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x27D1F0u, 0x27D1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D1F8u;
label_27d1f8:
    // 0x27d1f8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27D1F8u;
    {
        const bool branch_taken_0x27d1f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D1F8u;
        // 0x27d1fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d1f8) {
            ctx->pc = 0x27D21Cu;
            goto label_27d21c;
        }
    }
    ctx->pc = 0x27D200u;
    // 0x27d200: 0x3c05ffcd  lui         $a1, 0xFFCD
    ctx->pc = 0x27d200u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65485 << 16));
    // 0x27d204: 0xc089998  jal         func_226660
    ctx->pc = 0x27D204u;
    SET_GPR_U32(ctx, 31, 0x27D20Cu);
    ctx->pc = 0x27D208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D204u;
    // 0x27d208: 0x34a5feff  ori         $a1, $a1, 0xFEFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65279);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x27D204u, 0x27D20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D20Cu;
label_27d20c:
    // 0x27d20c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D20Cu;
    {
        const bool branch_taken_0x27d20c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D20Cu;
        // 0x27d210: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d20c) {
            ctx->pc = 0x27D21Cu;
            goto label_27d21c;
        }
    }
    ctx->pc = 0x27D214u;
    // 0x27d214: 0xc089b0c  jal         func_226C30
    ctx->pc = 0x27D214u;
    SET_GPR_U32(ctx, 31, 0x27D21Cu);
    ctx->pc = 0x27D218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D214u;
    // 0x27d218: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226C30u, 0x27D214u, 0x27D21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D21Cu;
label_27d21c:
    // 0x27d21c: 0xc089b98  jal         func_226E60
    ctx->pc = 0x27D21Cu;
    SET_GPR_U32(ctx, 31, 0x27D224u);
    ctx->pc = 0x27D220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D21Cu;
    // 0x27d220: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x27D21Cu, 0x27D224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D224u;
label_27d224:
    // 0x27d224: 0x104000d3  beqz        $v0, . + 4 + (0xD3 << 2)
    ctx->pc = 0x27D224u;
    {
        const bool branch_taken_0x27d224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D224u;
        // 0x27d228: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d224) {
            ctx->pc = 0x27D574u;
            goto label_27d574;
        }
    }
    ctx->pc = 0x27D22Cu;
    // 0x27d22c: 0xc089b0c  jal         func_226C30
    ctx->pc = 0x27D22Cu;
    SET_GPR_U32(ctx, 31, 0x27D234u);
    ctx->pc = 0x27D230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D22Cu;
    // 0x27d230: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226C30u, 0x27D22Cu, 0x27D234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D234u;
label_27d234:
    // 0x27d234: 0xc08a05a  jal         func_228168
    ctx->pc = 0x27D234u;
    SET_GPR_U32(ctx, 31, 0x27D23Cu);
    ctx->pc = 0x27D238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D234u;
    // 0x27d238: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228168u, 0x27D234u, 0x27D23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D23Cu;
label_27d23c:
    // 0x27d23c: 0x144000ce  bnez        $v0, . + 4 + (0xCE << 2)
    ctx->pc = 0x27D23Cu;
    {
        const bool branch_taken_0x27d23c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D23Cu;
        // 0x27d240: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d23c) {
            ctx->pc = 0x27D578u;
            goto label_27d578;
        }
    }
    ctx->pc = 0x27D244u;
    // 0x27d244: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x27d244u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x27d248: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x27d248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x27d24c: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x27d24cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x27d250: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x27d250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x27d254: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x27d254u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x27d258: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x27d258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x27d25c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x27d25cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x27d260: 0x544000c6  bnel        $v0, $zero, . + 4 + (0xC6 << 2)
    ctx->pc = 0x27D260u;
    {
        const bool branch_taken_0x27d260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d260) {
            ctx->pc = 0x27D264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D260u;
            // 0x27d264: 0x7bb10050  lq          $s1, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D57Cu;
            goto label_27d57c;
        }
    }
    ctx->pc = 0x27D268u;
    // 0x27d268: 0xc0a0056  jal         func_280158
    ctx->pc = 0x27D268u;
    SET_GPR_U32(ctx, 31, 0x27D270u);
    ctx->pc = 0x27D26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D268u;
    // 0x27d26c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280158u, 0x27D268u, 0x27D270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D270u;
label_27d270:
    // 0x27d270: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x27D270u;
    {
        const bool branch_taken_0x27d270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D270u;
        // 0x27d274: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d270) {
            ctx->pc = 0x27D578u;
            goto label_27d578;
        }
    }
    ctx->pc = 0x27D278u;
label_27d278:
    // 0x27d278: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x27D278u;
    {
        const bool branch_taken_0x27d278 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D278u;
        // 0x27d27c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d278) {
            ctx->pc = 0x27D29Cu;
            goto label_27d29c;
        }
    }
    ctx->pc = 0x27D280u;
    // 0x27d280: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x27d280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x27d284: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x27d284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    // 0x27d288: 0x8c6500f4  lw          $a1, 0xF4($v1)
    ctx->pc = 0x27d288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
    // 0x27d28c: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x27d28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x27d290: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x27d290u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x27d294: 0x544000b8  bnel        $v0, $zero, . + 4 + (0xB8 << 2)
    ctx->pc = 0x27D294u;
    {
        const bool branch_taken_0x27d294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d294) {
            ctx->pc = 0x27D298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D294u;
            // 0x27d298: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D578u;
            goto label_27d578;
        }
    }
    ctx->pc = 0x27D29Cu;
label_27d29c:
    // 0x27d29c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x27d29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x27d2a0: 0xc44004bc  lwc1        $f0, 0x4BC($v0)
    ctx->pc = 0x27d2a0u;
    { uint32_t bits = FAST_READ32(0x5104BCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d2a4: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x27d2a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d2a8: 0x0  nop
    ctx->pc = 0x27d2a8u;
    // NOP
    // 0x27d2ac: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x27D2ACu;
    {
        const bool branch_taken_0x27d2ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27D2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D2ACu;
        // 0x27d2b0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d2ac) {
            ctx->pc = 0x27D2F0u;
            goto label_27d2f0;
        }
    }
    ctx->pc = 0x27D2B4u;
    // 0x27d2b4: 0xc44004c0  lwc1        $f0, 0x4C0($v0)
    ctx->pc = 0x27d2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d2b8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x27d2b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d2bc: 0x0  nop
    ctx->pc = 0x27d2bcu;
    // NOP
    // 0x27d2c0: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x27D2C0u;
    {
        const bool branch_taken_0x27d2c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27D2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D2C0u;
        // 0x27d2c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d2c0) {
            ctx->pc = 0x27D2F0u;
            goto label_27d2f0;
        }
    }
    ctx->pc = 0x27D2C8u;
    // 0x27d2c8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x27d2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x27d2cc: 0xc089998  jal         func_226660
    ctx->pc = 0x27D2CCu;
    SET_GPR_U32(ctx, 31, 0x27D2D4u);
    ctx->pc = 0x27D2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D2CCu;
    // 0x27d2d0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x27D2CCu, 0x27D2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D2D4u;
label_27d2d4:
    // 0x27d2d4: 0x544000a8  bnel        $v0, $zero, . + 4 + (0xA8 << 2)
    ctx->pc = 0x27D2D4u;
    {
        const bool branch_taken_0x27d2d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d2d4) {
            ctx->pc = 0x27D2D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D2D4u;
            // 0x27d2d8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D578u;
            goto label_27d578;
        }
    }
    ctx->pc = 0x27D2DCu;
    // 0x27d2dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27d2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d2e0: 0xc089b0c  jal         func_226C30
    ctx->pc = 0x27D2E0u;
    SET_GPR_U32(ctx, 31, 0x27D2E8u);
    ctx->pc = 0x27D2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D2E0u;
    // 0x27d2e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226C30u, 0x27D2E0u, 0x27D2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D2E8u;
label_27d2e8:
    // 0x27d2e8: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x27D2E8u;
    {
        const bool branch_taken_0x27d2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D2E8u;
        // 0x27d2ec: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d2e8) {
            ctx->pc = 0x27D578u;
            goto label_27d578;
        }
    }
    ctx->pc = 0x27D2F0u;
label_27d2f0:
    // 0x27d2f0: 0xc68004c4  lwc1        $f0, 0x4C4($s4)
    ctx->pc = 0x27d2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d2f4: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x27d2f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d2f8: 0x0  nop
    ctx->pc = 0x27d2f8u;
    // NOP
    // 0x27d2fc: 0x4500009d  bc1f        . + 4 + (0x9D << 2)
    ctx->pc = 0x27D2FCu;
    {
        const bool branch_taken_0x27d2fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27D300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D2FCu;
        // 0x27d300: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d2fc) {
            ctx->pc = 0x27D574u;
            goto label_27d574;
        }
    }
    ctx->pc = 0x27D304u;
    // 0x27d304: 0x8e2400d4  lw          $a0, 0xD4($s1)
    ctx->pc = 0x27d304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x27d308: 0x8c65b734  lw          $a1, -0x48CC($v1)
    ctx->pc = 0x27d308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
    // 0x27d30c: 0x8c8200f4  lw          $v0, 0xF4($a0)
    ctx->pc = 0x27d30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x27d310: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x27d310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x27d314: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x27d314u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x27d318: 0x10400096  beqz        $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x27D318u;
    {
        const bool branch_taken_0x27d318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D318u;
        // 0x27d31c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d318) {
            ctx->pc = 0x27D574u;
            goto label_27d574;
        }
    }
    ctx->pc = 0x27D320u;
    // 0x27d320: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x27d320u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x27d324: 0xc089998  jal         func_226660
    ctx->pc = 0x27D324u;
    SET_GPR_U32(ctx, 31, 0x27D32Cu);
    ctx->pc = 0x27D328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D324u;
    // 0x27d328: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x27D324u, 0x27D32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D32Cu;
label_27d32c:
    // 0x27d32c: 0x14400092  bnez        $v0, . + 4 + (0x92 << 2)
    ctx->pc = 0x27D32Cu;
    {
        const bool branch_taken_0x27d32c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D32Cu;
        // 0x27d330: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d32c) {
            ctx->pc = 0x27D578u;
            goto label_27d578;
        }
    }
    ctx->pc = 0x27D334u;
    // 0x27d334: 0xc089f22  jal         func_227C88
    ctx->pc = 0x27D334u;
    SET_GPR_U32(ctx, 31, 0x27D33Cu);
    ctx->pc = 0x27D338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D334u;
    // 0x27d338: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227C88u, 0x27D334u, 0x27D33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D33Cu;
label_27d33c:
    // 0x27d33c: 0x1440008e  bnez        $v0, . + 4 + (0x8E << 2)
    ctx->pc = 0x27D33Cu;
    {
        const bool branch_taken_0x27d33c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D33Cu;
        // 0x27d340: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d33c) {
            ctx->pc = 0x27D578u;
            goto label_27d578;
        }
    }
    ctx->pc = 0x27D344u;
    // 0x27d344: 0xc089f36  jal         func_227CD8
    ctx->pc = 0x27D344u;
    SET_GPR_U32(ctx, 31, 0x27D34Cu);
    ctx->pc = 0x27D348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D344u;
    // 0x27d348: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227CD8u, 0x27D344u, 0x27D34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D34Cu;
label_27d34c:
    // 0x27d34c: 0x1440008a  bnez        $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x27D34Cu;
    {
        const bool branch_taken_0x27d34c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D34Cu;
        // 0x27d350: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d34c) {
            ctx->pc = 0x27D578u;
            goto label_27d578;
        }
    }
    ctx->pc = 0x27D354u;
    // 0x27d354: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D354u;
    {
        const bool branch_taken_0x27d354 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d354) {
            ctx->pc = 0x27D364u;
            goto label_27d364;
        }
    }
    ctx->pc = 0x27D35Cu;
    // 0x27d35c: 0xc089bdc  jal         func_226F70
    ctx->pc = 0x27D35Cu;
    SET_GPR_U32(ctx, 31, 0x27D364u);
    ctx->pc = 0x27D360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D35Cu;
    // 0x27d360: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x27D35Cu, 0x27D364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D364u;
label_27d364:
    // 0x27d364: 0xc08a0d0  jal         func_228340
    ctx->pc = 0x27D364u;
    SET_GPR_U32(ctx, 31, 0x27D36Cu);
    ctx->pc = 0x27D368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D364u;
    // 0x27d368: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x27D364u, 0x27D36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D36Cu;
label_27d36c:
    // 0x27d36c: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x27D36Cu;
    {
        const bool branch_taken_0x27d36c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D36Cu;
        // 0x27d370: 0x2644e888  addiu       $a0, $s2, -0x1778 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d36c) {
            ctx->pc = 0x27D434u;
            goto label_27d434;
        }
    }
    ctx->pc = 0x27D374u;
    // 0x27d374: 0x862301be  lh          $v1, 0x1BE($s1)
    ctx->pc = 0x27d374u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 446)));
    // 0x27d378: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x27d378u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x27d37c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27d37cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d380: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x27D380u;
    {
        const bool branch_taken_0x27d380 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27D384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D380u;
        // 0x27d384: 0x962501be  lhu         $a1, 0x1BE($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 446)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d380) {
            ctx->pc = 0x27D3B8u;
            goto label_27d3b8;
        }
    }
    ctx->pc = 0x27D388u;
    // 0x27d388: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x27d388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27d38c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27D38Cu;
    {
        const bool branch_taken_0x27d38c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27D390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D38Cu;
        // 0x27d390: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d38c) {
            ctx->pc = 0x27D3A4u;
            goto label_27d3a4;
        }
    }
    ctx->pc = 0x27D394u;
    // 0x27d394: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x27d394u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x27d398: 0x862201c0  lh          $v0, 0x1C0($s1)
    ctx->pc = 0x27d398u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 448)));
    // 0x27d39c: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27D39Cu;
    {
        const bool branch_taken_0x27d39c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x27D3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D39Cu;
        // 0x27d3a0: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d39c) {
            ctx->pc = 0x27D3B4u;
            goto label_27d3b4;
        }
    }
    ctx->pc = 0x27D3A4u;
label_27d3a4:
    // 0x27d3a4: 0x8e2301c0  lw          $v1, 0x1C0($s1)
    ctx->pc = 0x27d3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 448)));
    // 0x27d3a8: 0x24421b90  addiu       $v0, $v0, 0x1B90
    ctx->pc = 0x27d3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7056));
    // 0x27d3ac: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x27D3ACu;
    {
        const bool branch_taken_0x27d3ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27d3ac) {
            ctx->pc = 0x27D3B8u;
            goto label_27d3b8;
        }
    }
    ctx->pc = 0x27D3B4u;
label_27d3b4:
    // 0x27d3b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27d3b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27d3b8:
    // 0x27d3b8: 0x14c00015  bnez        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x27D3B8u;
    {
        const bool branch_taken_0x27d3b8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D3B8u;
        // 0x27d3bc: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d3b8) {
            ctx->pc = 0x27D410u;
            goto label_27d410;
        }
    }
    ctx->pc = 0x27D3C0u;
    // 0x27d3c0: 0x51c00  sll         $v1, $a1, 16
    ctx->pc = 0x27d3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x27d3c4: 0x2444e878  addiu       $a0, $v0, -0x1788
    ctx->pc = 0x27d3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961272));
    // 0x27d3c8: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x27d3c8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x27d3cc: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x27d3ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x27d3d0: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x27D3D0u;
    {
        const bool branch_taken_0x27d3d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27D3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D3D0u;
        // 0x27d3d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d3d0) {
            ctx->pc = 0x27D408u;
            goto label_27d408;
        }
    }
    ctx->pc = 0x27D3D8u;
    // 0x27d3d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x27d3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27d3dc: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27D3DCu;
    {
        const bool branch_taken_0x27d3dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27D3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D3DCu;
        // 0x27d3e0: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d3dc) {
            ctx->pc = 0x27D3F4u;
            goto label_27d3f4;
        }
    }
    ctx->pc = 0x27D3E4u;
    // 0x27d3e4: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x27d3e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x27d3e8: 0x862201c0  lh          $v0, 0x1C0($s1)
    ctx->pc = 0x27d3e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 448)));
    // 0x27d3ec: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27D3ECu;
    {
        const bool branch_taken_0x27d3ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x27D3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D3ECu;
        // 0x27d3f0: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d3ec) {
            ctx->pc = 0x27D404u;
            goto label_27d404;
        }
    }
    ctx->pc = 0x27D3F4u;
label_27d3f4:
    // 0x27d3f4: 0x8e2301c0  lw          $v1, 0x1C0($s1)
    ctx->pc = 0x27d3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 448)));
    // 0x27d3f8: 0x24420e38  addiu       $v0, $v0, 0xE38
    ctx->pc = 0x27d3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3640));
    // 0x27d3fc: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x27D3FCu;
    {
        const bool branch_taken_0x27d3fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27d3fc) {
            ctx->pc = 0x27D408u;
            goto label_27d408;
        }
    }
    ctx->pc = 0x27D404u;
label_27d404:
    // 0x27d404: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27d404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27d408:
    // 0x27d408: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x27D408u;
    {
        const bool branch_taken_0x27d408 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d408) {
            ctx->pc = 0x27D434u;
            goto label_27d434;
        }
    }
    ctx->pc = 0x27D410u;
label_27d410:
    // 0x27d410: 0xc0a007a  jal         func_2801E8
    ctx->pc = 0x27D410u;
    SET_GPR_U32(ctx, 31, 0x27D418u);
    ctx->pc = 0x27D414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D410u;
    // 0x27d414: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2801E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2801E8u, 0x27D410u, 0x27D418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D418u;
label_27d418:
    // 0x27d418: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x27d418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x27d41c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x27d41cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x27d420: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x27d420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x27d424: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D424u;
    {
        const bool branch_taken_0x27d424 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x27D428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D424u;
        // 0x27d428: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d424) {
            ctx->pc = 0x27D434u;
            goto label_27d434;
        }
    }
    ctx->pc = 0x27D42Cu;
    // 0x27d42c: 0xc0899aa  jal         func_2266A8
    ctx->pc = 0x27D42Cu;
    SET_GPR_U32(ctx, 31, 0x27D434u);
    ctx->pc = 0x27D430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D42Cu;
    // 0x27d430: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x27D42Cu, 0x27D434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D434u;
label_27d434:
    // 0x27d434: 0xc087502  jal         func_21D408
    ctx->pc = 0x27D434u;
    SET_GPR_U32(ctx, 31, 0x27D43Cu);
    ctx->pc = 0x27D438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D434u;
    // 0x27d438: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x27D434u, 0x27D43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D43Cu;
label_27d43c:
    // 0x27d43c: 0x24500164  addiu       $s0, $v0, 0x164
    ctx->pc = 0x27d43cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 356));
    // 0x27d440: 0xc137832  jal         func_4DE0C8
    ctx->pc = 0x27D440u;
    SET_GPR_U32(ctx, 31, 0x27D448u);
    ctx->pc = 0x27D444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D440u;
    // 0x27d444: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0C8u, 0x27D440u, 0x27D448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D448u;
label_27d448:
    // 0x27d448: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x27D448u;
    {
        const bool branch_taken_0x27d448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D448u;
        // 0x27d44c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d448) {
            ctx->pc = 0x27D530u;
            goto label_27d530;
        }
    }
    ctx->pc = 0x27D450u;
    // 0x27d450: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x27D450u;
    SET_GPR_U32(ctx, 31, 0x27D458u);
    ctx->pc = 0x27D454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D450u;
    // 0x27d454: 0x3c050020  lui         $a1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x27D450u, 0x27D458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D458u;
label_27d458:
    // 0x27d458: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x27D458u;
    {
        const bool branch_taken_0x27d458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D458u;
        // 0x27d45c: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d458) {
            ctx->pc = 0x27D530u;
            goto label_27d530;
        }
    }
    ctx->pc = 0x27D460u;
    // 0x27d460: 0x86250092  lh          $a1, 0x92($s1)
    ctx->pc = 0x27d460u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x27d464: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x27d464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
    // 0x27d468: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x27d468u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
    // 0x27d46c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27d46cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d470: 0x24534b00  addiu       $s3, $v0, 0x4B00
    ctx->pc = 0x27d470u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x27d474: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x27d474u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x27d478: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27d478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d47c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x27d47cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x27d480: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x27d480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x27d484: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x27d484u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d488: 0xc136d6c  jal         func_4DB5B0
    ctx->pc = 0x27D488u;
    SET_GPR_U32(ctx, 31, 0x27D490u);
    ctx->pc = 0x27D48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D488u;
    // 0x27d48c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB5B0u, 0x27D488u, 0x27D490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D490u;
label_27d490:
    // 0x27d490: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x27d490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x27d494: 0xc0e409a  jal         func_390268
    ctx->pc = 0x27D494u;
    SET_GPR_U32(ctx, 31, 0x27D49Cu);
    ctx->pc = 0x27D498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D494u;
    // 0x27d498: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x27D494u, 0x27D49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D49Cu;
label_27d49c:
    // 0x27d49c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27d49cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d4a0: 0x12000023  beqz        $s0, . + 4 + (0x23 << 2)
    ctx->pc = 0x27D4A0u;
    {
        const bool branch_taken_0x27d4a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D4A0u;
        // 0x27d4a4: 0xc7a10000  lwc1        $f1, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d4a0) {
            ctx->pc = 0x27D530u;
            goto label_27d530;
        }
    }
    ctx->pc = 0x27D4A8u;
    // 0x27d4a8: 0x3c0143c8  lui         $at, 0x43C8
    ctx->pc = 0x27d4a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17352 << 16));
    // 0x27d4ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27d4acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d4b0: 0x0  nop
    ctx->pc = 0x27d4b0u;
    // NOP
    // 0x27d4b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27d4b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d4b8: 0x0  nop
    ctx->pc = 0x27d4b8u;
    // NOP
    // 0x27d4bc: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x27D4BCu;
    {
        const bool branch_taken_0x27d4bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27D4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D4BCu;
        // 0x27d4c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d4bc) {
            ctx->pc = 0x27D530u;
            goto label_27d530;
        }
    }
    ctx->pc = 0x27D4C4u;
    // 0x27d4c4: 0xc087502  jal         func_21D408
    ctx->pc = 0x27D4C4u;
    SET_GPR_U32(ctx, 31, 0x27D4CCu);
    ctx->pc = 0x27D4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D4C4u;
    // 0x27d4c8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x27D4C4u, 0x27D4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D4CCu;
label_27d4cc:
    // 0x27d4cc: 0x8c43021c  lw          $v1, 0x21C($v0)
    ctx->pc = 0x27d4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 540)));
    // 0x27d4d0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27D4D0u;
    {
        const bool branch_taken_0x27d4d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d4d0) {
            ctx->pc = 0x27D4E8u;
            goto label_27d4e8;
        }
    }
    ctx->pc = 0x27D4D8u;
    // 0x27d4d8: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x27D4D8u;
    SET_GPR_U32(ctx, 31, 0x27D4E0u);
    ctx->pc = 0x27D4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D4D8u;
    // 0x27d4dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x27D4D8u, 0x27D4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D4E0u;
label_27d4e0:
    // 0x27d4e0: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x27d4e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x27d4e4: 0x2c720001  sltiu       $s2, $v1, 0x1
    ctx->pc = 0x27d4e4u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_27d4e8:
    // 0x27d4e8: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x27D4E8u;
    {
        const bool branch_taken_0x27d4e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D4E8u;
        // 0x27d4ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d4e8) {
            ctx->pc = 0x27D530u;
            goto label_27d530;
        }
    }
    ctx->pc = 0x27D4F0u;
    // 0x27d4f0: 0x86050092  lh          $a1, 0x92($s0)
    ctx->pc = 0x27d4f0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x27d4f4: 0x3c014006  lui         $at, 0x4006
    ctx->pc = 0x27d4f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16390 << 16));
    // 0x27d4f8: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x27d4f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x27d4fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x27d4fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27d500: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x27d500u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x27d504: 0xc0889c4  jal         func_222710
    ctx->pc = 0x27D504u;
    SET_GPR_U32(ctx, 31, 0x27D50Cu);
    ctx->pc = 0x27D508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D504u;
    // 0x27d508: 0xb32821  addu        $a1, $a1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222710u, 0x27D504u, 0x27D50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D50Cu;
label_27d50c:
    // 0x27d50c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27D50Cu;
    {
        const bool branch_taken_0x27d50c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d50c) {
            ctx->pc = 0x27D530u;
            goto label_27d530;
        }
    }
    ctx->pc = 0x27D514u;
    // 0x27d514: 0x8e2201a8  lw          $v0, 0x1A8($s1)
    ctx->pc = 0x27d514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 424)));
    // 0x27d518: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27D518u;
    {
        const bool branch_taken_0x27d518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d518) {
            ctx->pc = 0x27D530u;
            goto label_27d530;
        }
    }
    ctx->pc = 0x27D520u;
    // 0x27d520: 0xc0a001a  jal         func_280068
    ctx->pc = 0x27D520u;
    SET_GPR_U32(ctx, 31, 0x27D528u);
    ctx->pc = 0x27D524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D520u;
    // 0x27d524: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280068u, 0x27D520u, 0x27D528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D528u;
label_27d528:
    // 0x27d528: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x27D528u;
    {
        const bool branch_taken_0x27d528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D528u;
        // 0x27d52c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d528) {
            ctx->pc = 0x27D578u;
            goto label_27d578;
        }
    }
    ctx->pc = 0x27D530u;
label_27d530:
    // 0x27d530: 0xc08a0d0  jal         func_228340
    ctx->pc = 0x27D530u;
    SET_GPR_U32(ctx, 31, 0x27D538u);
    ctx->pc = 0x27D534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D530u;
    // 0x27d534: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x27D530u, 0x27D538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D538u;
label_27d538:
    // 0x27d538: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x27D538u;
    {
        const bool branch_taken_0x27d538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D538u;
        // 0x27d53c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d538) {
            ctx->pc = 0x27D578u;
            goto label_27d578;
        }
    }
    ctx->pc = 0x27D540u;
    // 0x27d540: 0xc0a0046  jal         func_280118
    ctx->pc = 0x27D540u;
    SET_GPR_U32(ctx, 31, 0x27D548u);
    ctx->pc = 0x27D544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D540u;
    // 0x27d544: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280118u, 0x27D540u, 0x27D548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D548u;
label_27d548:
    // 0x27d548: 0x8e2201a8  lw          $v0, 0x1A8($s1)
    ctx->pc = 0x27d548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 424)));
    // 0x27d54c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27D54Cu;
    {
        const bool branch_taken_0x27d54c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D54Cu;
        // 0x27d550: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d54c) {
            ctx->pc = 0x27D564u;
            goto label_27d564;
        }
    }
    ctx->pc = 0x27D554u;
    // 0x27d554: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x27d554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x27d558: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x27d558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x27d55c: 0x3842000b  xori        $v0, $v0, 0xB
    ctx->pc = 0x27d55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)11);
    // 0x27d560: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x27d560u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_27d564:
    // 0x27d564: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D564u;
    {
        const bool branch_taken_0x27d564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D564u;
        // 0x27d568: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d564) {
            ctx->pc = 0x27D574u;
            goto label_27d574;
        }
    }
    ctx->pc = 0x27D56Cu;
    // 0x27d56c: 0xc0899aa  jal         func_2266A8
    ctx->pc = 0x27D56Cu;
    SET_GPR_U32(ctx, 31, 0x27D574u);
    ctx->pc = 0x27D570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D56Cu;
    // 0x27d570: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x27D56Cu, 0x27D574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D574u;
label_27d574:
    // 0x27d574: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x27d574u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_27d578:
    // 0x27d578: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x27d578u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_27d57c:
    // 0x27d57c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x27d57cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27d580: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27d580u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27d584: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x27d584u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27d588: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27d588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27d58c: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x27d58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27d590: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x27d590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27d594: 0x3e00008  jr          $ra
    ctx->pc = 0x27D594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D594u;
        // 0x27d598: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27D59Cu;
    // 0x27d59c: 0x0  nop
    ctx->pc = 0x27d59cu;
    // NOP
    ctx->pc = 0x27d5a0u;
}
