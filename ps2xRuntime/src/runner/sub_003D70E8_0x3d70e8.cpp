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

// Function: sub_003D70E8
// Address: 0x3d70e8 - 0x3d71e0
void sub_003D70E8_0x3d70e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D70E8_0x3d70e8");
#endif

    switch (ctx->pc) {
        case 0x3d70e8u: goto label_3d70e8;
        case 0x3d70ecu: goto label_3d70ec;
        case 0x3d70f0u: goto label_3d70f0;
        case 0x3d70f4u: goto label_3d70f4;
        case 0x3d70f8u: goto label_3d70f8;
        case 0x3d70fcu: goto label_3d70fc;
        case 0x3d7100u: goto label_3d7100;
        case 0x3d7104u: goto label_3d7104;
        case 0x3d7108u: goto label_3d7108;
        case 0x3d710cu: goto label_3d710c;
        case 0x3d7110u: goto label_3d7110;
        case 0x3d7114u: goto label_3d7114;
        case 0x3d7118u: goto label_3d7118;
        case 0x3d711cu: goto label_3d711c;
        case 0x3d7120u: goto label_3d7120;
        case 0x3d7124u: goto label_3d7124;
        case 0x3d7128u: goto label_3d7128;
        case 0x3d712cu: goto label_3d712c;
        case 0x3d7130u: goto label_3d7130;
        case 0x3d7134u: goto label_3d7134;
        case 0x3d7138u: goto label_3d7138;
        case 0x3d713cu: goto label_3d713c;
        case 0x3d7140u: goto label_3d7140;
        case 0x3d7144u: goto label_3d7144;
        case 0x3d7148u: goto label_3d7148;
        case 0x3d714cu: goto label_3d714c;
        case 0x3d7150u: goto label_3d7150;
        case 0x3d7154u: goto label_3d7154;
        case 0x3d7158u: goto label_3d7158;
        case 0x3d715cu: goto label_3d715c;
        case 0x3d7160u: goto label_3d7160;
        case 0x3d7164u: goto label_3d7164;
        case 0x3d7168u: goto label_3d7168;
        case 0x3d716cu: goto label_3d716c;
        case 0x3d7170u: goto label_3d7170;
        case 0x3d7174u: goto label_3d7174;
        case 0x3d7178u: goto label_3d7178;
        case 0x3d717cu: goto label_3d717c;
        case 0x3d7180u: goto label_3d7180;
        case 0x3d7184u: goto label_3d7184;
        case 0x3d7188u: goto label_3d7188;
        case 0x3d718cu: goto label_3d718c;
        case 0x3d7190u: goto label_3d7190;
        case 0x3d7194u: goto label_3d7194;
        case 0x3d7198u: goto label_3d7198;
        case 0x3d719cu: goto label_3d719c;
        case 0x3d71a0u: goto label_3d71a0;
        case 0x3d71a4u: goto label_3d71a4;
        case 0x3d71a8u: goto label_3d71a8;
        case 0x3d71acu: goto label_3d71ac;
        case 0x3d71b0u: goto label_3d71b0;
        case 0x3d71b4u: goto label_3d71b4;
        case 0x3d71b8u: goto label_3d71b8;
        case 0x3d71bcu: goto label_3d71bc;
        case 0x3d71c0u: goto label_3d71c0;
        case 0x3d71c4u: goto label_3d71c4;
        case 0x3d71c8u: goto label_3d71c8;
        case 0x3d71ccu: goto label_3d71cc;
        case 0x3d71d0u: goto label_3d71d0;
        case 0x3d71d4u: goto label_3d71d4;
        case 0x3d71d8u: goto label_3d71d8;
        case 0x3d71dcu: goto label_3d71dc;
        default: break;
    }

    ctx->pc = 0x3d70e8u;

label_3d70e8:
    // 0x3d70e8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3d70e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3d70ec:
    // 0x3d70ec: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3d70ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_3d70f0:
    // 0x3d70f0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3d70f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_3d70f4:
    // 0x3d70f4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3d70f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d70f8:
    // 0x3d70f8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3d70f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_3d70fc:
    // 0x3d70fc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3d70fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d7100:
    // 0x3d7100: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3d7100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3d7104:
    // 0x3d7104: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3d7104u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d7108:
    // 0x3d7108: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3d7108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3d710c:
    // 0x3d710c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3d710cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3d7110:
    // 0x3d7110: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d7110u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d7114:
    // 0x3d7114: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d7114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d7118:
    // 0x3d7118: 0x40f809  jalr        $v0
