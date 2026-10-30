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

// Function: sub_003EBFF0
// Address: 0x3ebff0 - 0x3ec158
void sub_003EBFF0_0x3ebff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EBFF0_0x3ebff0");
#endif

    switch (ctx->pc) {
        case 0x3ebff0u: goto label_3ebff0;
        case 0x3ebff4u: goto label_3ebff4;
        case 0x3ebff8u: goto label_3ebff8;
        case 0x3ebffcu: goto label_3ebffc;
        case 0x3ec000u: goto label_3ec000;
        case 0x3ec004u: goto label_3ec004;
        case 0x3ec008u: goto label_3ec008;
        case 0x3ec00cu: goto label_3ec00c;
        case 0x3ec010u: goto label_3ec010;
        case 0x3ec014u: goto label_3ec014;
        case 0x3ec018u: goto label_3ec018;
        case 0x3ec01cu: goto label_3ec01c;
        case 0x3ec020u: goto label_3ec020;
        case 0x3ec024u: goto label_3ec024;
        case 0x3ec028u: goto label_3ec028;
        case 0x3ec02cu: goto label_3ec02c;
        case 0x3ec030u: goto label_3ec030;
        case 0x3ec034u: goto label_3ec034;
        case 0x3ec038u: goto label_3ec038;
        case 0x3ec03cu: goto label_3ec03c;
        case 0x3ec040u: goto label_3ec040;
        case 0x3ec044u: goto label_3ec044;
        case 0x3ec048u: goto label_3ec048;
        case 0x3ec04cu: goto label_3ec04c;
        case 0x3ec050u: goto label_3ec050;
        case 0x3ec054u: goto label_3ec054;
        case 0x3ec058u: goto label_3ec058;
        case 0x3ec05cu: goto label_3ec05c;
        case 0x3ec060u: goto label_3ec060;
        case 0x3ec064u: goto label_3ec064;
        case 0x3ec068u: goto label_3ec068;
        case 0x3ec06cu: goto label_3ec06c;
        case 0x3ec070u: goto label_3ec070;
        case 0x3ec074u: goto label_3ec074;
        case 0x3ec078u: goto label_3ec078;
        case 0x3ec07cu: goto label_3ec07c;
        case 0x3ec080u: goto label_3ec080;
        case 0x3ec084u: goto label_3ec084;
        case 0x3ec088u: goto label_3ec088;
        case 0x3ec08cu: goto label_3ec08c;
        case 0x3ec090u: goto label_3ec090;
        case 0x3ec094u: goto label_3ec094;
        case 0x3ec098u: goto label_3ec098;
        case 0x3ec09cu: goto label_3ec09c;
        case 0x3ec0a0u: goto label_3ec0a0;
        case 0x3ec0a4u: goto label_3ec0a4;
        case 0x3ec0a8u: goto label_3ec0a8;
        case 0x3ec0acu: goto label_3ec0ac;
        case 0x3ec0b0u: goto label_3ec0b0;
        case 0x3ec0b4u: goto label_3ec0b4;
        case 0x3ec0b8u: goto label_3ec0b8;
        case 0x3ec0bcu: goto label_3ec0bc;
        case 0x3ec0c0u: goto label_3ec0c0;
        case 0x3ec0c4u: goto label_3ec0c4;
        case 0x3ec0c8u: goto label_3ec0c8;
        case 0x3ec0ccu: goto label_3ec0cc;
        case 0x3ec0d0u: goto label_3ec0d0;
        case 0x3ec0d4u: goto label_3ec0d4;
        case 0x3ec0d8u: goto label_3ec0d8;
        case 0x3ec0dcu: goto label_3ec0dc;
        case 0x3ec0e0u: goto label_3ec0e0;
        case 0x3ec0e4u: goto label_3ec0e4;
        case 0x3ec0e8u: goto label_3ec0e8;
        case 0x3ec0ecu: goto label_3ec0ec;
        case 0x3ec0f0u: goto label_3ec0f0;
        case 0x3ec0f4u: goto label_3ec0f4;
        case 0x3ec0f8u: goto label_3ec0f8;
        case 0x3ec0fcu: goto label_3ec0fc;
        case 0x3ec100u: goto label_3ec100;
        case 0x3ec104u: goto label_3ec104;
        case 0x3ec108u: goto label_3ec108;
        case 0x3ec10cu: goto label_3ec10c;
        case 0x3ec110u: goto label_3ec110;
        case 0x3ec114u: goto label_3ec114;
        case 0x3ec118u: goto label_3ec118;
        case 0x3ec11cu: goto label_3ec11c;
        case 0x3ec120u: goto label_3ec120;
        case 0x3ec124u: goto label_3ec124;
        case 0x3ec128u: goto label_3ec128;
        case 0x3ec12cu: goto label_3ec12c;
        case 0x3ec130u: goto label_3ec130;
        case 0x3ec134u: goto label_3ec134;
        case 0x3ec138u: goto label_3ec138;
        case 0x3ec13cu: goto label_3ec13c;
        case 0x3ec140u: goto label_3ec140;
        case 0x3ec144u: goto label_3ec144;
        case 0x3ec148u: goto label_3ec148;
        case 0x3ec14cu: goto label_3ec14c;
        case 0x3ec150u: goto label_3ec150;
        case 0x3ec154u: goto label_3ec154;
        default: break;
    }

    ctx->pc = 0x3ebff0u;

