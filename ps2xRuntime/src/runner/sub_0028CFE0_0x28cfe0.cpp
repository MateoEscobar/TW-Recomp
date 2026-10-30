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

// Function: sub_0028CFE0
// Address: 0x28cfe0 - 0x28d190
void sub_0028CFE0_0x28cfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028CFE0_0x28cfe0");
#endif

    switch (ctx->pc) {
        case 0x28cfe0u: goto label_28cfe0;
        case 0x28cfe4u: goto label_28cfe4;
        case 0x28cfe8u: goto label_28cfe8;
        case 0x28cfecu: goto label_28cfec;
        case 0x28cff0u: goto label_28cff0;
        case 0x28cff4u: goto label_28cff4;
        case 0x28cff8u: goto label_28cff8;
        case 0x28cffcu: goto label_28cffc;
        case 0x28d000u: goto label_28d000;
        case 0x28d004u: goto label_28d004;
        case 0x28d008u: goto label_28d008;
        case 0x28d00cu: goto label_28d00c;
        case 0x28d010u: goto label_28d010;
        case 0x28d014u: goto label_28d014;
        case 0x28d018u: goto label_28d018;
        case 0x28d01cu: goto label_28d01c;
        case 0x28d020u: goto label_28d020;
        case 0x28d024u: goto label_28d024;
        case 0x28d028u: goto label_28d028;
        case 0x28d02cu: goto label_28d02c;
        case 0x28d030u: goto label_28d030;
        case 0x28d034u: goto label_28d034;
        case 0x28d038u: goto label_28d038;
        case 0x28d03cu: goto label_28d03c;
        case 0x28d040u: goto label_28d040;
        case 0x28d044u: goto label_28d044;
        case 0x28d048u: goto label_28d048;
        case 0x28d04cu: goto label_28d04c;
        case 0x28d050u: goto label_28d050;
        case 0x28d054u: goto label_28d054;
        case 0x28d058u: goto label_28d058;
        case 0x28d05cu: goto label_28d05c;
        case 0x28d060u: goto label_28d060;
        case 0x28d064u: goto label_28d064;
        case 0x28d068u: goto label_28d068;
        case 0x28d06cu: goto label_28d06c;
        case 0x28d070u: goto label_28d070;
        case 0x28d074u: goto label_28d074;
        case 0x28d078u: goto label_28d078;
        case 0x28d07cu: goto label_28d07c;
        case 0x28d080u: goto label_28d080;
        case 0x28d084u: goto label_28d084;
        case 0x28d088u: goto label_28d088;
        case 0x28d08cu: goto label_28d08c;
        case 0x28d090u: goto label_28d090;
        case 0x28d094u: goto label_28d094;
        case 0x28d098u: goto label_28d098;
        case 0x28d09cu: goto label_28d09c;
        case 0x28d0a0u: goto label_28d0a0;
        case 0x28d0a4u: goto label_28d0a4;
        case 0x28d0a8u: goto label_28d0a8;
        case 0x28d0acu: goto label_28d0ac;
        case 0x28d0b0u: goto label_28d0b0;
        case 0x28d0b4u: goto label_28d0b4;
        case 0x28d0b8u: goto label_28d0b8;
        case 0x28d0bcu: goto label_28d0bc;
        case 0x28d0c0u: goto label_28d0c0;
        case 0x28d0c4u: goto label_28d0c4;
        case 0x28d0c8u: goto label_28d0c8;
        case 0x28d0ccu: goto label_28d0cc;
        case 0x28d0d0u: goto label_28d0d0;
        case 0x28d0d4u: goto label_28d0d4;
        case 0x28d0d8u: goto label_28d0d8;
        case 0x28d0dcu: goto label_28d0dc;
        case 0x28d0e0u: goto label_28d0e0;
        case 0x28d0e4u: goto label_28d0e4;
        case 0x28d0e8u: goto label_28d0e8;
        case 0x28d0ecu: goto label_28d0ec;
        case 0x28d0f0u: goto label_28d0f0;
        case 0x28d0f4u: goto label_28d0f4;
        case 0x28d0f8u: goto label_28d0f8;
        case 0x28d0fcu: goto label_28d0fc;
        case 0x28d100u: goto label_28d100;
        case 0x28d104u: goto label_28d104;
        case 0x28d108u: goto label_28d108;
        case 0x28d10cu: goto label_28d10c;
        case 0x28d110u: goto label_28d110;
        case 0x28d114u: goto label_28d114;
        case 0x28d118u: goto label_28d118;
        case 0x28d11cu: goto label_28d11c;
        case 0x28d120u: goto label_28d120;
        case 0x28d124u: goto label_28d124;
        case 0x28d128u: goto label_28d128;
        case 0x28d12cu: goto label_28d12c;
        case 0x28d130u: goto label_28d130;
        case 0x28d134u: goto label_28d134;
        case 0x28d138u: goto label_28d138;
        case 0x28d13cu: goto label_28d13c;
        case 0x28d140u: goto label_28d140;
        case 0x28d144u: goto label_28d144;
        case 0x28d148u: goto label_28d148;
        case 0x28d14cu: goto label_28d14c;
        case 0x28d150u: goto label_28d150;
        case 0x28d154u: goto label_28d154;
        case 0x28d158u: goto label_28d158;
        case 0x28d15cu: goto label_28d15c;
        case 0x28d160u: goto label_28d160;
        case 0x28d164u: goto label_28d164;
        case 0x28d168u: goto label_28d168;
        case 0x28d16cu: goto label_28d16c;
        case 0x28d170u: goto label_28d170;
        case 0x28d174u: goto label_28d174;
        case 0x28d178u: goto label_28d178;
        case 0x28d17cu: goto label_28d17c;
        case 0x28d180u: goto label_28d180;
        case 0x28d184u: goto label_28d184;
        case 0x28d188u: goto label_28d188;
        case 0x28d18cu: goto label_28d18c;
        default: break;
    }

    ctx->pc = 0x28cfe0u;

