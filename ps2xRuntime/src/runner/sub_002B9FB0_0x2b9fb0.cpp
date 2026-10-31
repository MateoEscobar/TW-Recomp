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

// Function: sub_002B9FB0
// Address: 0x2b9fb0 - 0x2ba118
void sub_002B9FB0_0x2b9fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B9FB0_0x2b9fb0");
#endif

    switch (ctx->pc) {
        case 0x2b9fb0u: goto label_2b9fb0;
        case 0x2b9fb4u: goto label_2b9fb4;
        case 0x2b9fb8u: goto label_2b9fb8;
        case 0x2b9fbcu: goto label_2b9fbc;
        case 0x2b9fc0u: goto label_2b9fc0;
        case 0x2b9fc4u: goto label_2b9fc4;
        case 0x2b9fc8u: goto label_2b9fc8;
        case 0x2b9fccu: goto label_2b9fcc;
        case 0x2b9fd0u: goto label_2b9fd0;
        case 0x2b9fd4u: goto label_2b9fd4;
        case 0x2b9fd8u: goto label_2b9fd8;
        case 0x2b9fdcu: goto label_2b9fdc;
        case 0x2b9fe0u: goto label_2b9fe0;
        case 0x2b9fe4u: goto label_2b9fe4;
        case 0x2b9fe8u: goto label_2b9fe8;
        case 0x2b9fecu: goto label_2b9fec;
        case 0x2b9ff0u: goto label_2b9ff0;
        case 0x2b9ff4u: goto label_2b9ff4;
        case 0x2b9ff8u: goto label_2b9ff8;
        case 0x2b9ffcu: goto label_2b9ffc;
        case 0x2ba000u: goto label_2ba000;
        case 0x2ba004u: goto label_2ba004;
        case 0x2ba008u: goto label_2ba008;
        case 0x2ba00cu: goto label_2ba00c;
        case 0x2ba010u: goto label_2ba010;
        case 0x2ba014u: goto label_2ba014;
        case 0x2ba018u: goto label_2ba018;
        case 0x2ba01cu: goto label_2ba01c;
        case 0x2ba020u: goto label_2ba020;
        case 0x2ba024u: goto label_2ba024;
        case 0x2ba028u: goto label_2ba028;
        case 0x2ba02cu: goto label_2ba02c;
        case 0x2ba030u: goto label_2ba030;
        case 0x2ba034u: goto label_2ba034;
        case 0x2ba038u: goto label_2ba038;
        case 0x2ba03cu: goto label_2ba03c;
        case 0x2ba040u: goto label_2ba040;
        case 0x2ba044u: goto label_2ba044;
        case 0x2ba048u: goto label_2ba048;
        case 0x2ba04cu: goto label_2ba04c;
        case 0x2ba050u: goto label_2ba050;
        case 0x2ba054u: goto label_2ba054;
        case 0x2ba058u: goto label_2ba058;
        case 0x2ba05cu: goto label_2ba05c;
        case 0x2ba060u: goto label_2ba060;
        case 0x2ba064u: goto label_2ba064;
        case 0x2ba068u: goto label_2ba068;
        case 0x2ba06cu: goto label_2ba06c;
        case 0x2ba070u: goto label_2ba070;
        case 0x2ba074u: goto label_2ba074;
        case 0x2ba078u: goto label_2ba078;
        case 0x2ba07cu: goto label_2ba07c;
        case 0x2ba080u: goto label_2ba080;
        case 0x2ba084u: goto label_2ba084;
        case 0x2ba088u: goto label_2ba088;
        case 0x2ba08cu: goto label_2ba08c;
        case 0x2ba090u: goto label_2ba090;
        case 0x2ba094u: goto label_2ba094;
        case 0x2ba098u: goto label_2ba098;
        case 0x2ba09cu: goto label_2ba09c;
        case 0x2ba0a0u: goto label_2ba0a0;
        case 0x2ba0a4u: goto label_2ba0a4;
        case 0x2ba0a8u: goto label_2ba0a8;
        case 0x2ba0acu: goto label_2ba0ac;
        case 0x2ba0b0u: goto label_2ba0b0;
        case 0x2ba0b4u: goto label_2ba0b4;
        case 0x2ba0b8u: goto label_2ba0b8;
        case 0x2ba0bcu: goto label_2ba0bc;
        case 0x2ba0c0u: goto label_2ba0c0;
        case 0x2ba0c4u: goto label_2ba0c4;
        case 0x2ba0c8u: goto label_2ba0c8;
        case 0x2ba0ccu: goto label_2ba0cc;
        case 0x2ba0d0u: goto label_2ba0d0;
        case 0x2ba0d4u: goto label_2ba0d4;
        case 0x2ba0d8u: goto label_2ba0d8;
        case 0x2ba0dcu: goto label_2ba0dc;
        case 0x2ba0e0u: goto label_2ba0e0;
        case 0x2ba0e4u: goto label_2ba0e4;
        case 0x2ba0e8u: goto label_2ba0e8;
        case 0x2ba0ecu: goto label_2ba0ec;
        case 0x2ba0f0u: goto label_2ba0f0;
        case 0x2ba0f4u: goto label_2ba0f4;
        case 0x2ba0f8u: goto label_2ba0f8;
        case 0x2ba0fcu: goto label_2ba0fc;
        case 0x2ba100u: goto label_2ba100;
        case 0x2ba104u: goto label_2ba104;
        case 0x2ba108u: goto label_2ba108;
        case 0x2ba10cu: goto label_2ba10c;
        case 0x2ba110u: goto label_2ba110;
        case 0x2ba114u: goto label_2ba114;
        default: break;
    }

    ctx->pc = 0x2b9fb0u;