label_3ebff0:
    // 0x3ebff0: 0x27bdf730  addiu       $sp, $sp, -0x8D0
    ctx->pc = 0x3ebff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965040));
label_3ebff4:
    // 0x3ebff4: 0x7fb208a0  sq          $s2, 0x8A0($sp)
    ctx->pc = 0x3ebff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2208), GPR_VEC(ctx, 18));
label_3ebff8:
    // 0x3ebff8: 0x7fb30890  sq          $s3, 0x890($sp)
    ctx->pc = 0x3ebff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2192), GPR_VEC(ctx, 19));
label_3ebffc:
    // 0x3ebffc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3ebffcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ec000:
    // 0x3ec000: 0x7fb008c0  sq          $s0, 0x8C0($sp)
    ctx->pc = 0x3ec000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2240), GPR_VEC(ctx, 16));
label_3ec004:
    // 0x3ec004: 0x7fb108b0  sq          $s1, 0x8B0($sp)
    ctx->pc = 0x3ec004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2224), GPR_VEC(ctx, 17));
label_3ec008:
    // 0x3ec008: 0xffbf0880  sd          $ra, 0x880($sp)
    ctx->pc = 0x3ec008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2176), GPR_U64(ctx, 31));
label_3ec00c:
    // 0x3ec00c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3ec00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3ec010:
    // 0x3ec010: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ec010u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ec014:
    // 0x3ec014: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ec014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ec018:
    // 0x3ec018: 0x40f809  jalr        $v0
label_3ec01c:
    if (ctx->pc == 0x3EC01Cu) {
        ctx->pc = 0x3EC01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC018u;
        // 0x3ec01c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC020u;
        goto label_3ec020;
    }
    ctx->pc = 0x3EC018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EC020u);
        ctx->pc = 0x3EC01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC018u;
        // 0x3ec01c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EC018u, 0x3EC020u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EC020u;
label_3ec020:
    // 0x3ec020: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3ec020u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ec024:
    // 0x3ec024: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ec024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ec028:
    // 0x3ec028: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3ec028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3ec02c:
    // 0x3ec02c: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3ec02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3ec030:
    // 0x3ec030: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3ec030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3ec034:
    // 0x3ec034: 0x0  nop
    ctx->pc = 0x3ec034u;
    // NOP
label_3ec038:
    // 0x3ec038: 0x0  nop
    ctx->pc = 0x3ec038u;
    // NOP