label_28cfe0:
    // 0x28cfe0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x28cfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_28cfe4:
    // 0x28cfe4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x28cfe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_28cfe8:
    // 0x28cfe8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x28cfe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_28cfec:
    // 0x28cfec: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x28cfecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_28cff0:
    // 0x28cff0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28cff0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28cff4:
    // 0x28cff4: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x28cff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_28cff8:
    // 0x28cff8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x28cff8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28cffc:
    // 0x28cffc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28cffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_28d000:
    // 0x28d000: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x28d000u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_28d004:
    // 0x28d004: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x28d004u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_28d008:
    // 0x28d008: 0x26240124  addiu       $a0, $s1, 0x124
    ctx->pc = 0x28d008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 292));
label_28d00c:
    // 0x28d00c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x28d00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_28d010:
    // 0x28d010: 0xc0e409a  jal         func_390268
label_28d014:
    if (ctx->pc == 0x28D014u) {
        ctx->pc = 0x28D014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D010u;
        // 0x28d014: 0x8e330000  lw          $s3, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D018u;
        goto label_28d018;
    }
    ctx->pc = 0x28D010u;
    SET_GPR_U32(ctx, 31, 0x28D018u);
    ctx->pc = 0x28D014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D010u;
    // 0x28d014: 0x8e330000  lw          $s3, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x28D010u, 0x28D018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D018u;
label_28d018:
    // 0x28d018: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28d018u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28d01c:
    // 0x28d01c: 0x1612000a  bne         $s0, $s2, . + 4 + (0xA << 2)
label_28d020:
    if (ctx->pc == 0x28D020u) {
        ctx->pc = 0x28D024u;
        goto label_28d024;
    }
    ctx->pc = 0x28D01Cu;
    {
        const bool branch_taken_0x28d01c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        if (branch_taken_0x28d01c) {
            ctx->pc = 0x28D048u;
            goto label_28d048;
        }
    }
    ctx->pc = 0x28D024u;
label_28d024:
    // 0x28d024: 0x12400051  beqz        $s2, . + 4 + (0x51 << 2)
label_28d028:
    if (ctx->pc == 0x28D028u) {
        ctx->pc = 0x28D028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D024u;
        // 0x28d028: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D02Cu;
        goto label_28d02c;
    }
    ctx->pc = 0x28D024u;
    {
        const bool branch_taken_0x28d024 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D024u;
        // 0x28d028: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d024) {
            ctx->pc = 0x28D16Cu;
            goto label_28d16c;
        }
    }
    ctx->pc = 0x28D02Cu;
