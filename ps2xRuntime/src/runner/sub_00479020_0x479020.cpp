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

// Function: sub_00479020
// Address: 0x479020 - 0x4791e8
void sub_00479020_0x479020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00479020_0x479020");
#endif

    switch (ctx->pc) {
        case 0x47910cu: goto label_47910c;
        default: break;
    }

    ctx->pc = 0x479020u;

    // 0x479020: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x479020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x479024: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x479024u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479028: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x479028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x47902c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47902cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x479030: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x479030u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479034: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x479034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x479038: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x479038u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x47903c: 0x27828560  addiu       $v0, $gp, -0x7AA0
    ctx->pc = 0x47903cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
    // 0x479040: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x479040u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
    // 0x479044: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x479044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x479048: 0x2484e830  addiu       $a0, $a0, -0x17D0
    ctx->pc = 0x479048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961200));
    // 0x47904c: 0x3c0a0071  lui         $t2, 0x71
    ctx->pc = 0x47904cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)113 << 16));
    // 0x479050: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x479050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
    // 0x479054: 0x2548ad18  addiu       $t0, $t2, -0x52E8
    ctx->pc = 0x479054u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), 4294946072));
    // 0x479058: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x479058u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x47905c: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x47905cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x479060: 0x34c6ff00  ori         $a2, $a2, 0xFF00
    ctx->pc = 0x479060u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65280);
    // 0x479064: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x479064u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x52E838u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x52E838u, _value); } while (0);
    // 0x479068: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x479068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x47906c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x47906cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x479070: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x479070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x479074: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x479074u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x479078: 0x8f8288e8  lw          $v0, -0x7718($gp)
    ctx->pc = 0x479078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936808)));
    // 0x47907c: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x47907cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x479080: 0x92250024  lbu         $a1, 0x24($s1)
    ctx->pc = 0x479080u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x479084: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x479084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x479088: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x479088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x47908c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x47908cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x479090: 0x90440027  lbu         $a0, 0x27($v0)
    ctx->pc = 0x479090u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 39)));
    // 0x479094: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x479094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x479098: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x479098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x47909c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x47909cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4790a0: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x4790a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x4790a4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4790A4u;
    {
        const bool branch_taken_0x4790a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4790a4) {
            ctx->pc = 0x4790A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4790A4u;
            // 0x4790a8: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4790C0u;
            goto label_4790c0;
        }
    }
    ctx->pc = 0x4790ACu;
    // 0x4790ac: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x4790acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4790b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4790b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4790b4: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x4790b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x4790b8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4790b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4790bc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x4790bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4790c0:
    // 0x4790c0: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x4790c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x4790c4: 0x2463e850  addiu       $v1, $v1, -0x17B0
    ctx->pc = 0x4790c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961232));
    // 0x4790c8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x4790c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x4790cc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x4790ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4790d0: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x4790d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x4790d4: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x4790d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x4790d8: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x4790d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x4790dc: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x4790dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x4790e0: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x4790e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x4790e4: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x4790e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x4790e8: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x4790e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x4790ec: 0x3442fff8  ori         $v0, $v0, 0xFFF8
    ctx->pc = 0x4790ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65528);
    // 0x4790f0: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x4790f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x4790f4: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x4790f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4790f8: 0x8d42ad18  lw          $v0, -0x52E8($t2)
    ctx->pc = 0x4790f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294946072)));
    // 0x4790fc: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4790FCu;
    {
        const bool branch_taken_0x4790fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x479100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4790FCu;
        // 0x479100: 0x24460020  addiu       $a2, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4790fc) {
            ctx->pc = 0x479118u;
            goto label_479118;
        }
    }
    ctx->pc = 0x479104u;
    // 0x479104: 0xc11f4a0  jal         func_47D280
    ctx->pc = 0x479104u;
    SET_GPR_U32(ctx, 31, 0x47910Cu);
    ctx->pc = 0x479108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x479104u;
    // 0x479108: 0x8d240000  lw          $a0, 0x0($t1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47D280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47D280u, 0x479104u, 0x47910Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47910Cu;
label_47910c:
    // 0x47910c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x47910Cu;
    {
        const bool branch_taken_0x47910c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x479110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47910Cu;
        // 0x479110: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47910c) {
            ctx->pc = 0x479120u;
            goto label_479120;
        }
    }
    ctx->pc = 0x479114u;
    // 0x479114: 0x0  nop
    ctx->pc = 0x479114u;
    // NOP
