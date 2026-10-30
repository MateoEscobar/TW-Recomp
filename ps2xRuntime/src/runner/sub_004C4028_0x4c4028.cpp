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

// Function: sub_004C4028
// Address: 0x4c4028 - 0x4c4270
void sub_004C4028_0x4c4028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C4028_0x4c4028");
#endif

    switch (ctx->pc) {
        case 0x4c4028u: goto label_4c4028;
        case 0x4c402cu: goto label_4c402c;
        case 0x4c4030u: goto label_4c4030;
        case 0x4c4034u: goto label_4c4034;
        case 0x4c4038u: goto label_4c4038;
        case 0x4c403cu: goto label_4c403c;
        case 0x4c4040u: goto label_4c4040;
        case 0x4c4044u: goto label_4c4044;
        case 0x4c4048u: goto label_4c4048;
        case 0x4c404cu: goto label_4c404c;
        case 0x4c4050u: goto label_4c4050;
        case 0x4c4054u: goto label_4c4054;
        case 0x4c4058u: goto label_4c4058;
        case 0x4c405cu: goto label_4c405c;
        case 0x4c4060u: goto label_4c4060;
        case 0x4c4064u: goto label_4c4064;
        case 0x4c4068u: goto label_4c4068;
        case 0x4c406cu: goto label_4c406c;
        case 0x4c4070u: goto label_4c4070;
        case 0x4c4074u: goto label_4c4074;
        case 0x4c4078u: goto label_4c4078;
        case 0x4c407cu: goto label_4c407c;
        case 0x4c4080u: goto label_4c4080;
        case 0x4c4084u: goto label_4c4084;
        case 0x4c4088u: goto label_4c4088;
        case 0x4c408cu: goto label_4c408c;
        case 0x4c4090u: goto label_4c4090;
        case 0x4c4094u: goto label_4c4094;
        case 0x4c4098u: goto label_4c4098;
        case 0x4c409cu: goto label_4c409c;
        case 0x4c40a0u: goto label_4c40a0;
        case 0x4c40a4u: goto label_4c40a4;
        case 0x4c40a8u: goto label_4c40a8;
        case 0x4c40acu: goto label_4c40ac;
        case 0x4c40b0u: goto label_4c40b0;
        case 0x4c40b4u: goto label_4c40b4;
        case 0x4c40b8u: goto label_4c40b8;
        case 0x4c40bcu: goto label_4c40bc;
        case 0x4c40c0u: goto label_4c40c0;
        case 0x4c40c4u: goto label_4c40c4;
        case 0x4c40c8u: goto label_4c40c8;
        case 0x4c40ccu: goto label_4c40cc;
        case 0x4c40d0u: goto label_4c40d0;
        case 0x4c40d4u: goto label_4c40d4;
        case 0x4c40d8u: goto label_4c40d8;
        case 0x4c40dcu: goto label_4c40dc;
        case 0x4c40e0u: goto label_4c40e0;
        case 0x4c40e4u: goto label_4c40e4;
        case 0x4c40e8u: goto label_4c40e8;
        case 0x4c40ecu: goto label_4c40ec;
        case 0x4c40f0u: goto label_4c40f0;
        case 0x4c40f4u: goto label_4c40f4;
        case 0x4c40f8u: goto label_4c40f8;
        case 0x4c40fcu: goto label_4c40fc;
        case 0x4c4100u: goto label_4c4100;
        case 0x4c4104u: goto label_4c4104;
        case 0x4c4108u: goto label_4c4108;
        case 0x4c410cu: goto label_4c410c;
        case 0x4c4110u: goto label_4c4110;
        case 0x4c4114u: goto label_4c4114;
        case 0x4c4118u: goto label_4c4118;
        case 0x4c411cu: goto label_4c411c;
        case 0x4c4120u: goto label_4c4120;
        case 0x4c4124u: goto label_4c4124;
        case 0x4c4128u: goto label_4c4128;
        case 0x4c412cu: goto label_4c412c;
        case 0x4c4130u: goto label_4c4130;
        case 0x4c4134u: goto label_4c4134;
        case 0x4c4138u: goto label_4c4138;
        case 0x4c413cu: goto label_4c413c;
        case 0x4c4140u: goto label_4c4140;
        case 0x4c4144u: goto label_4c4144;
        case 0x4c4148u: goto label_4c4148;
        case 0x4c414cu: goto label_4c414c;
        case 0x4c4150u: goto label_4c4150;
        case 0x4c4154u: goto label_4c4154;
        case 0x4c4158u: goto label_4c4158;
        case 0x4c415cu: goto label_4c415c;
        case 0x4c4160u: goto label_4c4160;
        case 0x4c4164u: goto label_4c4164;
        case 0x4c4168u: goto label_4c4168;
        case 0x4c416cu: goto label_4c416c;
        case 0x4c4170u: goto label_4c4170;
        case 0x4c4174u: goto label_4c4174;
        case 0x4c4178u: goto label_4c4178;
        case 0x4c417cu: goto label_4c417c;
        case 0x4c4180u: goto label_4c4180;
        case 0x4c4184u: goto label_4c4184;
        case 0x4c4188u: goto label_4c4188;
        case 0x4c418cu: goto label_4c418c;
        case 0x4c4190u: goto label_4c4190;
        case 0x4c4194u: goto label_4c4194;
        case 0x4c4198u: goto label_4c4198;
        case 0x4c419cu: goto label_4c419c;
        case 0x4c41a0u: goto label_4c41a0;
        case 0x4c41a4u: goto label_4c41a4;
        case 0x4c41a8u: goto label_4c41a8;
        case 0x4c41acu: goto label_4c41ac;
        case 0x4c41b0u: goto label_4c41b0;
        case 0x4c41b4u: goto label_4c41b4;
        case 0x4c41b8u: goto label_4c41b8;
        case 0x4c41bcu: goto label_4c41bc;
        case 0x4c41c0u: goto label_4c41c0;
        case 0x4c41c4u: goto label_4c41c4;
        case 0x4c41c8u: goto label_4c41c8;
        case 0x4c41ccu: goto label_4c41cc;
        case 0x4c41d0u: goto label_4c41d0;
        case 0x4c41d4u: goto label_4c41d4;
        case 0x4c41d8u: goto label_4c41d8;
        case 0x4c41dcu: goto label_4c41dc;
        case 0x4c41e0u: goto label_4c41e0;
        case 0x4c41e4u: goto label_4c41e4;
        case 0x4c41e8u: goto label_4c41e8;
        case 0x4c41ecu: goto label_4c41ec;
        case 0x4c41f0u: goto label_4c41f0;
        case 0x4c41f4u: goto label_4c41f4;
        case 0x4c41f8u: goto label_4c41f8;
        case 0x4c41fcu: goto label_4c41fc;
        case 0x4c4200u: goto label_4c4200;
        case 0x4c4204u: goto label_4c4204;
        case 0x4c4208u: goto label_4c4208;
        case 0x4c420cu: goto label_4c420c;
        case 0x4c4210u: goto label_4c4210;
        case 0x4c4214u: goto label_4c4214;
        case 0x4c4218u: goto label_4c4218;
        case 0x4c421cu: goto label_4c421c;
        case 0x4c4220u: goto label_4c4220;
        case 0x4c4224u: goto label_4c4224;
        case 0x4c4228u: goto label_4c4228;
        case 0x4c422cu: goto label_4c422c;
        case 0x4c4230u: goto label_4c4230;
        case 0x4c4234u: goto label_4c4234;
        case 0x4c4238u: goto label_4c4238;
        case 0x4c423cu: goto label_4c423c;
        case 0x4c4240u: goto label_4c4240;
        case 0x4c4244u: goto label_4c4244;
        case 0x4c4248u: goto label_4c4248;
        case 0x4c424cu: goto label_4c424c;
        case 0x4c4250u: goto label_4c4250;
        case 0x4c4254u: goto label_4c4254;
        case 0x4c4258u: goto label_4c4258;
        case 0x4c425cu: goto label_4c425c;
        case 0x4c4260u: goto label_4c4260;
        case 0x4c4264u: goto label_4c4264;
        case 0x4c4268u: goto label_4c4268;
        case 0x4c426cu: goto label_4c426c;
        default: break;
    }

    ctx->pc = 0x4c4028u;