label_28d02c:
    // 0x28d02c: 0xc0a3fde  jal         func_28FF78
label_28d030:
    if (ctx->pc == 0x28D030u) {
        ctx->pc = 0x28D030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D02Cu;
        // 0x28d030: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D034u;
        goto label_28d034;
    }
    ctx->pc = 0x28D02Cu;
    SET_GPR_U32(ctx, 31, 0x28D034u);
    ctx->pc = 0x28D030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D02Cu;
    // 0x28d030: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FF78u, 0x28D02Cu, 0x28D034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D034u;
label_28d034:
    // 0x28d034: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28d034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28d038:
    // 0x28d038: 0xc0a3032  jal         func_28C0C8
label_28d03c:
    if (ctx->pc == 0x28D03Cu) {
        ctx->pc = 0x28D03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D038u;
        // 0x28d03c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D040u;
        goto label_28d040;
    }
    ctx->pc = 0x28D038u;
    SET_GPR_U32(ctx, 31, 0x28D040u);
    ctx->pc = 0x28D03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D038u;
    // 0x28d03c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28C0C8u, 0x28D038u, 0x28D040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D040u;
label_28d040:
    // 0x28d040: 0x1000004b  b           . + 4 + (0x4B << 2)
label_28d044:
    if (ctx->pc == 0x28D044u) {
        ctx->pc = 0x28D044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D040u;
        // 0x28d044: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D048u;
        goto label_28d048;
    }
    ctx->pc = 0x28D040u;
    {
        const bool branch_taken_0x28d040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D040u;
        // 0x28d044: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d040) {
            ctx->pc = 0x28D170u;
            goto label_28d170;
        }
    }
    ctx->pc = 0x28D048u;
label_28d048:
    // 0x28d048: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
label_28d04c:
    if (ctx->pc == 0x28D04Cu) {
        ctx->pc = 0x28D050u;
        goto label_28d050;
    }
    ctx->pc = 0x28D048u;
    {
        const bool branch_taken_0x28d048 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d048) {
            ctx->pc = 0x28D094u;
            goto label_28d094;
        }
    }
    ctx->pc = 0x28D050u;
label_28d050:
    // 0x28d050: 0xc634012c  lwc1        $f20, 0x12C($s1)
    ctx->pc = 0x28d050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_28d054:
    // 0x28d054: 0xc0a2fc0  jal         func_28BF00
label_28d058:
    if (ctx->pc == 0x28D058u) {
        ctx->pc = 0x28D058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D054u;
        // 0x28d058: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D05Cu;
        goto label_28d05c;
    }
    ctx->pc = 0x28D054u;
    SET_GPR_U32(ctx, 31, 0x28D05Cu);
    ctx->pc = 0x28D058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D054u;
    // 0x28d058: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF00u, 0x28D054u, 0x28D05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D05Cu;
label_28d05c:
    // 0x28d05c: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x28d05cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
label_28d060:
    // 0x28d060: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x28d060u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_28d064:
    // 0x28d064: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28d064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28d068:
    // 0x28d068: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x28d068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_28d06c:
    // 0x28d06c: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x28d06cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_28d070:
    // 0x28d070: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28d070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28d074:
    // 0x28d074: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x28d074u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_28d078:
    // 0x28d078: 0xc0888fa  jal         func_2223E8
label_28d07c:
    if (ctx->pc == 0x28D07Cu) {
        ctx->pc = 0x28D07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D078u;
        // 0x28d07c: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D080u;
        goto label_28d080;
    }
    ctx->pc = 0x28D078u;
    SET_GPR_U32(ctx, 31, 0x28D080u);
    ctx->pc = 0x28D07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D078u;
    // 0x28d07c: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2223E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2223E8u, 0x28D078u, 0x28D080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D080u;
label_28d080:
    // 0x28d080: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28d080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28d084:
    // 0x28d084: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28d084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28d088:
    // 0x28d088: 0x262280a  movz        $a1, $s3, $v0
    ctx->pc = 0x28d088u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 19));
label_28d08c:
    // 0x28d08c: 0xc0a3050  jal         func_28C140
