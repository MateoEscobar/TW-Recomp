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

// Function: sub_003F6FB8
// Address: 0x3f6fb8 - 0x3f7138
void sub_003F6FB8_0x3f6fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F6FB8_0x3f6fb8");
#endif

    switch (ctx->pc) {
        case 0x3f6fb8u: goto label_3f6fb8;
        case 0x3f6fbcu: goto label_3f6fbc;
        case 0x3f6fc0u: goto label_3f6fc0;
        case 0x3f6fc4u: goto label_3f6fc4;
        case 0x3f6fc8u: goto label_3f6fc8;
        case 0x3f6fccu: goto label_3f6fcc;
        case 0x3f6fd0u: goto label_3f6fd0;
        case 0x3f6fd4u: goto label_3f6fd4;
        case 0x3f6fd8u: goto label_3f6fd8;
        case 0x3f6fdcu: goto label_3f6fdc;
        case 0x3f6fe0u: goto label_3f6fe0;
        case 0x3f6fe4u: goto label_3f6fe4;
        case 0x3f6fe8u: goto label_3f6fe8;
        case 0x3f6fecu: goto label_3f6fec;
        case 0x3f6ff0u: goto label_3f6ff0;
        case 0x3f6ff4u: goto label_3f6ff4;
        case 0x3f6ff8u: goto label_3f6ff8;
        case 0x3f6ffcu: goto label_3f6ffc;
        case 0x3f7000u: goto label_3f7000;
        case 0x3f7004u: goto label_3f7004;
        case 0x3f7008u: goto label_3f7008;
        case 0x3f700cu: goto label_3f700c;
        case 0x3f7010u: goto label_3f7010;
        case 0x3f7014u: goto label_3f7014;
        case 0x3f7018u: goto label_3f7018;
        case 0x3f701cu: goto label_3f701c;
        case 0x3f7020u: goto label_3f7020;
        case 0x3f7024u: goto label_3f7024;
        case 0x3f7028u: goto label_3f7028;
        case 0x3f702cu: goto label_3f702c;
        case 0x3f7030u: goto label_3f7030;
        case 0x3f7034u: goto label_3f7034;
        case 0x3f7038u: goto label_3f7038;
        case 0x3f703cu: goto label_3f703c;
        case 0x3f7040u: goto label_3f7040;
        case 0x3f7044u: goto label_3f7044;
        case 0x3f7048u: goto label_3f7048;
        case 0x3f704cu: goto label_3f704c;
        case 0x3f7050u: goto label_3f7050;
        case 0x3f7054u: goto label_3f7054;
        case 0x3f7058u: goto label_3f7058;
        case 0x3f705cu: goto label_3f705c;
        case 0x3f7060u: goto label_3f7060;
        case 0x3f7064u: goto label_3f7064;
        case 0x3f7068u: goto label_3f7068;
        case 0x3f706cu: goto label_3f706c;
        case 0x3f7070u: goto label_3f7070;
        case 0x3f7074u: goto label_3f7074;
        case 0x3f7078u: goto label_3f7078;
        case 0x3f707cu: goto label_3f707c;
        case 0x3f7080u: goto label_3f7080;
        case 0x3f7084u: goto label_3f7084;
        case 0x3f7088u: goto label_3f7088;
        case 0x3f708cu: goto label_3f708c;
        case 0x3f7090u: goto label_3f7090;
        case 0x3f7094u: goto label_3f7094;
        case 0x3f7098u: goto label_3f7098;
        case 0x3f709cu: goto label_3f709c;
        case 0x3f70a0u: goto label_3f70a0;
        case 0x3f70a4u: goto label_3f70a4;
        case 0x3f70a8u: goto label_3f70a8;
        case 0x3f70acu: goto label_3f70ac;
        case 0x3f70b0u: goto label_3f70b0;
        case 0x3f70b4u: goto label_3f70b4;
        case 0x3f70b8u: goto label_3f70b8;
        case 0x3f70bcu: goto label_3f70bc;
        case 0x3f70c0u: goto label_3f70c0;
        case 0x3f70c4u: goto label_3f70c4;
        case 0x3f70c8u: goto label_3f70c8;
        case 0x3f70ccu: goto label_3f70cc;
        case 0x3f70d0u: goto label_3f70d0;
        case 0x3f70d4u: goto label_3f70d4;
        case 0x3f70d8u: goto label_3f70d8;
        case 0x3f70dcu: goto label_3f70dc;
        case 0x3f70e0u: goto label_3f70e0;
        case 0x3f70e4u: goto label_3f70e4;
        case 0x3f70e8u: goto label_3f70e8;
        case 0x3f70ecu: goto label_3f70ec;
        case 0x3f70f0u: goto label_3f70f0;
        case 0x3f70f4u: goto label_3f70f4;
        case 0x3f70f8u: goto label_3f70f8;
        case 0x3f70fcu: goto label_3f70fc;
        case 0x3f7100u: goto label_3f7100;
        case 0x3f7104u: goto label_3f7104;
        case 0x3f7108u: goto label_3f7108;
        case 0x3f710cu: goto label_3f710c;
        case 0x3f7110u: goto label_3f7110;
        case 0x3f7114u: goto label_3f7114;
        case 0x3f7118u: goto label_3f7118;
        case 0x3f711cu: goto label_3f711c;
        case 0x3f7120u: goto label_3f7120;
        case 0x3f7124u: goto label_3f7124;
        case 0x3f7128u: goto label_3f7128;
        case 0x3f712cu: goto label_3f712c;
        case 0x3f7130u: goto label_3f7130;
        case 0x3f7134u: goto label_3f7134;
        default: break;
    }

    ctx->pc = 0x3f6fb8u;