label_4c4028:
    // 0x4c4028: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4c4028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4c402c:
    // 0x4c402c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c402cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4c4030:
    // 0x4c4030: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c4030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4c4034:
    // 0x4c4034: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c4034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c4038:
    // 0x4c4038: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4c4038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_4c403c:
    // 0x4c403c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x4c403cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_4c4040:
    // 0x4c4040: 0x12000085  beqz        $s0, . + 4 + (0x85 << 2)
label_4c4044:
    if (ctx->pc == 0x4C4044u) {
        ctx->pc = 0x4C4044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4040u;
        // 0x4c4044: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C4048u;
        goto label_4c4048;
    }
    ctx->pc = 0x4C4040u;
    {
        const bool branch_taken_0x4c4040 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4040u;
        // 0x4c4044: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4040) {
            ctx->pc = 0x4C4258u;
            goto label_4c4258;
        }
    }
    ctx->pc = 0x4C4048u;
label_4c4048:
    // 0x4c4048: 0x8e020270  lw          $v0, 0x270($s0)
    ctx->pc = 0x4c4048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
label_4c404c:
    // 0x4c404c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_4c4050:
    if (ctx->pc == 0x4C4050u) {
        ctx->pc = 0x4C4050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C404Cu;
        // 0x4c4050: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C4054u;
        goto label_4c4054;
    }
    ctx->pc = 0x4C404Cu;
    {
        const bool branch_taken_0x4c404c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c404c) {
            ctx->pc = 0x4C4050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C404Cu;
            // 0x4c4050: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C4064u;
            goto label_4c4064;
        }
    }
    ctx->pc = 0x4C4054u;