label_28d090:
    if (ctx->pc == 0x28D090u) {
        ctx->pc = 0x28D090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D08Cu;
        // 0x28d090: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D094u;
        goto label_28d094;
    }
    ctx->pc = 0x28D08Cu;
    SET_GPR_U32(ctx, 31, 0x28D094u);
    ctx->pc = 0x28D090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D08Cu;
    // 0x28d090: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28C140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28C140u, 0x28D08Cu, 0x28D094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D094u;
label_28d094:
    // 0x28d094: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_28d098:
    if (ctx->pc == 0x28D098u) {
        ctx->pc = 0x28D098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D094u;
        // 0x28d098: 0xa6200148  sh          $zero, 0x148($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 328), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D09Cu;
        goto label_28d09c;
    }
    ctx->pc = 0x28D094u;
    {
        const bool branch_taken_0x28d094 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D094u;
        // 0x28d098: 0xa6200148  sh          $zero, 0x148($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 328), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d094) {
            ctx->pc = 0x28D0F0u;
            goto label_28d0f0;
        }
    }
    ctx->pc = 0x28D09Cu;
label_28d09c:
    // 0x28d09c: 0xc087502  jal         func_21D408
label_28d0a0:
    if (ctx->pc == 0x28D0A0u) {
        ctx->pc = 0x28D0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D09Cu;
        // 0x28d0a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D0A4u;
        goto label_28d0a4;
    }
    ctx->pc = 0x28D09Cu;
    SET_GPR_U32(ctx, 31, 0x28D0A4u);
    ctx->pc = 0x28D0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D09Cu;
    // 0x28d0a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x28D09Cu, 0x28D0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D0A4u;
label_28d0a4:
    // 0x28d0a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28d0a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28d0a8:
    // 0x28d0a8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x28d0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_28d0ac:
    // 0x28d0ac: 0xc0a445e  jal         func_291178
label_28d0b0:
    if (ctx->pc == 0x28D0B0u) {
        ctx->pc = 0x28D0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D0ACu;
        // 0x28d0b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D0B4u;
        goto label_28d0b4;
    }
    ctx->pc = 0x28D0ACu;
    SET_GPR_U32(ctx, 31, 0x28D0B4u);
    ctx->pc = 0x28D0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D0ACu;
    // 0x28d0b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291178u, 0x28D0ACu, 0x28D0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D0B4u;
label_28d0b4:
    // 0x28d0b4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x28d0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_28d0b8:
    // 0x28d0b8: 0xc0a3878  jal         func_28E1E0
label_28d0bc:
    if (ctx->pc == 0x28D0BCu) {
        ctx->pc = 0x28D0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D0B8u;
        // 0x28d0bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D0C0u;
        goto label_28d0c0;
    }
    ctx->pc = 0x28D0B8u;
    SET_GPR_U32(ctx, 31, 0x28D0C0u);
    ctx->pc = 0x28D0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D0B8u;
    // 0x28d0bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E1E0u, 0x28D0B8u, 0x28D0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D0C0u;
label_28d0c0:
    // 0x28d0c0: 0xc136b80  jal         func_4DAE00
label_28d0c4:
    if (ctx->pc == 0x28D0C4u) {
        ctx->pc = 0x28D0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D0C0u;
        // 0x28d0c4: 0x260401a4  addiu       $a0, $s0, 0x1A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 420));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D0C8u;
        goto label_28d0c8;
    }
    ctx->pc = 0x28D0C0u;
    SET_GPR_U32(ctx, 31, 0x28D0C8u);
    ctx->pc = 0x28D0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D0C0u;
    // 0x28d0c4: 0x260401a4  addiu       $a0, $s0, 0x1A4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 420));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAE00u, 0x28D0C0u, 0x28D0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D0C8u;
label_28d0c8:
    // 0x28d0c8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_28d0cc:
    if (ctx->pc == 0x28D0CCu) {
        ctx->pc = 0x28D0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D0C8u;
        // 0x28d0cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D0D0u;
        goto label_28d0d0;
    }
    ctx->pc = 0x28D0C8u;
    {
        const bool branch_taken_0x28d0c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D0C8u;
        // 0x28d0cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d0c8) {
            ctx->pc = 0x28D0ECu;
            goto label_28d0ec;
        }
    }
    ctx->pc = 0x28D0D0u;