label_3f6fb8:
    // 0x3f6fb8: 0x27bdf700  addiu       $sp, $sp, -0x900
    ctx->pc = 0x3f6fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964992));
label_3f6fbc:
    // 0x3f6fbc: 0x7fb008f0  sq          $s0, 0x8F0($sp)
    ctx->pc = 0x3f6fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2288), GPR_VEC(ctx, 16));
label_3f6fc0:
    // 0x3f6fc0: 0x7fb208d0  sq          $s2, 0x8D0($sp)
    ctx->pc = 0x3f6fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2256), GPR_VEC(ctx, 18));
label_3f6fc4:
    // 0x3f6fc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f6fc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f6fc8:
    // 0x3f6fc8: 0x7fb408b0  sq          $s4, 0x8B0($sp)
    ctx->pc = 0x3f6fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2224), GPR_VEC(ctx, 20));
label_3f6fcc:
    // 0x3f6fcc: 0x7fb108e0  sq          $s1, 0x8E0($sp)
    ctx->pc = 0x3f6fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2272), GPR_VEC(ctx, 17));
label_3f6fd0:
    // 0x3f6fd0: 0x7fb308c0  sq          $s3, 0x8C0($sp)
    ctx->pc = 0x3f6fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2240), GPR_VEC(ctx, 19));
label_3f6fd4:
    // 0x3f6fd4: 0xffbf08a0  sd          $ra, 0x8A0($sp)
    ctx->pc = 0x3f6fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2208), GPR_U64(ctx, 31));
label_3f6fd8:
    // 0x3f6fd8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3f6fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3f6fdc:
    // 0x3f6fdc: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3f6fdcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f6fe0:
    // 0x3f6fe0: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f6fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f6fe4:
    // 0x3f6fe4: 0x40f809  jalr        $v0
label_3f6fe8:
    if (ctx->pc == 0x3F6FE8u) {
        ctx->pc = 0x3F6FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6FE4u;
        // 0x3f6fe8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6FECu;
        goto label_3f6fec;
    }
    ctx->pc = 0x3F6FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F6FECu);
        ctx->pc = 0x3F6FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6FE4u;
        // 0x3f6fe8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F6FE4u, 0x3F6FECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F6FECu;