label_4c4054:
    // 0x4c4054: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x4c4054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_4c4058:
    // 0x4c4058: 0x1040007f  beqz        $v0, . + 4 + (0x7F << 2)
label_4c405c:
    if (ctx->pc == 0x4C405Cu) {
        ctx->pc = 0x4C405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4058u;
        // 0x4c405c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C4060u;
        goto label_4c4060;
    }
    ctx->pc = 0x4C4058u;
    {
        const bool branch_taken_0x4c4058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4058u;
        // 0x4c405c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4058) {
            ctx->pc = 0x4C4258u;
            goto label_4c4258;
        }
    }
    ctx->pc = 0x4C4060u;
label_4c4060:
    // 0x4c4060: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x4c4060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_4c4064:
    // 0x4c4064: 0x1440007c  bnez        $v0, . + 4 + (0x7C << 2)
label_4c4068:
    if (ctx->pc == 0x4C4068u) {
        ctx->pc = 0x4C4068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4064u;
        // 0x4c4068: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C406Cu;
        goto label_4c406c;
    }
    ctx->pc = 0x4C4064u;
    {
        const bool branch_taken_0x4c4064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C4068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4064u;
        // 0x4c4068: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4064) {
            ctx->pc = 0x4C4258u;
            goto label_4c4258;
        }
    }
    ctx->pc = 0x4C406Cu;
label_4c406c:
    // 0x4c406c: 0x8e120280  lw          $s2, 0x280($s0)
    ctx->pc = 0x4c406cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 640)));
label_4c4070:
    // 0x4c4070: 0x5640000a  bnel        $s2, $zero, . + 4 + (0xA << 2)
label_4c4074:
    if (ctx->pc == 0x4C4074u) {
        ctx->pc = 0x4C4074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4070u;
        // 0x4c4074: 0x8e020300  lw          $v0, 0x300($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C4078u;
        goto label_4c4078;
    }
    ctx->pc = 0x4C4070u;
    {
        const bool branch_taken_0x4c4070 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c4070) {
            ctx->pc = 0x4C4074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C4070u;
            // 0x4c4074: 0x8e020300  lw          $v0, 0x300($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C409Cu;
            goto label_4c409c;
        }
    }
    ctx->pc = 0x4C4078u;
label_4c4078:
    // 0x4c4078: 0xc1334f4  jal         func_4CD3D0
label_4c407c:
    if (ctx->pc == 0x4C407Cu) {
        ctx->pc = 0x4C4080u;
        goto label_4c4080;
    }
    ctx->pc = 0x4C4078u;
    SET_GPR_U32(ctx, 31, 0x4C4080u);
    ctx->pc = 0x4CD3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD3D0u, 0x4C4078u, 0x4C4080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C4080u;
label_4c4080:
    // 0x4c4080: 0x8e030270  lw          $v1, 0x270($s0)
    ctx->pc = 0x4c4080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
label_4c4084:
    // 0x4c4084: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4c4084u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c4088:
    // 0x4c4088: 0xae020280  sw          $v0, 0x280($s0)
    ctx->pc = 0x4c4088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 2));
label_4c408c:
    // 0x4c408c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4c408cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4c4090:
    // 0x4c4090: 0xae000348  sw          $zero, 0x348($s0)
    ctx->pc = 0x4c4090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 840), GPR_U32(ctx, 0));
label_4c4094:
    // 0x4c4094: 0xae030284  sw          $v1, 0x284($s0)
    ctx->pc = 0x4c4094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 3));
label_4c4098:
    // 0x4c4098: 0x8e020300  lw          $v0, 0x300($s0)
    ctx->pc = 0x4c4098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
label_4c409c:
    // 0x4c409c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4c40a0:
    if (ctx->pc == 0x4C40A0u) {
        ctx->pc = 0x4C40A4u;
        goto label_4c40a4;
    }
    ctx->pc = 0x4C409Cu;
    {
        const bool branch_taken_0x4c409c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c409c) {
            ctx->pc = 0x4C40ACu;
            goto label_4c40ac;
        }
    }
    ctx->pc = 0x4C40A4u;
label_4c40a4:
    // 0x4c40a4: 0xc130664  jal         func_4C1990
label_4c40a8:
    if (ctx->pc == 0x4C40A8u) {
        ctx->pc = 0x4C40A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C40A4u;
        // 0x4c40a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C40ACu;
        goto label_4c40ac;
    }
    ctx->pc = 0x4C40A4u;
    SET_GPR_U32(ctx, 31, 0x4C40ACu);
    ctx->pc = 0x4C40A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C40A4u;
    // 0x4c40a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C1990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C1990u, 0x4C40A4u, 0x4C40ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C40ACu;