label_28d0d0:
    // 0x28d0d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28d0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28d0d4:
    // 0x28d0d4: 0xc0a4476  jal         func_2911D8
label_28d0d8:
    if (ctx->pc == 0x28D0D8u) {
        ctx->pc = 0x28D0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D0D4u;
        // 0x28d0d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D0DCu;
        goto label_28d0dc;
    }
    ctx->pc = 0x28D0D4u;
    SET_GPR_U32(ctx, 31, 0x28D0DCu);
    ctx->pc = 0x28D0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D0D4u;
    // 0x28d0d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2911D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2911D8u, 0x28D0D4u, 0x28D0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D0DCu;
label_28d0dc:
    // 0x28d0dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28d0dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28d0e0:
    // 0x28d0e0: 0xc0a4478  jal         func_2911E0
label_28d0e4:
    if (ctx->pc == 0x28D0E4u) {
        ctx->pc = 0x28D0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D0E0u;
        // 0x28d0e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D0E8u;
        goto label_28d0e8;
    }
    ctx->pc = 0x28D0E0u;
    SET_GPR_U32(ctx, 31, 0x28D0E8u);
    ctx->pc = 0x28D0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D0E0u;
    // 0x28d0e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2911E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2911E0u, 0x28D0E0u, 0x28D0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D0E8u;
label_28d0e8:
    // 0x28d0e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28d0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28d0ec:
    // 0x28d0ec: 0xa22202d3  sb          $v0, 0x2D3($s1)
    ctx->pc = 0x28d0ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 723), (uint8_t)GPR_U32(ctx, 2));
label_28d0f0:
    // 0x28d0f0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x28d0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_28d0f4:
    // 0x28d0f4: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x28d0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_28d0f8:
    // 0x28d0f8: 0x1240001c  beqz        $s2, . + 4 + (0x1C << 2)
label_28d0fc:
    if (ctx->pc == 0x28D0FCu) {
        ctx->pc = 0x28D0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D0F8u;
        // 0x28d0fc: 0xae230124  sw          $v1, 0x124($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D100u;
        goto label_28d100;
    }
    ctx->pc = 0x28D0F8u;
    {
        const bool branch_taken_0x28d0f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D0F8u;
        // 0x28d0fc: 0xae230124  sw          $v1, 0x124($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d0f8) {
            ctx->pc = 0x28D16Cu;
            goto label_28d16c;
        }
    }
    ctx->pc = 0x28D100u;
label_28d100:
    // 0x28d100: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x28d100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_28d104:
    // 0x28d104: 0x8c43cb7c  lw          $v1, -0x3484($v0)
    ctx->pc = 0x28d104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953852)));
label_28d108:
    // 0x28d108: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
label_28d10c:
    if (ctx->pc == 0x28D10Cu) {
        ctx->pc = 0x28D10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D108u;
        // 0x28d10c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D110u;
        goto label_28d110;
    }
    ctx->pc = 0x28D108u;
    {
        const bool branch_taken_0x28d108 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D108u;
        // 0x28d10c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d108) {
            ctx->pc = 0x28D170u;
            goto label_28d170;
        }
    }
    ctx->pc = 0x28D110u;
label_28d110:
    // 0x28d110: 0xc087502  jal         func_21D408
label_28d114:
    if (ctx->pc == 0x28D114u) {
        ctx->pc = 0x28D114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D110u;
        // 0x28d114: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D118u;
        goto label_28d118;
    }
    ctx->pc = 0x28D110u;
    SET_GPR_U32(ctx, 31, 0x28D118u);
    ctx->pc = 0x28D114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D110u;
    // 0x28d114: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x28D110u, 0x28D118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D118u;
label_28d118:
    // 0x28d118: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28d118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28d11c:
    // 0x28d11c: 0x90820120  lbu         $v0, 0x120($a0)
    ctx->pc = 0x28d11cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 288)));
label_28d120:
    // 0x28d120: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_28d124:
    if (ctx->pc == 0x28D124u) {
        ctx->pc = 0x28D124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D120u;
        // 0x28d124: 0x2802b  sltu        $s0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D128u;
        goto label_28d128;
    }
    ctx->pc = 0x28D120u;
    {
        const bool branch_taken_0x28d120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D120u;
        // 0x28d124: 0x2802b  sltu        $s0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d120) {
            ctx->pc = 0x28D154u;
            goto label_28d154;
        }
    }
    ctx->pc = 0x28D128u;