label_2b9fb0:
    // 0x2b9fb0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2b9fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2b9fb4:
    // 0x2b9fb4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2b9fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2b9fb8:
    // 0x2b9fb8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2b9fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_2b9fbc:
    // 0x2b9fbc: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2b9fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_2b9fc0:
    // 0x2b9fc0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2b9fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_2b9fc4:
    // 0x2b9fc4: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x2b9fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2b9fc8:
    // 0x2b9fc8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2b9fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_2b9fcc:
    // 0x2b9fcc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b9fccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b9fd0:
    // 0x2b9fd0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2b9fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2b9fd4:
    // 0x2b9fd4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2b9fd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9fd8:
    // 0x2b9fd8: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2b9fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_2b9fdc:
    // 0x2b9fdc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2b9fdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9fe0:
    // 0x2b9fe0: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x2b9fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_2b9fe4:
    // 0x2b9fe4: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x2b9fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_2b9fe8:
    // 0x2b9fe8: 0x24160008  addiu       $s6, $zero, 0x8
    ctx->pc = 0x2b9fe8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2b9fec:
    // 0x2b9fec: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x2b9fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_2b9ff0:
    // 0x2b9ff0: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x2b9ff0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b9ff4:
    // 0x2b9ff4: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x2b9ff4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_2b9ff8:
    // 0x2b9ff8: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x2b9ff8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2b9ffc:
    // 0x2b9ffc: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2b9ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_2ba000:
    // 0x2ba000: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ba000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ba004:
    // 0x2ba004: 0x8c46bd30  lw          $a2, -0x42D0($v0)
    ctx->pc = 0x2ba004u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2ba008:
    // 0x2ba008: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2ba008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ba00c:
    // 0x2ba00c: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2ba00cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_2ba010:
    // 0x2ba010: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2ba010u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_2ba014:
    // 0x2ba014: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2ba014u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2ba018:
    // 0x2ba018: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2ba018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2ba01c:
    // 0x2ba01c: 0x24b50164  addiu       $s5, $a1, 0x164
    ctx->pc = 0x2ba01cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), 356));
label_2ba020:
    // 0x2ba020: 0x84820092  lh          $v0, 0x92($a0)
    ctx->pc = 0x2ba020u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 146)));
label_2ba024:
    // 0x2ba024: 0xae460010  sw          $a2, 0x10($s2)
    ctx->pc = 0x2ba024u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 6));
label_2ba028:
    // 0x2ba028: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2ba028u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2ba02c:
    // 0x2ba02c: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x2ba02cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2ba030:
    // 0x2ba030: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ba030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2ba034:
    // 0x2ba034: 0x0  nop
    ctx->pc = 0x2ba034u;
    // NOP
label_2ba038:
    // 0x2ba038: 0xc137826  jal         func_4DE098
label_2ba03c:
    if (ctx->pc == 0x2BA03Cu) {
        ctx->pc = 0x2BA03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA038u;
        // 0x2ba03c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA040u;
        goto label_2ba040;
    }
    ctx->pc = 0x2BA038u;
    SET_GPR_U32(ctx, 31, 0x2BA040u);
    ctx->pc = 0x2BA03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA038u;
    // 0x2ba03c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x2BA038u, 0x2BA040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA040u;
label_2ba040:
    // 0x2ba040: 0xc0e409a  jal         func_390268