label_3f6fec:
    // 0x3f6fec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3f6fecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f6ff0:
    // 0x3f6ff0: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x3f6ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_3f6ff4:
    // 0x3f6ff4: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
label_3f6ff8:
    if (ctx->pc == 0x3F6FF8u) {
        ctx->pc = 0x3F6FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6FF4u;
        // 0x3f6ff8: 0x8e540020  lw          $s4, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6FFCu;
        goto label_3f6ffc;
    }
    ctx->pc = 0x3F6FF4u;
    {
        const bool branch_taken_0x3f6ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6FF4u;
        // 0x3f6ff8: 0x8e540020  lw          $s4, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6ff4) {
            ctx->pc = 0x3F7114u;
            goto label_3f7114;
        }
    }
    ctx->pc = 0x3F6FFCu;
label_3f6ffc:
    // 0x3f6ffc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3f6ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3f7000:
    // 0x3f7000: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3f7000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3f7004:
    // 0x3f7004: 0x27b10410  addiu       $s1, $sp, 0x410
    ctx->pc = 0x3f7004u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3f7008:
    // 0x3f7008: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3f7008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3f700c:
    // 0x3f700c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3f700cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3f7010:
    // 0x3f7010: 0x0  nop
    ctx->pc = 0x3f7010u;
    // NOP
label_3f7014:
    // 0x3f7014: 0x0  nop
    ctx->pc = 0x3f7014u;
    // NOP
label_3f7018:
    // 0x3f7018: 0x0  nop
    ctx->pc = 0x3f7018u;
    // NOP
label_3f701c:
    // 0x3f701c: 0x0  nop
    ctx->pc = 0x3f701cu;
    // NOP
label_3f7020:
    // 0x3f7020: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3f7024:
    if (ctx->pc == 0x3F7024u) {
        ctx->pc = 0x3F7024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7020u;
        // 0x3f7024: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7028u;
        goto label_3f7028;
    }
    ctx->pc = 0x3F7020u;
    {
        const bool branch_taken_0x3f7020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3F7024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7020u;
        // 0x3f7024: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7020) {
            ctx->pc = 0x3F7010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f7010;
        }
    }
    ctx->pc = 0x3F7028u;
label_3f7028:
    // 0x3f7028: 0xc138ddc  jal         func_4E3770
label_3f702c:
    if (ctx->pc == 0x3F702Cu) {
        ctx->pc = 0x3F702Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7028u;
        // 0x3f702c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7030u;
        goto label_3f7030;
    }
    ctx->pc = 0x3F7028u;
    SET_GPR_U32(ctx, 31, 0x3F7030u);
    ctx->pc = 0x3F702Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7028u;
    // 0x3f702c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3F7028u, 0x3F7030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7030u;
label_3f7030:
    // 0x3f7030: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x3f7030u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_3f7034:
    // 0x3f7034: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f7034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f7038:
    // 0x3f7038: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x3f7038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
label_3f703c:
    // 0x3f703c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3f703cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f7040:
    // 0x3f7040: 0xc0e94a0  jal         func_3A5280
label_3f7044:
    if (ctx->pc == 0x3F7044u) {
        ctx->pc = 0x3F7044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7040u;
        // 0x3f7044: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7048u;
        goto label_3f7048;
    }
    ctx->pc = 0x3F7040u;
    SET_GPR_U32(ctx, 31, 0x3F7048u);
    ctx->pc = 0x3F7044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7040u;
    // 0x3f7044: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5280u, 0x3F7040u, 0x3F7048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7048u;
label_3f7048:
    // 0x3f7048: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_3f704c:
    if (ctx->pc == 0x3F704Cu) {
        ctx->pc = 0x3F7050u;
        goto label_3f7050;
    }
    ctx->pc = 0x3F7048u;
    {
        const bool branch_taken_0x3f7048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f7048) {
            ctx->pc = 0x3F7074u;
            goto label_3f7074;
        }
    }
    ctx->pc = 0x3F7050u;