label_4c40ac:
    // 0x4c40ac: 0xc1334f4  jal         func_4CD3D0
label_4c40b0:
    if (ctx->pc == 0x4C40B0u) {
        ctx->pc = 0x4C40B4u;
        goto label_4c40b4;
    }
    ctx->pc = 0x4C40ACu;
    SET_GPR_U32(ctx, 31, 0x4C40B4u);
    ctx->pc = 0x4CD3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD3D0u, 0x4C40ACu, 0x4C40B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C40B4u;
label_4c40b4:
    // 0x4c40b4: 0x8e03027c  lw          $v1, 0x27C($s0)
    ctx->pc = 0x4c40b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 636)));
label_4c40b8:
    // 0x4c40b8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_4c40bc:
    if (ctx->pc == 0x4C40BCu) {
        ctx->pc = 0x4C40BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C40B8u;
        // 0x4c40bc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C40C0u;
        goto label_4c40c0;
    }
    ctx->pc = 0x4C40B8u;
    {
        const bool branch_taken_0x4c40b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C40BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C40B8u;
        // 0x4c40bc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c40b8) {
            ctx->pc = 0x4C40D4u;
            goto label_4c40d4;
        }
    }
    ctx->pc = 0x4C40C0u;
label_4c40c0:
    // 0x4c40c0: 0x8e0202b4  lw          $v0, 0x2B4($s0)
    ctx->pc = 0x4c40c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 692)));
label_4c40c4:
    // 0x4c40c4: 0x2231823  subu        $v1, $s1, $v1
    ctx->pc = 0x4c40c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_4c40c8:
    // 0x4c40c8: 0xae00027c  sw          $zero, 0x27C($s0)
    ctx->pc = 0x4c40c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 0));
label_4c40cc:
    // 0x4c40cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4c40ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4c40d0:
    // 0x4c40d0: 0xae0202b4  sw          $v0, 0x2B4($s0)
    ctx->pc = 0x4c40d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 2));
label_4c40d4:
    // 0x4c40d4: 0x8e02028c  lw          $v0, 0x28C($s0)
    ctx->pc = 0x4c40d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 652)));
label_4c40d8:
    // 0x4c40d8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_4c40dc:
    if (ctx->pc == 0x4C40DCu) {
        ctx->pc = 0x4C40DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C40D8u;
        // 0x4c40dc: 0x2222023  subu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C40E0u;
        goto label_4c40e0;
    }
    ctx->pc = 0x4C40D8u;
    {
        const bool branch_taken_0x4c40d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C40DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C40D8u;
        // 0x4c40dc: 0x2222023  subu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c40d8) {
            ctx->pc = 0x4C4128u;
            goto label_4c4128;
        }
    }
    ctx->pc = 0x4C40E0u;
label_4c40e0:
    // 0x4c40e0: 0x8e050290  lw          $a1, 0x290($s0)
    ctx->pc = 0x4c40e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 656)));
label_4c40e4:
    // 0x4c40e4: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x4c40e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4c40e8:
    // 0x4c40e8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4c40ec:
    if (ctx->pc == 0x4C40ECu) {
        ctx->pc = 0x4C40ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C40E8u;
        // 0x4c40ec: 0xae00028c  sw          $zero, 0x28C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C40F0u;
        goto label_4c40f0;
    }
    ctx->pc = 0x4C40E8u;
    {
        const bool branch_taken_0x4c40e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C40ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C40E8u;
        // 0x4c40ec: 0xae00028c  sw          $zero, 0x28C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c40e8) {
            ctx->pc = 0x4C410Cu;
            goto label_4c410c;
        }
    }
    ctx->pc = 0x4C40F0u;
label_4c40f0:
    // 0x4c40f0: 0x8e020294  lw          $v0, 0x294($s0)
    ctx->pc = 0x4c40f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 660)));
label_4c40f4:
    // 0x4c40f4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x4c40f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4c40f8:
    // 0x4c40f8: 0xae050298  sw          $a1, 0x298($s0)
    ctx->pc = 0x4c40f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 664), GPR_U32(ctx, 5));
label_4c40fc:
    // 0x4c40fc: 0xae02029c  sw          $v0, 0x29C($s0)
    ctx->pc = 0x4c40fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 2));
label_4c4100:
    // 0x4c4100: 0xae040290  sw          $a0, 0x290($s0)
    ctx->pc = 0x4c4100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 4));
label_4c4104:
    // 0x4c4104: 0x10000008  b           . + 4 + (0x8 << 2)