label_3d711c:
    if (ctx->pc == 0x3D711Cu) {
        ctx->pc = 0x3D711Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7118u;
        // 0x3d711c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7120u;
        goto label_3d7120;
    }
    ctx->pc = 0x3D7118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D7120u);
        ctx->pc = 0x3D711Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7118u;
        // 0x3d711c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7118u, 0x3D7120u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D7120u;
label_3d7120:
    // 0x3d7120: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3d7120u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d7124:
    // 0x3d7124: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d7124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d7128:
    // 0x3d7128: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x3d7128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_3d712c:
    // 0x3d712c: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x3d712cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_3d7130:
    // 0x3d7130: 0xc0e858c  jal         func_3A1630
label_3d7134:
    if (ctx->pc == 0x3D7134u) {
        ctx->pc = 0x3D7134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7130u;
        // 0x3d7134: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7138u;
        goto label_3d7138;
    }
    ctx->pc = 0x3D7130u;
    SET_GPR_U32(ctx, 31, 0x3D7138u);
    ctx->pc = 0x3D7134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7130u;
    // 0x3d7134: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D7130u, 0x3D7138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7138u;
label_3d7138:
    // 0x3d7138: 0xae4000bc  sw          $zero, 0xBC($s2)
    ctx->pc = 0x3d7138u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 0));
label_3d713c:
    // 0x3d713c: 0xc0ea14c  jal         func_3A8530
label_3d7140:
    if (ctx->pc == 0x3D7140u) {
        ctx->pc = 0x3D7140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D713Cu;
        // 0x3d7140: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7144u;
        goto label_3d7144;
    }
    ctx->pc = 0x3D713Cu;
    SET_GPR_U32(ctx, 31, 0x3D7144u);
    ctx->pc = 0x3D7140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D713Cu;
    // 0x3d7140: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3D713Cu, 0x3D7144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7144u;
label_3d7144:
    // 0x3d7144: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d7144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d7148:
    // 0x3d7148: 0xc0ea12a  jal         func_3A84A8
label_3d714c:
    if (ctx->pc == 0x3D714Cu) {
        ctx->pc = 0x3D714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7148u;
        // 0x3d714c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7150u;
        goto label_3d7150;
    }
    ctx->pc = 0x3D7148u;
    SET_GPR_U32(ctx, 31, 0x3D7150u);
    ctx->pc = 0x3D714Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7148u;
    // 0x3d714c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D7148u, 0x3D7150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7150u;
label_3d7150:
    // 0x3d7150: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d7150u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d7154:
    // 0x3d7154: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3d7154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d7158:
    // 0x3d7158: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d7158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d715c:
    // 0x3d715c: 0xc0ea12a  jal         func_3A84A8
label_3d7160:
    if (ctx->pc == 0x3D7160u) {
        ctx->pc = 0x3D7160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D715Cu;
        // 0x3d7160: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7164u;
        goto label_3d7164;
    }
    ctx->pc = 0x3D715Cu;
    SET_GPR_U32(ctx, 31, 0x3D7164u);
    ctx->pc = 0x3D7160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D715Cu;
    // 0x3d7160: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D715Cu, 0x3D7164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7164u;
label_3d7164:
    // 0x3d7164: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d7164u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d7168:
    // 0x3d7168: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3d7168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3d716c:
    // 0x3d716c: 0x1000000d  b           . + 4 + (0xD << 2)
label_3d7170:
    if (ctx->pc == 0x3D7170u) {
        ctx->pc = 0x3D7170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D716Cu;
        // 0x3d7170: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7174u;
        goto label_3d7174;
    }
    ctx->pc = 0x3D716Cu;
    {
        const bool branch_taken_0x3d716c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D716Cu;
        // 0x3d7170: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d716c) {
            ctx->pc = 0x3D71A4u;
            goto label_3d71a4;
        }
    }
    ctx->pc = 0x3D7174u;