label_3ec03c:
    // 0x3ec03c: 0x0  nop
    ctx->pc = 0x3ec03cu;
    // NOP
label_3ec040:
    // 0x3ec040: 0x0  nop
    ctx->pc = 0x3ec040u;
    // NOP
label_3ec044:
    // 0x3ec044: 0x0  nop
    ctx->pc = 0x3ec044u;
    // NOP
label_3ec048:
    // 0x3ec048: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3ec04c:
    if (ctx->pc == 0x3EC04Cu) {
        ctx->pc = 0x3EC04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC048u;
        // 0x3ec04c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC050u;
        goto label_3ec050;
    }
    ctx->pc = 0x3EC048u;
    {
        const bool branch_taken_0x3ec048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3EC04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC048u;
        // 0x3ec04c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec048) {
            ctx->pc = 0x3EC038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ec038;
        }
    }
    ctx->pc = 0x3EC050u;
label_3ec050:
    // 0x3ec050: 0xc138ddc  jal         func_4E3770
label_3ec054:
    if (ctx->pc == 0x3EC054u) {
        ctx->pc = 0x3EC058u;
        goto label_3ec058;
    }
    ctx->pc = 0x3EC050u;
    SET_GPR_U32(ctx, 31, 0x3EC058u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3EC050u, 0x3EC058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC058u;
label_3ec058:
    // 0x3ec058: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3ec058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3ec05c:
    // 0x3ec05c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3ec05cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3ec060:
    // 0x3ec060: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3ec060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3ec064:
    // 0x3ec064: 0x40f809  jalr        $v0
label_3ec068:
    if (ctx->pc == 0x3EC068u) {
        ctx->pc = 0x3EC068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC064u;
        // 0x3ec068: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC06Cu;
        goto label_3ec06c;
    }
    ctx->pc = 0x3EC064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EC06Cu);
        ctx->pc = 0x3EC068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC064u;
        // 0x3ec068: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EC064u, 0x3EC06Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EC06Cu;
label_3ec06c:
    // 0x3ec06c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x3ec06cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_3ec070:
    // 0x3ec070: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3ec070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3ec074:
    // 0x3ec074: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_3ec078:
    if (ctx->pc == 0x3EC078u) {
        ctx->pc = 0x3EC078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC074u;
        // 0x3ec078: 0x27b00410  addiu       $s0, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC07Cu;
        goto label_3ec07c;
    }
    ctx->pc = 0x3EC074u;
    {
        const bool branch_taken_0x3ec074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC074u;
        // 0x3ec078: 0x27b00410  addiu       $s0, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec074) {
            ctx->pc = 0x3EC124u;
            goto label_3ec124;
        }
    }
    ctx->pc = 0x3EC07Cu;
label_3ec07c:
    // 0x3ec07c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3ec07cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ec080:
    // 0x3ec080: 0xc0e92f4  jal         func_3A4BD0
label_3ec084:
    if (ctx->pc == 0x3EC084u) {
        ctx->pc = 0x3EC084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC080u;
        // 0x3ec084: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC088u;
        goto label_3ec088;
    }
    ctx->pc = 0x3EC080u;
    SET_GPR_U32(ctx, 31, 0x3EC088u);
    ctx->pc = 0x3EC084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC080u;
    // 0x3ec084: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4BD0u, 0x3EC080u, 0x3EC088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC088u;
label_3ec088:
    // 0x3ec088: 0x27b10430  addiu       $s1, $sp, 0x430
    ctx->pc = 0x3ec088u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3ec08c:
    // 0x3ec08c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3ec08cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ec090:
    // 0x3ec090: 0xc0e90ca  jal         func_3A4328