label_3f7050:
    // 0x3f7050: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x3f7050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_3f7054:
    // 0x3f7054: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3f7054u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f7058:
    // 0x3f7058: 0xc0e947e  jal         func_3A51F8
label_3f705c:
    if (ctx->pc == 0x3F705Cu) {
        ctx->pc = 0x3F705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7058u;
        // 0x3f705c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7060u;
        goto label_3f7060;
    }
    ctx->pc = 0x3F7058u;
    SET_GPR_U32(ctx, 31, 0x3F7060u);
    ctx->pc = 0x3F705Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7058u;
    // 0x3f705c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A51F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A51F8u, 0x3F7058u, 0x3F7060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7060u;
label_3f7060:
    // 0x3f7060: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3f7064:
    if (ctx->pc == 0x3F7064u) {
        ctx->pc = 0x3F7068u;
        goto label_3f7068;
    }
    ctx->pc = 0x3F7060u;
    {
        const bool branch_taken_0x3f7060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f7060) {
            ctx->pc = 0x3F7074u;
            goto label_3f7074;
        }
    }
    ctx->pc = 0x3F7068u;
label_3f7068:
    // 0x3f7068: 0xc0e9694  jal         func_3A5A50
label_3f706c:
    if (ctx->pc == 0x3F706Cu) {
        ctx->pc = 0x3F706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7068u;
        // 0x3f706c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7070u;
        goto label_3f7070;
    }
    ctx->pc = 0x3F7068u;
    SET_GPR_U32(ctx, 31, 0x3F7070u);
    ctx->pc = 0x3F706Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7068u;
    // 0x3f706c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3F7068u, 0x3F7070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7070u;
label_3f7070:
    // 0x3f7070: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x3f7070u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3f7074:
    // 0x3f7074: 0x12600023  beqz        $s3, . + 4 + (0x23 << 2)
label_3f7078:
    if (ctx->pc == 0x3F7078u) {
        ctx->pc = 0x3F7078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7074u;
        // 0x3f7078: 0x8e42002c  lw          $v0, 0x2C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F707Cu;
        goto label_3f707c;
    }
    ctx->pc = 0x3F7074u;
    {
        const bool branch_taken_0x3f7074 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7074u;
        // 0x3f7078: 0x8e42002c  lw          $v0, 0x2C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7074) {
            ctx->pc = 0x3F7104u;
            goto label_3f7104;
        }
    }
    ctx->pc = 0x3F707Cu;
label_3f707c:
    // 0x3f707c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3f7080:
    if (ctx->pc == 0x3F7080u) {
        ctx->pc = 0x3F7080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F707Cu;
        // 0x3f7080: 0x7ba20410  lq          $v0, 0x410($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7084u;
        goto label_3f7084;
    }
    ctx->pc = 0x3F707Cu;
    {
        const bool branch_taken_0x3f707c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F707Cu;
        // 0x3f7080: 0x7ba20410  lq          $v0, 0x410($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f707c) {
            ctx->pc = 0x3F7094u;
            goto label_3f7094;
        }
    }
    ctx->pc = 0x3F7084u;
label_3f7084:
    // 0x3f7084: 0x92450029  lbu         $a1, 0x29($s2)
    ctx->pc = 0x3f7084u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 41)));
label_3f7088:
    // 0x3f7088: 0xc0e858c  jal         func_3A1630
label_3f708c:
    if (ctx->pc == 0x3F708Cu) {
        ctx->pc = 0x3F708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7088u;
        // 0x3f708c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7090u;
        goto label_3f7090;
    }
    ctx->pc = 0x3F7088u;
    SET_GPR_U32(ctx, 31, 0x3F7090u);
    ctx->pc = 0x3F708Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7088u;
    // 0x3f708c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F7088u, 0x3F7090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7090u;
label_3f7090:
    // 0x3f7090: 0x7ba20410  lq          $v0, 0x410($sp)
    ctx->pc = 0x3f7090u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