label_4c4108:
    if (ctx->pc == 0x4C4108u) {
        ctx->pc = 0x4C4108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4104u;
        // 0x4c4108: 0xae030294  sw          $v1, 0x294($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C410Cu;
        goto label_4c410c;
    }
    ctx->pc = 0x4C4104u;
    {
        const bool branch_taken_0x4c4104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4104u;
        // 0x4c4108: 0xae030294  sw          $v1, 0x294($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4104) {
            ctx->pc = 0x4C4128u;
            goto label_4c4128;
        }
    }
    ctx->pc = 0x4C410Cu;
label_4c410c:
    // 0x4c410c: 0x8e020298  lw          $v0, 0x298($s0)
    ctx->pc = 0x4c410cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 664)));
label_4c4110:
    // 0x4c4110: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x4c4110u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4c4114:
    // 0x4c4114: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_4c4118:
    if (ctx->pc == 0x4C4118u) {
        ctx->pc = 0x4C4118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4114u;
        // 0x4c4118: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C411Cu;
        goto label_4c411c;
    }
    ctx->pc = 0x4C4114u;
    {
        const bool branch_taken_0x4c4114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c4114) {
            ctx->pc = 0x4C4118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C4114u;
            // 0x4c4118: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C412Cu;
            goto label_4c412c;
        }
    }
    ctx->pc = 0x4C411Cu;
label_4c411c:
    // 0x4c411c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x4c411cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4c4120:
    // 0x4c4120: 0xae040298  sw          $a0, 0x298($s0)
    ctx->pc = 0x4c4120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 664), GPR_U32(ctx, 4));
label_4c4124:
    // 0x4c4124: 0xae02029c  sw          $v0, 0x29C($s0)
    ctx->pc = 0x4c4124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 2));
label_4c4128:
    // 0x4c4128: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x4c4128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_4c412c:
    // 0x4c412c: 0x5440003a  bnel        $v0, $zero, . + 4 + (0x3A << 2)
label_4c4130:
    if (ctx->pc == 0x4C4130u) {
        ctx->pc = 0x4C4130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C412Cu;
        // 0x4c4130: 0x8e020108  lw          $v0, 0x108($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C4134u;
        goto label_4c4134;
    }
    ctx->pc = 0x4C412Cu;
    {
        const bool branch_taken_0x4c412c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c412c) {
            ctx->pc = 0x4C4130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C412Cu;
            // 0x4c4130: 0x8e020108  lw          $v0, 0x108($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C4218u;
            goto label_4c4218;
        }
    }
    ctx->pc = 0x4C4134u;
label_4c4134:
    // 0x4c4134: 0x8e020300  lw          $v0, 0x300($s0)
    ctx->pc = 0x4c4134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
label_4c4138:
    // 0x4c4138: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_4c413c:
    if (ctx->pc == 0x4C413Cu) {
        ctx->pc = 0x4C413Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4138u;
        // 0x4c413c: 0x8e060014  lw          $a2, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C4140u;
        goto label_4c4140;
    }
    ctx->pc = 0x4C4138u;
    {
        const bool branch_taken_0x4c4138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c4138) {
            ctx->pc = 0x4C413Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C4138u;
            // 0x4c413c: 0x8e060014  lw          $a2, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C4150u;
            goto label_4c4150;
        }
    }
    ctx->pc = 0x4C4140u;
label_4c4140:
    // 0x4c4140: 0x8e0202a0  lw          $v0, 0x2A0($s0)
    ctx->pc = 0x4c4140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 672)));
label_4c4144:
    // 0x4c4144: 0x50400034  beql        $v0, $zero, . + 4 + (0x34 << 2)
label_4c4148:
    if (ctx->pc == 0x4C4148u) {
        ctx->pc = 0x4C4148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4144u;
        // 0x4c4148: 0x8e020108  lw          $v0, 0x108($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C414Cu;
        goto label_4c414c;
    }
    ctx->pc = 0x4C4144u;
    {
        const bool branch_taken_0x4c4144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c4144) {
            ctx->pc = 0x4C4148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C4144u;
            // 0x4c4148: 0x8e020108  lw          $v0, 0x108($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C4218u;
            goto label_4c4218;
        }
    }
    ctx->pc = 0x4C414Cu;
label_4c414c:
    // 0x4c414c: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x4c414cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_4c4150:
    // 0x4c4150: 0x54c00003  bnel        $a2, $zero, . + 4 + (0x3 << 2)
label_4c4154:
    if (ctx->pc == 0x4C4154u) {
        ctx->pc = 0x4C4154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4150u;
        // 0x4c4154: 0x8e040270  lw          $a0, 0x270($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C4158u;
        goto label_4c4158;
    }
    ctx->pc = 0x4C4150u;
    {
        const bool branch_taken_0x4c4150 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c4150) {
            ctx->pc = 0x4C4154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C4150u;
            // 0x4c4154: 0x8e040270  lw          $a0, 0x270($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C4160u;
            goto label_4c4160;
        }
    }
    ctx->pc = 0x4C4158u;
label_4c4158:
    // 0x4c4158: 0x1000003f  b           . + 4 + (0x3F << 2)