label_2ba044:
    if (ctx->pc == 0x2BA044u) {
        ctx->pc = 0x2BA044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA040u;
        // 0x2ba044: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA048u;
        goto label_2ba048;
    }
    ctx->pc = 0x2BA040u;
    SET_GPR_U32(ctx, 31, 0x2BA048u);
    ctx->pc = 0x2BA044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA040u;
    // 0x2ba044: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2BA040u, 0x2BA048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA048u;
label_2ba048:
    // 0x2ba048: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ba048u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba04c:
    // 0x2ba04c: 0x5200001a  beql        $s0, $zero, . + 4 + (0x1A << 2)
label_2ba050:
    if (ctx->pc == 0x2BA050u) {
        ctx->pc = 0x2BA050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA04Cu;
        // 0x2ba050: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA054u;
        goto label_2ba054;
    }
    ctx->pc = 0x2BA04Cu;
    {
        const bool branch_taken_0x2ba04c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba04c) {
            ctx->pc = 0x2BA050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA04Cu;
            // 0x2ba050: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA0B8u;
            goto label_2ba0b8;
        }
    }
    ctx->pc = 0x2BA054u;
label_2ba054:
    // 0x2ba054: 0xc087502  jal         func_21D408
label_2ba058:
    if (ctx->pc == 0x2BA058u) {
        ctx->pc = 0x2BA058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA054u;
        // 0x2ba058: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA05Cu;
        goto label_2ba05c;
    }
    ctx->pc = 0x2BA054u;
    SET_GPR_U32(ctx, 31, 0x2BA05Cu);
    ctx->pc = 0x2BA058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA054u;
    // 0x2ba058: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2BA054u, 0x2BA05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA05Cu;
label_2ba05c:
    // 0x2ba05c: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x2ba05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2ba060:
    // 0x2ba060: 0x8c650040  lw          $a1, 0x40($v1)
    ctx->pc = 0x2ba060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_2ba064:
    // 0x2ba064: 0x5102b  sltu        $v0, $zero, $a1
    ctx->pc = 0x2ba064u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2ba068:
    // 0x2ba068: 0x54570009  bnel        $v0, $s7, . + 4 + (0x9 << 2)
label_2ba06c:
    if (ctx->pc == 0x2BA06Cu) {
        ctx->pc = 0x2BA06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA068u;
        // 0x2ba06c: 0x86050092  lh          $a1, 0x92($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA070u;
        goto label_2ba070;
    }
    ctx->pc = 0x2BA068u;
    {
        const bool branch_taken_0x2ba068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x2ba068) {
            ctx->pc = 0x2BA06Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA068u;
            // 0x2ba06c: 0x86050092  lh          $a1, 0x92($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA090u;
            goto label_2ba090;
        }
    }
    ctx->pc = 0x2BA070u;
label_2ba070:
    // 0x2ba070: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x2ba070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_2ba074:
    // 0x2ba074: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x2ba074u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_2ba078:
    // 0x2ba078: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2ba078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2ba07c:
    // 0x2ba07c: 0x40f809  jalr        $v0
label_2ba080:
    if (ctx->pc == 0x2BA080u) {
        ctx->pc = 0x2BA080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA07Cu;
        // 0x2ba080: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA084u;
        goto label_2ba084;
    }
    ctx->pc = 0x2BA07Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BA084u);
        ctx->pc = 0x2BA080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA07Cu;
        // 0x2ba080: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA07Cu, 0x2BA084u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BA084u;
label_2ba084:
    // 0x2ba084: 0x5056000c  beql        $v0, $s6, . + 4 + (0xC << 2)
label_2ba088:
    if (ctx->pc == 0x2BA088u) {
        ctx->pc = 0x2BA088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA084u;
        // 0x2ba088: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA08Cu;
        goto label_2ba08c;
    }
    ctx->pc = 0x2BA084u;
    {
        const bool branch_taken_0x2ba084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        if (branch_taken_0x2ba084) {
            ctx->pc = 0x2BA088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA084u;
            // 0x2ba088: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA0B8u;
            goto label_2ba0b8;
        }
    }
    ctx->pc = 0x2BA08Cu;
label_2ba08c:
    // 0x2ba08c: 0x86050092  lh          $a1, 0x92($s0)
    ctx->pc = 0x2ba08cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_2ba090:
    // 0x2ba090: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ba090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ba094:
    // 0x2ba094: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2ba094u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2ba098:
    // 0x2ba098: 0xc0cdb38  jal         func_336CE0