label_3f7094:
    // 0x3f7094: 0x27b10420  addiu       $s1, $sp, 0x420
    ctx->pc = 0x3f7094u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3f7098:
    // 0x3f7098: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3f7098u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3f709c:
    // 0x3f709c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f709cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f70a0:
    // 0x3f70a0: 0x7fa20830  sq          $v0, 0x830($sp)
    ctx->pc = 0x3f70a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2096), GPR_VEC(ctx, 2));
label_3f70a4:
    // 0x3f70a4: 0x26106868  addiu       $s0, $s0, 0x6868
    ctx->pc = 0x3f70a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26728));
label_3f70a8:
    // 0x3f70a8: 0x27a50830  addiu       $a1, $sp, 0x830
    ctx->pc = 0x3f70a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2096));
label_3f70ac:
    // 0x3f70ac: 0x27a60840  addiu       $a2, $sp, 0x840
    ctx->pc = 0x3f70acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2112));
label_3f70b0:
    // 0x3f70b0: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x3f70b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_3f70b4:
    // 0x3f70b4: 0x27a70850  addiu       $a3, $sp, 0x850
    ctx->pc = 0x3f70b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 2128));
label_3f70b8:
    // 0x3f70b8: 0x27a80860  addiu       $t0, $sp, 0x860
    ctx->pc = 0x3f70b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
label_3f70bc:
    // 0x3f70bc: 0x27a90870  addiu       $t1, $sp, 0x870
    ctx->pc = 0x3f70bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 2160));
label_3f70c0:
    // 0x3f70c0: 0x7fa20840  sq          $v0, 0x840($sp)
    ctx->pc = 0x3f70c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2112), GPR_VEC(ctx, 2));
label_3f70c4:
    // 0x3f70c4: 0x27aa0880  addiu       $t2, $sp, 0x880
    ctx->pc = 0x3f70c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 2176));
label_3f70c8:
    // 0x3f70c8: 0x27ab0890  addiu       $t3, $sp, 0x890
    ctx->pc = 0x3f70c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 2192));
label_3f70cc:
    // 0x3f70cc: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x3f70ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_3f70d0:
    // 0x3f70d0: 0xafa00860  sw          $zero, 0x860($sp)
    ctx->pc = 0x3f70d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2144), GPR_U32(ctx, 0));
label_3f70d4:
    // 0x3f70d4: 0x7fa20850  sq          $v0, 0x850($sp)
    ctx->pc = 0x3f70d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2128), GPR_VEC(ctx, 2));
label_3f70d8:
    // 0x3f70d8: 0x92430028  lbu         $v1, 0x28($s2)
    ctx->pc = 0x3f70d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 40)));
label_3f70dc:
    // 0x3f70dc: 0xafb40880  sw          $s4, 0x880($sp)
    ctx->pc = 0x3f70dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2176), GPR_U32(ctx, 20));
label_3f70e0:
    // 0x3f70e0: 0xafa30870  sw          $v1, 0x870($sp)
    ctx->pc = 0x3f70e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2160), GPR_U32(ctx, 3));
label_3f70e4:
    // 0x3f70e4: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x3f70e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_3f70e8:
    // 0x3f70e8: 0xc0ea084  jal         func_3A8210
label_3f70ec:
    if (ctx->pc == 0x3F70ECu) {
        ctx->pc = 0x3F70ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F70E8u;
        // 0x3f70ec: 0xafa20890  sw          $v0, 0x890($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 2192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F70F0u;
        goto label_3f70f0;
    }
    ctx->pc = 0x3F70E8u;
    SET_GPR_U32(ctx, 31, 0x3F70F0u);
    ctx->pc = 0x3F70ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F70E8u;
    // 0x3f70ec: 0xafa20890  sw          $v0, 0x890($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 2192), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8210u, 0x3F70E8u, 0x3F70F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F70F0u;