label_4c415c:
    if (ctx->pc == 0x4C415Cu) {
        ctx->pc = 0x4C415Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4158u;
        // 0x4c415c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C4160u;
        goto label_4c4160;
    }
    ctx->pc = 0x4C4158u;
    {
        const bool branch_taken_0x4c4158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C415Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4158u;
        // 0x4c415c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4158) {
            ctx->pc = 0x4C4258u;
            goto label_4c4258;
        }
    }
    ctx->pc = 0x4C4160u;
label_4c4160:
    // 0x4c4160: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x4c4160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_4c4164:
    // 0x4c4164: 0x8e020284  lw          $v0, 0x284($s0)
    ctx->pc = 0x4c4164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 644)));
label_4c4168:
    // 0x4c4168: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x4c4168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_4c416c:
    // 0x4c416c: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x4c416cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4c4170:
    // 0x4c4170: 0xc13399c  jal         func_4CE670
label_4c4174:
    if (ctx->pc == 0x4C4174u) {
        ctx->pc = 0x4C4174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4170u;
        // 0x4c4174: 0x832018  mult        $a0, $a0, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C4178u;
        goto label_4c4178;
    }
    ctx->pc = 0x4C4170u;
    SET_GPR_U32(ctx, 31, 0x4C4178u);
    ctx->pc = 0x4C4174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C4170u;
    // 0x4c4174: 0x832018  mult        $a0, $a0, $v1 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CE670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CE670u, 0x4C4170u, 0x4C4178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C4178u;
label_4c4178:
    // 0x4c4178: 0x8e030308  lw          $v1, 0x308($s0)
    ctx->pc = 0x4c4178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 776)));
label_4c417c:
    // 0x4c417c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4c417cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c4180:
    // 0x4c4180: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x4c4180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4c4184:
    // 0x4c4184: 0xc1339e8  jal         func_4CE7A0
label_4c4188:
    if (ctx->pc == 0x4C4188u) {
        ctx->pc = 0x4C4188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4184u;
        // 0x4c4188: 0x8c65006c  lw          $a1, 0x6C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C418Cu;
        goto label_4c418c;
    }
    ctx->pc = 0x4C4184u;
    SET_GPR_U32(ctx, 31, 0x4C418Cu);
    ctx->pc = 0x4C4188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C4184u;
    // 0x4c4188: 0x8c65006c  lw          $a1, 0x6C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CE7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CE7A0u, 0x4C4184u, 0x4C418Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C418Cu;
label_4c418c:
    // 0x4c418c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4c418cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c4190:
    // 0x4c4190: 0x8e020340  lw          $v0, 0x340($s0)
    ctx->pc = 0x4c4190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 832)));
label_4c4194:
    // 0x4c4194: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x4c4194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_4c4198:
    // 0x4c4198: 0x2223823  subu        $a3, $s1, $v0
    ctx->pc = 0x4c4198u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_4c419c:
    // 0x4c419c: 0xe4182a  slt         $v1, $a3, $a0
    ctx->pc = 0x4c419cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_4c41a0:
    // 0x4c41a0: 0x5460001d  bnel        $v1, $zero, . + 4 + (0x1D << 2)
label_4c41a4:
    if (ctx->pc == 0x4C41A4u) {
        ctx->pc = 0x4C41A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C41A0u;
        // 0x4c41a4: 0x8e020108  lw          $v0, 0x108($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C41A8u;
        goto label_4c41a8;
    }
    ctx->pc = 0x4C41A0u;
    {
        const bool branch_taken_0x4c41a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c41a0) {
            ctx->pc = 0x4C41A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C41A0u;
            // 0x4c41a4: 0x8e020108  lw          $v0, 0x108($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C4218u;
            goto label_4c4218;
        }
    }
    ctx->pc = 0x4C41A8u;
label_4c41a8:
    // 0x4c41a8: 0x8e020288  lw          $v0, 0x288($s0)
    ctx->pc = 0x4c41a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 648)));
label_4c41ac:
    // 0x4c41ac: 0xe43823  subu        $a3, $a3, $a0
    ctx->pc = 0x4c41acu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_4c41b0:
    // 0x4c41b0: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x4c41b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_4c41b4:
    // 0x4c41b4: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_4c41b8:
    if (ctx->pc == 0x4C41B8u) {
        ctx->pc = 0x4C41B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C41B4u;
        // 0x4c41b8: 0x8e040340  lw          $a0, 0x340($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 832)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C41BCu;
        goto label_4c41bc;
    }
    ctx->pc = 0x4C41B4u;
    {
        const bool branch_taken_0x4c41b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c41b4) {
            ctx->pc = 0x4C41B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C41B4u;
            // 0x4c41b8: 0x8e040340  lw          $a0, 0x340($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 832)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C41F8u;
            goto label_4c41f8;
        }
    }
    ctx->pc = 0x4C41BCu;