label_479118:
    // 0x479118: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x479118u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    // 0x47911c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x47911cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_479120:
    // 0x479120: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x479120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x479124: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x479124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x479128: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x479128u;
    {
        const bool branch_taken_0x479128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47912Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479128u;
        // 0x47912c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479128) {
            ctx->pc = 0x479134u;
            goto label_479134;
        }
    }
    ctx->pc = 0x479130u;
    // 0x479130: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x479130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_479134:
    // 0x479134: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x479134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x479138: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x479138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x47913c: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x47913cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x479140: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x479140u;
    {
        const bool branch_taken_0x479140 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x479144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479140u;
        // 0x479144: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479140) {
            ctx->pc = 0x479178u;
            goto label_479178;
        }
    }
    ctx->pc = 0x479148u;
    // 0x479148: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x479148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x47914c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x47914Cu;
    {
        const bool branch_taken_0x47914c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x479150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47914Cu;
        // 0x479150: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47914c) {
            ctx->pc = 0x479160u;
            goto label_479160;
        }
    }
    ctx->pc = 0x479154u;
    // 0x479154: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x479154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x479158: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x479158u;
    {
        const bool branch_taken_0x479158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x479158) {
            ctx->pc = 0x47915Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x479158u;
            // 0x47915c: 0x30820010  andi        $v0, $a0, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x479170u;
            goto label_479170;
        }
    }
    ctx->pc = 0x479160u;
label_479160:
    // 0x479160: 0xa2030029  sb          $v1, 0x29($s0)
    ctx->pc = 0x479160u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x479164: 0x93828780  lbu         $v0, -0x7880($gp)
    ctx->pc = 0x479164u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x479168: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x479168u;
    {
        const bool branch_taken_0x479168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47916Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479168u;
        // 0x47916c: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x479168) {
            ctx->pc = 0x4791B0u;
            goto label_4791b0;
        }
    }
    ctx->pc = 0x479170u;
label_479170:
    // 0x479170: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x479170u;
    {
        const bool branch_taken_0x479170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x479174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479170u;
        // 0x479174: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479170) {
            ctx->pc = 0x479188u;
            goto label_479188;
        }
    }
    ctx->pc = 0x479178u;
label_479178:
    // 0x479178: 0xa2020029  sb          $v0, 0x29($s0)
    ctx->pc = 0x479178u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 2));
    // 0x47917c: 0x93838780  lbu         $v1, -0x7880($gp)
    ctx->pc = 0x47917cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x479180: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x479180u;
    {
        const bool branch_taken_0x479180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x479184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479180u;
        // 0x479184: 0xa2030028  sb          $v1, 0x28($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479180) {
            ctx->pc = 0x4791B4u;
            goto label_4791b4;
        }
    }
    ctx->pc = 0x479188u;
label_479188:
    // 0x479188: 0x30820008  andi        $v0, $a0, 0x8
    ctx->pc = 0x479188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x47918c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x47918Cu;
    {
        const bool branch_taken_0x47918c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x479190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47918Cu;
        // 0x479190: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47918c) {
            ctx->pc = 0x4791A4u;
            goto label_4791a4;
        }
    }
    ctx->pc = 0x479194u;
    // 0x479194: 0xa2030029  sb          $v1, 0x29($s0)
    ctx->pc = 0x479194u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x479198: 0x93828780  lbu         $v0, -0x7880($gp)
    ctx->pc = 0x479198u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x47919c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x47919Cu;
    {
        const bool branch_taken_0x47919c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4791A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47919Cu;
        // 0x4791a0: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x47919c) {
            ctx->pc = 0x4791B0u;
            goto label_4791b0;
        }
    }
    ctx->pc = 0x4791A4u;
label_4791a4:
    // 0x4791a4: 0xa2050029  sb          $a1, 0x29($s0)
    ctx->pc = 0x4791a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 5));
    // 0x4791a8: 0x93828780  lbu         $v0, -0x7880($gp)
    ctx->pc = 0x4791a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x4791ac: 0x34420014  ori         $v0, $v0, 0x14
    ctx->pc = 0x4791acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
label_4791b0:
    // 0x4791b0: 0xa2020028  sb          $v0, 0x28($s0)
    ctx->pc = 0x4791b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 2));
label_4791b4:
    // 0x4791b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4791b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4791b8: 0x10c20004  beq         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4791B8u;
    {
        const bool branch_taken_0x4791b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x4791BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4791B8u;
        // 0x4791bc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4791b8) {
            ctx->pc = 0x4791CCu;
            goto label_4791cc;
        }
    }
    ctx->pc = 0x4791C0u;
    // 0x4791c0: 0x92020028  lbu         $v0, 0x28($s0)
    ctx->pc = 0x4791c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x4791c4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4791c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x4791c8: 0xa2020028  sb          $v0, 0x28($s0)
    ctx->pc = 0x4791c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 2));
label_4791cc:
    // 0x4791cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4791ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4791d0: 0xa203002a  sb          $v1, 0x2A($s0)
    ctx->pc = 0x4791d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 42), (uint8_t)GPR_U32(ctx, 3));
    // 0x4791d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4791d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4791d8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4791d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4791dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4791dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4791e0: 0x3e00008  jr          $ra
    ctx->pc = 0x4791E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4791E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4791E0u;
        // 0x4791e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4791E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4791E8u;
}