label_3f70f0:
    // 0x3f70f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f70f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f70f4:
    // 0x3f70f4: 0xc0f15bc  jal         func_3C56F0
label_3f70f8:
    if (ctx->pc == 0x3F70F8u) {
        ctx->pc = 0x3F70F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F70F4u;
        // 0x3f70f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F70FCu;
        goto label_3f70fc;
    }
    ctx->pc = 0x3F70F4u;
    SET_GPR_U32(ctx, 31, 0x3F70FCu);
    ctx->pc = 0x3F70F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F70F4u;
    // 0x3f70f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3F70F4u, 0x3F70FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F70FCu;
label_3f70fc:
    // 0x3f70fc: 0x10000006  b           . + 4 + (0x6 << 2)
label_3f7100:
    if (ctx->pc == 0x3F7100u) {
        ctx->pc = 0x3F7100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F70FCu;
        // 0x3f7100: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7104u;
        goto label_3f7104;
    }
    ctx->pc = 0x3F70FCu;
    {
        const bool branch_taken_0x3f70fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F70FCu;
        // 0x3f7100: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f70fc) {
            ctx->pc = 0x3F7118u;
            goto label_3f7118;
        }
    }
    ctx->pc = 0x3F7104u;
label_3f7104:
    // 0x3f7104: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3f7108:
    if (ctx->pc == 0x3F7108u) {
        ctx->pc = 0x3F7108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7104u;
        // 0x3f7108: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F710Cu;
        goto label_3f710c;
    }
    ctx->pc = 0x3F7104u;
    {
        const bool branch_taken_0x3f7104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7104u;
        // 0x3f7108: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7104) {
            ctx->pc = 0x3F7114u;
            goto label_3f7114;
        }
    }
    ctx->pc = 0x3F710Cu;
label_3f710c:
    // 0x3f710c: 0xc0e858c  jal         func_3A1630
label_3f7110:
    if (ctx->pc == 0x3F7110u) {
        ctx->pc = 0x3F7110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F710Cu;
        // 0x3f7110: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7114u;
        goto label_3f7114;
    }
    ctx->pc = 0x3F710Cu;
    SET_GPR_U32(ctx, 31, 0x3F7114u);
    ctx->pc = 0x3F7110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F710Cu;
    // 0x3f7110: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F710Cu, 0x3F7114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7114u;
label_3f7114:
    // 0x3f7114: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3f7114u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f7118:
    // 0x3f7118: 0x7bb008f0  lq          $s0, 0x8F0($sp)
    ctx->pc = 0x3f7118u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2288)));
label_3f711c:
    // 0x3f711c: 0x7bb108e0  lq          $s1, 0x8E0($sp)
    ctx->pc = 0x3f711cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2272)));
label_3f7120:
    // 0x3f7120: 0x7bb208d0  lq          $s2, 0x8D0($sp)
    ctx->pc = 0x3f7120u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 2256)));
label_3f7124:
    // 0x3f7124: 0x7bb308c0  lq          $s3, 0x8C0($sp)
    ctx->pc = 0x3f7124u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 2240)));
label_3f7128:
    // 0x3f7128: 0x7bb408b0  lq          $s4, 0x8B0($sp)
    ctx->pc = 0x3f7128u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 2224)));
label_3f712c:
    // 0x3f712c: 0xdfbf08a0  ld          $ra, 0x8A0($sp)
    ctx->pc = 0x3f712cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2208)));
label_3f7130:
    // 0x3f7130: 0x3e00008  jr          $ra
label_3f7134:
    if (ctx->pc == 0x3F7134u) {
        ctx->pc = 0x3F7134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7130u;
        // 0x3f7134: 0x27bd0900  addiu       $sp, $sp, 0x900 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7138u;
        goto label_fallthrough_0x3f7130;
    }
    ctx->pc = 0x3F7130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F7134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7130u;
        // 0x3f7134: 0x27bd0900  addiu       $sp, $sp, 0x900 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F7130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3f7130:
    ctx->pc = 0x3F7138u;
}