label_3d7174:
    // 0x3d7174: 0x0  nop
    ctx->pc = 0x3d7174u;
    // NOP
label_3d7178:
    // 0x3d7178: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x3d7178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
label_3d717c:
    // 0x3d717c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x3d717cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_3d7180:
    // 0x3d7180: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3d7180u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d7184:
    // 0x3d7184: 0xc0e9182  jal         func_3A4608
label_3d7188:
    if (ctx->pc == 0x3D7188u) {
        ctx->pc = 0x3D7188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7184u;
        // 0x3d7188: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D718Cu;
        goto label_3d718c;
    }
    ctx->pc = 0x3D7184u;
    SET_GPR_U32(ctx, 31, 0x3D718Cu);
    ctx->pc = 0x3D7188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7184u;
    // 0x3d7188: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4608u, 0x3D7184u, 0x3D718Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D718Cu;
label_3d718c:
    // 0x3d718c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d718cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d7190:
    // 0x3d7190: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x3d7190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
label_3d7194:
    // 0x3d7194: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3d7194u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3d7198:
    // 0x3d7198: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3d7198u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d719c:
    // 0x3d719c: 0xc0e919a  jal         func_3A4668
label_3d71a0:
    if (ctx->pc == 0x3D71A0u) {
        ctx->pc = 0x3D71A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D719Cu;
        // 0x3d71a0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D71A4u;
        goto label_3d71a4;
    }
    ctx->pc = 0x3D719Cu;
    SET_GPR_U32(ctx, 31, 0x3D71A4u);
    ctx->pc = 0x3D71A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D719Cu;
    // 0x3d71a0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4668u, 0x3D719Cu, 0x3D71A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D71A4u;
label_3d71a4:
    // 0x3d71a4: 0xc047ab8  jal         func_11EAE0
label_3d71a8:
    if (ctx->pc == 0x3D71A8u) {
        ctx->pc = 0x3D71ACu;
        goto label_3d71ac;
    }
    ctx->pc = 0x3D71A4u;
    SET_GPR_U32(ctx, 31, 0x3D71ACu);
    ctx->pc = 0x11EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EAE0u, 0x3D71A4u, 0x3D71ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D71ACu;
label_3d71ac:
    // 0x3d71ac: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x3d71acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3d71b0:
    // 0x3d71b0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_3d71b4:
    if (ctx->pc == 0x3D71B4u) {
        ctx->pc = 0x3D71B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D71B0u;
        // 0x3d71b4: 0x260316c0  addiu       $v1, $s0, 0x16C0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 5824));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D71B8u;
        goto label_3d71b8;
    }
    ctx->pc = 0x3D71B0u;
    {
        const bool branch_taken_0x3d71b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D71B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D71B0u;
        // 0x3d71b4: 0x260316c0  addiu       $v1, $s0, 0x16C0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 5824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d71b0) {
            ctx->pc = 0x3D7178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d7178;
        }
    }
    ctx->pc = 0x3D71B8u;
label_3d71b8:
    // 0x3d71b8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3d71b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3d71bc:
    // 0x3d71bc: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x3d71bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3d71c0:
    // 0x3d71c0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3d71c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3d71c4:
    // 0x3d71c4: 0x7e420030  sq          $v0, 0x30($s2)
    ctx->pc = 0x3d71c4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), GPR_VEC(ctx, 2));
label_3d71c8:
    // 0x3d71c8: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x3d71c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_3d71cc:
    // 0x3d71cc: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3d71ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3d71d0:
    // 0x3d71d0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3d71d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d71d4:
    // 0x3d71d4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3d71d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3d71d8:
    // 0x3d71d8: 0x3e00008  jr          $ra
label_3d71dc:
    if (ctx->pc == 0x3D71DCu) {
        ctx->pc = 0x3D71DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D71D8u;
        // 0x3d71dc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D71E0u;
        goto label_fallthrough_0x3d71d8;
    }
    ctx->pc = 0x3D71D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D71DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D71D8u;
        // 0x3d71dc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D71D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d71d8:
    ctx->pc = 0x3D71E0u;
}