label_2ba09c:
    if (ctx->pc == 0x2BA09Cu) {
        ctx->pc = 0x2BA09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA098u;
        // 0x2ba09c: 0xbe2821  addu        $a1, $a1, $fp (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA0A0u;
        goto label_2ba0a0;
    }
    ctx->pc = 0x2BA098u;
    SET_GPR_U32(ctx, 31, 0x2BA0A0u);
    ctx->pc = 0x2BA09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA098u;
    // 0x2ba09c: 0xbe2821  addu        $a1, $a1, $fp (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 30)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2BA098u, 0x2BA0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA0A0u;
label_2ba0a0:
    // 0x2ba0a0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2ba0a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ba0a4:
    // 0x2ba0a4: 0x0  nop
    ctx->pc = 0x2ba0a4u;
    // NOP
label_2ba0a8:
    // 0x2ba0a8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2ba0ac:
    if (ctx->pc == 0x2BA0ACu) {
        ctx->pc = 0x2BA0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA0A8u;
        // 0x2ba0ac: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA0B0u;
        goto label_2ba0b0;
    }
    ctx->pc = 0x2BA0A8u;
    {
        const bool branch_taken_0x2ba0a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BA0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA0A8u;
        // 0x2ba0ac: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba0a8) {
            ctx->pc = 0x2BA0B8u;
            goto label_2ba0b8;
        }
    }
    ctx->pc = 0x2BA0B0u;
label_2ba0b0:
    // 0x2ba0b0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2ba0b0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2ba0b4:
    // 0x2ba0b4: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x2ba0b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ba0b8:
    // 0x2ba0b8: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x2ba0b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_2ba0bc:
    // 0x2ba0bc: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
label_2ba0c0:
    if (ctx->pc == 0x2BA0C0u) {
        ctx->pc = 0x2BA0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA0BCu;
        // 0x2ba0c0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA0C4u;
        goto label_2ba0c4;
    }
    ctx->pc = 0x2BA0BCu;
    {
        const bool branch_taken_0x2ba0bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BA0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA0BCu;
        // 0x2ba0c0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba0bc) {
            ctx->pc = 0x2BA038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ba038;
        }
    }
    ctx->pc = 0x2BA0C4u;
label_2ba0c4:
    // 0x2ba0c4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
label_2ba0c8:
    if (ctx->pc == 0x2BA0C8u) {
        ctx->pc = 0x2BA0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA0C4u;
        // 0x2ba0c8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA0CCu;
        goto label_2ba0cc;
    }
    ctx->pc = 0x2BA0C4u;
    {
        const bool branch_taken_0x2ba0c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA0C4u;
        // 0x2ba0c8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba0c4) {
            ctx->pc = 0x2BA0E8u;
            goto label_2ba0e8;
        }
    }
    ctx->pc = 0x2BA0CCu;
label_2ba0cc:
    // 0x2ba0cc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2ba0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2ba0d0:
    // 0x2ba0d0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2ba0d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2ba0d4:
    // 0x2ba0d4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2ba0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2ba0d8:
    // 0x2ba0d8: 0x40f809  jalr        $v0
label_2ba0dc:
    if (ctx->pc == 0x2BA0DCu) {
        ctx->pc = 0x2BA0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA0D8u;
        // 0x2ba0dc: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA0E0u;
        goto label_2ba0e0;
    }
    ctx->pc = 0x2BA0D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BA0E0u);
        ctx->pc = 0x2BA0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA0D8u;
        // 0x2ba0dc: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA0D8u, 0x2BA0E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BA0E0u;
label_2ba0e0:
    // 0x2ba0e0: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x2ba0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_2ba0e4:
    // 0x2ba0e4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2ba0e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2ba0e8:
    // 0x2ba0e8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2ba0e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2ba0ec:
    // 0x2ba0ec: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2ba0ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2ba0f0:
    // 0x2ba0f0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2ba0f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2ba0f4:
    // 0x2ba0f4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2ba0f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2ba0f8:
    // 0x2ba0f8: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2ba0f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2ba0fc:
    // 0x2ba0fc: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x2ba0fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ba100:
    // 0x2ba100: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x2ba100u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ba104:
    // 0x2ba104: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x2ba104u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ba108:
    // 0x2ba108: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ba108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ba10c:
    // 0x2ba10c: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x2ba10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2ba110:
    // 0x2ba110: 0x3e00008  jr          $ra
label_2ba114:
    if (ctx->pc == 0x2BA114u) {
        ctx->pc = 0x2BA114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA110u;
        // 0x2ba114: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA118u;
        goto label_fallthrough_0x2ba110;
    }
    ctx->pc = 0x2BA110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA110u;
        // 0x2ba114: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ba110:
    ctx->pc = 0x2BA118u;
}