label_3ec094:
    if (ctx->pc == 0x3EC094u) {
        ctx->pc = 0x3EC094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC090u;
        // 0x3ec094: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC098u;
        goto label_3ec098;
    }
    ctx->pc = 0x3EC090u;
    SET_GPR_U32(ctx, 31, 0x3EC098u);
    ctx->pc = 0x3EC094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC090u;
    // 0x3ec094: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3EC090u, 0x3EC098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC098u;
label_3ec098:
    // 0x3ec098: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x3ec098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
label_3ec09c:
    // 0x3ec09c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3ec09cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_3ec0a0:
    // 0x3ec0a0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ec0a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ec0a4:
    // 0x3ec0a4: 0x27a40450  addiu       $a0, $sp, 0x450
    ctx->pc = 0x3ec0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3ec0a8:
    // 0x3ec0a8: 0xc136b24  jal         func_4DAC90
label_3ec0ac:
    if (ctx->pc == 0x3EC0ACu) {
        ctx->pc = 0x3EC0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC0A8u;
        // 0x3ec0ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC0B0u;
        goto label_3ec0b0;
    }
    ctx->pc = 0x3EC0A8u;
    SET_GPR_U32(ctx, 31, 0x3EC0B0u);
    ctx->pc = 0x3EC0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC0A8u;
    // 0x3ec0ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3EC0A8u, 0x3EC0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC0B0u;
label_3ec0b0:
    // 0x3ec0b0: 0x7ba20450  lq          $v0, 0x450($sp)
    ctx->pc = 0x3ec0b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3ec0b4:
    // 0x3ec0b4: 0x27a40450  addiu       $a0, $sp, 0x450
    ctx->pc = 0x3ec0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3ec0b8:
    // 0x3ec0b8: 0x27a60440  addiu       $a2, $sp, 0x440
    ctx->pc = 0x3ec0b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3ec0bc:
    // 0x3ec0bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3ec0bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ec0c0:
    // 0x3ec0c0: 0xc136b18  jal         func_4DAC60
label_3ec0c4:
    if (ctx->pc == 0x3EC0C4u) {
        ctx->pc = 0x3EC0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC0C0u;
        // 0x3ec0c4: 0x7fa20440  sq          $v0, 0x440($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC0C8u;
        goto label_3ec0c8;
    }
    ctx->pc = 0x3EC0C0u;
    SET_GPR_U32(ctx, 31, 0x3EC0C8u);
    ctx->pc = 0x3EC0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC0C0u;
    // 0x3ec0c4: 0x7fa20440  sq          $v0, 0x440($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3EC0C0u, 0x3EC0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC0C8u;
label_3ec0c8:
    // 0x3ec0c8: 0x7ba30450  lq          $v1, 0x450($sp)
    ctx->pc = 0x3ec0c8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3ec0cc:
    // 0x3ec0cc: 0x27b20460  addiu       $s2, $sp, 0x460
    ctx->pc = 0x3ec0ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3ec0d0:
    // 0x3ec0d0: 0x7ba20410  lq          $v0, 0x410($sp)
    ctx->pc = 0x3ec0d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
label_3ec0d4:
    // 0x3ec0d4: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3ec0d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3ec0d8:
    // 0x3ec0d8: 0x7fa30430  sq          $v1, 0x430($sp)
    ctx->pc = 0x3ec0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 3));
label_3ec0dc:
    // 0x3ec0dc: 0x27a70450  addiu       $a3, $sp, 0x450
    ctx->pc = 0x3ec0dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3ec0e0:
    // 0x3ec0e0: 0x7fa30420  sq          $v1, 0x420($sp)
    ctx->pc = 0x3ec0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 3));
label_3ec0e4:
    // 0x3ec0e4: 0x27a80870  addiu       $t0, $sp, 0x870
    ctx->pc = 0x3ec0e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 2160));
label_3ec0e8:
    // 0x3ec0e8: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3ec0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3ec0ec:
    // 0x3ec0ec: 0x26105c00  addiu       $s0, $s0, 0x5C00
    ctx->pc = 0x3ec0ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23552));