label_28d128:
    // 0x28d128: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x28d128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_28d12c:
    // 0x28d12c: 0xc0a37cc  jal         func_28DF30
label_28d130:
    if (ctx->pc == 0x28D130u) {
        ctx->pc = 0x28D130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D12Cu;
        // 0x28d130: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D134u;
        goto label_28d134;
    }
    ctx->pc = 0x28D12Cu;
    SET_GPR_U32(ctx, 31, 0x28D134u);
    ctx->pc = 0x28D130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D12Cu;
    // 0x28d130: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DF30u, 0x28D12Cu, 0x28D134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D134u;
label_28d134:
    // 0x28d134: 0x54500008  bnel        $v0, $s0, . + 4 + (0x8 << 2)
label_28d138:
    if (ctx->pc == 0x28D138u) {
        ctx->pc = 0x28D138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D134u;
        // 0x28d138: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D13Cu;
        goto label_28d13c;
    }
    ctx->pc = 0x28D134u;
    {
        const bool branch_taken_0x28d134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x28d134) {
            ctx->pc = 0x28D138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D134u;
            // 0x28d138: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D158u;
            goto label_28d158;
        }
    }
    ctx->pc = 0x28D13Cu;
label_28d13c:
    // 0x28d13c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x28d13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_28d140:
    // 0x28d140: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x28d140u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_28d144:
    // 0x28d144: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x28d144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_28d148:
    // 0x28d148: 0x40f809  jalr        $v0
label_28d14c:
    if (ctx->pc == 0x28D14Cu) {
        ctx->pc = 0x28D14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D148u;
        // 0x28d14c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D150u;
        goto label_28d150;
    }
    ctx->pc = 0x28D148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28D150u);
        ctx->pc = 0x28D14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D148u;
        // 0x28d14c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D148u, 0x28D150u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28D150u;
label_28d150:
    // 0x28d150: 0xae220124  sw          $v0, 0x124($s1)
    ctx->pc = 0x28d150u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 2));
label_28d154:
    // 0x28d154: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28d154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28d158:
    // 0x28d158: 0xc0a3fde  jal         func_28FF78
label_28d15c:
    if (ctx->pc == 0x28D15Cu) {
        ctx->pc = 0x28D15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D158u;
        // 0x28d15c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D160u;
        goto label_28d160;
    }
    ctx->pc = 0x28D158u;
    SET_GPR_U32(ctx, 31, 0x28D160u);
    ctx->pc = 0x28D15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D158u;
    // 0x28d15c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FF78u, 0x28D158u, 0x28D160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D160u;
label_28d160:
    // 0x28d160: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28d160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28d164:
    // 0x28d164: 0xc0a3032  jal         func_28C0C8
label_28d168:
    if (ctx->pc == 0x28D168u) {
        ctx->pc = 0x28D168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D164u;
        // 0x28d168: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D16Cu;
        goto label_28d16c;
    }
    ctx->pc = 0x28D164u;
    SET_GPR_U32(ctx, 31, 0x28D16Cu);
    ctx->pc = 0x28D168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D164u;
    // 0x28d168: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28C0C8u, 0x28D164u, 0x28D16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D16Cu;
label_28d16c:
    // 0x28d16c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x28d16cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_28d170:
    // 0x28d170: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x28d170u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_28d174:
    // 0x28d174: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x28d174u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_28d178:
    // 0x28d178: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x28d178u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28d17c:
    // 0x28d17c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x28d17cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28d180:
    // 0x28d180: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28d180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28d184:
    // 0x28d184: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x28d184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_28d188:
    // 0x28d188: 0x3e00008  jr          $ra
label_28d18c:
    if (ctx->pc == 0x28D18Cu) {
        ctx->pc = 0x28D18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D188u;
        // 0x28d18c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D190u;
        goto label_fallthrough_0x28d188;
    }
    ctx->pc = 0x28D188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D188u;
        // 0x28d18c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x28d188:
    ctx->pc = 0x28D190u;
}