label_4c41bc:
    // 0x4c41bc: 0x8e020300  lw          $v0, 0x300($s0)
    ctx->pc = 0x4c41bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
label_4c41c0:
    // 0x4c41c0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_4c41c4:
    if (ctx->pc == 0x4C41C4u) {
        ctx->pc = 0x4C41C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C41C0u;
        // 0x4c41c4: 0x8e050018  lw          $a1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C41C8u;
        goto label_4c41c8;
    }
    ctx->pc = 0x4C41C0u;
    {
        const bool branch_taken_0x4c41c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c41c0) {
            ctx->pc = 0x4C41C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C41C0u;
            // 0x4c41c4: 0x8e050018  lw          $a1, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C41E0u;
            goto label_4c41e0;
        }
    }
    ctx->pc = 0x4C41C8u;
label_4c41c8:
    // 0x4c41c8: 0x8e020270  lw          $v0, 0x270($s0)
    ctx->pc = 0x4c41c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
label_4c41cc:
    // 0x4c41cc: 0xae110280  sw          $s1, 0x280($s0)
    ctx->pc = 0x4c41ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 17));
label_4c41d0:
    // 0x4c41d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4c41d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4c41d4:
    // 0x4c41d4: 0xae000348  sw          $zero, 0x348($s0)
    ctx->pc = 0x4c41d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 840), GPR_U32(ctx, 0));
label_4c41d8:
    // 0x4c41d8: 0x10000006  b           . + 4 + (0x6 << 2)
label_4c41dc:
    if (ctx->pc == 0x4C41DCu) {
        ctx->pc = 0x4C41DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C41D8u;
        // 0x4c41dc: 0xae020284  sw          $v0, 0x284($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C41E0u;
        goto label_4c41e0;
    }
    ctx->pc = 0x4C41D8u;
    {
        const bool branch_taken_0x4c41d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C41DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C41D8u;
        // 0x4c41dc: 0xae020284  sw          $v0, 0x284($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c41d8) {
            ctx->pc = 0x4C41F4u;
            goto label_4c41f4;
        }
    }
    ctx->pc = 0x4C41E0u;
label_4c41e0:
    // 0x4c41e0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x4c41e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4c41e4:
    // 0x4c41e4: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x4c41e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_4c41e8:
    // 0x4c41e8: 0xc13399c  jal         func_4CE670
label_4c41ec:
    if (ctx->pc == 0x4C41ECu) {
        ctx->pc = 0x4C41ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C41E8u;
        // 0x4c41ec: 0xae070340  sw          $a3, 0x340($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 832), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C41F0u;
        goto label_4c41f0;
    }
    ctx->pc = 0x4C41E8u;
    SET_GPR_U32(ctx, 31, 0x4C41F0u);
    ctx->pc = 0x4C41ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C41E8u;
    // 0x4c41ec: 0xae070340  sw          $a3, 0x340($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 832), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CE670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CE670u, 0x4C41E8u, 0x4C41F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C41F0u;
label_4c41f0:
    // 0x4c41f0: 0xae020344  sw          $v0, 0x344($s0)
    ctx->pc = 0x4c41f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 836), GPR_U32(ctx, 2));
label_4c41f4:
    // 0x4c41f4: 0x8e040340  lw          $a0, 0x340($s0)
    ctx->pc = 0x4c41f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 832)));
label_4c41f8:
    // 0x4c41f8: 0x8e030344  lw          $v1, 0x344($s0)
    ctx->pc = 0x4c41f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 836)));
label_4c41fc:
    // 0x4c41fc: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x4c41fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4c4200:
    // 0x4c4200: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4c4204:
    if (ctx->pc == 0x4C4204u) {
        ctx->pc = 0x4C4204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4200u;
        // 0x4c4204: 0x831023  subu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C4208u;
        goto label_4c4208;
    }
    ctx->pc = 0x4C4200u;
    {
        const bool branch_taken_0x4c4200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4200u;
        // 0x4c4204: 0x831023  subu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4200) {
            ctx->pc = 0x4C4210u;
            goto label_4c4210;
        }
    }
    ctx->pc = 0x4C4208u;
label_4c4208:
    // 0x4c4208: 0x1000ffd3  b           . + 4 + (-0x2D << 2)
label_4c420c:
    if (ctx->pc == 0x4C420Cu) {
        ctx->pc = 0x4C420Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4208u;
        // 0x4c420c: 0xae000340  sw          $zero, 0x340($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 832), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C4210u;
        goto label_4c4210;
    }
    ctx->pc = 0x4C4208u;
    {
        const bool branch_taken_0x4c4208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C420Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4208u;
        // 0x4c420c: 0xae000340  sw          $zero, 0x340($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 832), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4208) {
            ctx->pc = 0x4C4158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c4158;
        }
    }
    ctx->pc = 0x4C4210u;