label_3ec0f0:
    // 0x3ec0f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3ec0f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ec0f4:
    // 0x3ec0f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ec0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ec0f8:
    // 0x3ec0f8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3ec0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3ec0fc:
    // 0x3ec0fc: 0x27a60440  addiu       $a2, $sp, 0x440
    ctx->pc = 0x3ec0fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3ec100:
    // 0x3ec100: 0xafa20450  sw          $v0, 0x450($sp)
    ctx->pc = 0x3ec100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1104), GPR_U32(ctx, 2));
label_3ec104:
    // 0x3ec104: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x3ec104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ec108:
    // 0x3ec108: 0xc0e9fd0  jal         func_3A7F40
label_3ec10c:
    if (ctx->pc == 0x3EC10Cu) {
        ctx->pc = 0x3EC10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC108u;
        // 0x3ec10c: 0xe7a00870  swc1        $f0, 0x870($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2160), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC110u;
        goto label_3ec110;
    }
    ctx->pc = 0x3EC108u;
    SET_GPR_U32(ctx, 31, 0x3EC110u);
    ctx->pc = 0x3EC10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC108u;
    // 0x3ec10c: 0xe7a00870  swc1        $f0, 0x870($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2160), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7F40u, 0x3EC108u, 0x3EC110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC110u;
label_3ec110:
    // 0x3ec110: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ec110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ec114:
    // 0x3ec114: 0xc0f15bc  jal         func_3C56F0
label_3ec118:
    if (ctx->pc == 0x3EC118u) {
        ctx->pc = 0x3EC118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC114u;
        // 0x3ec118: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC11Cu;
        goto label_3ec11c;
    }
    ctx->pc = 0x3EC114u;
    SET_GPR_U32(ctx, 31, 0x3EC11Cu);
    ctx->pc = 0x3EC118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC114u;
    // 0x3ec118: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3EC114u, 0x3EC11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC11Cu;
label_3ec11c:
    // 0x3ec11c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x3ec11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3ec120:
    // 0x3ec120: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x3ec120u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
label_3ec124:
    // 0x3ec124: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x3ec124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3ec128:
    // 0x3ec128: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x3ec128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_3ec12c:
    // 0x3ec12c: 0x7bb008c0  lq          $s0, 0x8C0($sp)
    ctx->pc = 0x3ec12cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2240)));
label_3ec130:
    // 0x3ec130: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ec130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3ec134:
    // 0x3ec134: 0x7bb108b0  lq          $s1, 0x8B0($sp)
    ctx->pc = 0x3ec134u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2224)));
label_3ec138:
    // 0x3ec138: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x3ec138u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
label_3ec13c:
    // 0x3ec13c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3ec13cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3ec140:
    // 0x3ec140: 0x7bb208a0  lq          $s2, 0x8A0($sp)
    ctx->pc = 0x3ec140u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 2208)));
label_3ec144:
    // 0x3ec144: 0x7bb30890  lq          $s3, 0x890($sp)
    ctx->pc = 0x3ec144u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 2192)));
label_3ec148:
    // 0x3ec148: 0xdfbf0880  ld          $ra, 0x880($sp)
    ctx->pc = 0x3ec148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2176)));
label_3ec14c:
    // 0x3ec14c: 0x3e00008  jr          $ra
label_3ec150:
    if (ctx->pc == 0x3EC150u) {
        ctx->pc = 0x3EC150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC14Cu;
        // 0x3ec150: 0x27bd08d0  addiu       $sp, $sp, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC154u;
        goto label_3ec154;
    }
    ctx->pc = 0x3EC14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EC150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC14Cu;
        // 0x3ec150: 0x27bd08d0  addiu       $sp, $sp, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EC14Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EC154u;
label_3ec154:
    // 0x3ec154: 0x0  nop
    ctx->pc = 0x3ec154u;
    // NOP
    ctx->pc = 0x3ec158u;
}