label_4c4210:
    // 0x4c4210: 0x1000ffd1  b           . + 4 + (-0x2F << 2)
label_4c4214:
    if (ctx->pc == 0x4C4214u) {
        ctx->pc = 0x4C4214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4210u;
        // 0x4c4214: 0xae020340  sw          $v0, 0x340($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 832), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C4218u;
        goto label_4c4218;
    }
    ctx->pc = 0x4C4210u;
    {
        const bool branch_taken_0x4c4210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4210u;
        // 0x4c4214: 0xae020340  sw          $v0, 0x340($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 832), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4210) {
            ctx->pc = 0x4C4158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c4158;
        }
    }
    ctx->pc = 0x4C4218u;
label_4c4218:
    // 0x4c4218: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_4c421c:
    if (ctx->pc == 0x4C421Cu) {
        ctx->pc = 0x4C421Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4218u;
        // 0x4c421c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C4220u;
        goto label_4c4220;
    }
    ctx->pc = 0x4C4218u;
    {
        const bool branch_taken_0x4c4218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C421Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4218u;
        // 0x4c421c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4218) {
            ctx->pc = 0x4C4258u;
            goto label_4c4258;
        }
    }
    ctx->pc = 0x4C4220u;
label_4c4220:
    // 0x4c4220: 0x3c120053  lui         $s2, 0x53
    ctx->pc = 0x4c4220u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)83 << 16));
label_4c4224:
    // 0x4c4224: 0x2611020c  addiu       $s1, $s0, 0x20C
    ctx->pc = 0x4c4224u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 524));
label_4c4228:
    // 0x4c4228: 0x8e44278c  lw          $a0, 0x278C($s2)
    ctx->pc = 0x4c4228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10124)));
label_4c422c:
    // 0x4c422c: 0xc132380  jal         func_4C8E00
label_4c4230:
    if (ctx->pc == 0x4C4230u) {
        ctx->pc = 0x4C4230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C422Cu;
        // 0x4c4230: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C4234u;
        goto label_4c4234;
    }
    ctx->pc = 0x4C422Cu;
    SET_GPR_U32(ctx, 31, 0x4C4234u);
    ctx->pc = 0x4C4230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C422Cu;
    // 0x4c4230: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8E00u, 0x4C422Cu, 0x4C4234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C4234u;
label_4c4234:
    // 0x4c4234: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4c4238:
    if (ctx->pc == 0x4C4238u) {
        ctx->pc = 0x4C4238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4234u;
        // 0x4c4238: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C423Cu;
        goto label_4c423c;
    }
    ctx->pc = 0x4C4234u;
    {
        const bool branch_taken_0x4c4234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4234u;
        // 0x4c4238: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4234) {
            ctx->pc = 0x4C4258u;
            goto label_4c4258;
        }
    }
    ctx->pc = 0x4C423Cu;
label_4c423c:
    // 0x4c423c: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x4c423cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
label_4c4240:
    // 0x4c4240: 0x40f809  jalr        $v0
label_4c4244:
    if (ctx->pc == 0x4C4244u) {
        ctx->pc = 0x4C4244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4240u;
        // 0x4c4244: 0x26040110  addiu       $a0, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C4248u;
        goto label_4c4248;
    }
    ctx->pc = 0x4C4240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4C4248u);
        ctx->pc = 0x4C4244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4240u;
        // 0x4c4244: 0x26040110  addiu       $a0, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C4240u, 0x4C4248u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C4248u;
label_4c4248:
    // 0x4c4248: 0x8e44278c  lw          $a0, 0x278C($s2)
    ctx->pc = 0x4c4248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10124)));
label_4c424c:
    // 0x4c424c: 0xc132386  jal         func_4C8E18
label_4c4250:
    if (ctx->pc == 0x4C4250u) {
        ctx->pc = 0x4C4250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C424Cu;
        // 0x4c4250: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C4254u;
        goto label_4c4254;
    }
    ctx->pc = 0x4C424Cu;
    SET_GPR_U32(ctx, 31, 0x4C4254u);
    ctx->pc = 0x4C4250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C424Cu;
    // 0x4c4250: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8E18u, 0x4C424Cu, 0x4C4254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C4254u;
label_4c4254:
    // 0x4c4254: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4c4254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c4258:
    // 0x4c4258: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c4258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4c425c:
    // 0x4c425c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c425cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4c4260:
    // 0x4c4260: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c4260u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4c4264:
    // 0x4c4264: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4c4264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_4c4268:
    // 0x4c4268: 0x3e00008  jr          $ra
label_4c426c:
    if (ctx->pc == 0x4C426Cu) {
        ctx->pc = 0x4C426Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4268u;
        // 0x4c426c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C4270u;
        goto label_fallthrough_0x4c4268;
    }
    ctx->pc = 0x4C4268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C426Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4268u;
        // 0x4c426c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C4268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4c4268:
    ctx->pc = 0x4C4270u;
}
