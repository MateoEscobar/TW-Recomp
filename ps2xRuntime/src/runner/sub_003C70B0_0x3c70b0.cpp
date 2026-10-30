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

// Function: sub_003C70B0
// Address: 0x3c70b0 - 0x3c71a8
void sub_003C70B0_0x3c70b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C70B0_0x3c70b0");
#endif

    switch (ctx->pc) {
        case 0x3c70b0u: goto label_3c70b0;
        case 0x3c70b4u: goto label_3c70b4;
        case 0x3c70b8u: goto label_3c70b8;
        case 0x3c70bcu: goto label_3c70bc;
        case 0x3c70c0u: goto label_3c70c0;
        case 0x3c70c4u: goto label_3c70c4;
        case 0x3c70c8u: goto label_3c70c8;
        case 0x3c70ccu: goto label_3c70cc;
        case 0x3c70d0u: goto label_3c70d0;
        case 0x3c70d4u: goto label_3c70d4;
        case 0x3c70d8u: goto label_3c70d8;
        case 0x3c70dcu: goto label_3c70dc;
        case 0x3c70e0u: goto label_3c70e0;
        case 0x3c70e4u: goto label_3c70e4;
        case 0x3c70e8u: goto label_3c70e8;
        case 0x3c70ecu: goto label_3c70ec;
        case 0x3c70f0u: goto label_3c70f0;
        case 0x3c70f4u: goto label_3c70f4;
        case 0x3c70f8u: goto label_3c70f8;
        case 0x3c70fcu: goto label_3c70fc;
        case 0x3c7100u: goto label_3c7100;
        case 0x3c7104u: goto label_3c7104;
        case 0x3c7108u: goto label_3c7108;
        case 0x3c710cu: goto label_3c710c;
        case 0x3c7110u: goto label_3c7110;
        case 0x3c7114u: goto label_3c7114;
        case 0x3c7118u: goto label_3c7118;
        case 0x3c711cu: goto label_3c711c;
        case 0x3c7120u: goto label_3c7120;
        case 0x3c7124u: goto label_3c7124;
        case 0x3c7128u: goto label_3c7128;
        case 0x3c712cu: goto label_3c712c;
        case 0x3c7130u: goto label_3c7130;
        case 0x3c7134u: goto label_3c7134;
        case 0x3c7138u: goto label_3c7138;
        case 0x3c713cu: goto label_3c713c;
        case 0x3c7140u: goto label_3c7140;
        case 0x3c7144u: goto label_3c7144;
        case 0x3c7148u: goto label_3c7148;
        case 0x3c714cu: goto label_3c714c;
        case 0x3c7150u: goto label_3c7150;
        case 0x3c7154u: goto label_3c7154;
        case 0x3c7158u: goto label_3c7158;
        case 0x3c715cu: goto label_3c715c;
        case 0x3c7160u: goto label_3c7160;
        case 0x3c7164u: goto label_3c7164;
        case 0x3c7168u: goto label_3c7168;
        case 0x3c716cu: goto label_3c716c;
        case 0x3c7170u: goto label_3c7170;
        case 0x3c7174u: goto label_3c7174;
        case 0x3c7178u: goto label_3c7178;
        case 0x3c717cu: goto label_3c717c;
        case 0x3c7180u: goto label_3c7180;
        case 0x3c7184u: goto label_3c7184;
        case 0x3c7188u: goto label_3c7188;
        case 0x3c718cu: goto label_3c718c;
        case 0x3c7190u: goto label_3c7190;
        case 0x3c7194u: goto label_3c7194;
        case 0x3c7198u: goto label_3c7198;
        case 0x3c719cu: goto label_3c719c;
        case 0x3c71a0u: goto label_3c71a0;
        case 0x3c71a4u: goto label_3c71a4;
        default: break;
    }

    ctx->pc = 0x3c70b0u;

label_3c70b0:
    // 0x3c70b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3c70b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3c70b4:
    // 0x3c70b4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3c70b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3c70b8:
    // 0x3c70b8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3c70b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3c70bc:
    // 0x3c70bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c70bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c70c0:
    // 0x3c70c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3c70c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3c70c4:
    // 0x3c70c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3c70c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c70c8:
    // 0x3c70c8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3c70c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_3c70cc:
    // 0x3c70cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c70ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3c70d0:
    // 0x3c70d0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3c70d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3c70d4:
    // 0x3c70d4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3c70d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c70d8:
    // 0x3c70d8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3c70d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c70dc:
    // 0x3c70dc: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c70dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c70e0:
    // 0x3c70e0: 0x40f809  jalr        $v0
label_3c70e4:
    if (ctx->pc == 0x3C70E4u) {
        ctx->pc = 0x3C70E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C70E0u;
        // 0x3c70e4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C70E8u;
        goto label_3c70e8;
    }
    ctx->pc = 0x3C70E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C70E8u);
        ctx->pc = 0x3C70E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C70E0u;
        // 0x3c70e4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C70E0u, 0x3C70E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C70E8u;
label_3c70e8:
    // 0x3c70e8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3c70e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c70ec:
    // 0x3c70ec: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x3c70ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3c70f0:
    // 0x3c70f0: 0x12220021  beq         $s1, $v0, . + 4 + (0x21 << 2)
label_3c70f4:
    if (ctx->pc == 0x3C70F4u) {
        ctx->pc = 0x3C70F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C70F0u;
        // 0x3c70f4: 0x2e220016  sltiu       $v0, $s1, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C70F8u;
        goto label_3c70f8;
    }
    ctx->pc = 0x3C70F0u;
    {
        const bool branch_taken_0x3c70f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C70F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C70F0u;
        // 0x3c70f4: 0x2e220016  sltiu       $v0, $s1, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c70f0) {
            ctx->pc = 0x3C7178u;
            goto label_3c7178;
        }
    }
    ctx->pc = 0x3C70F8u;
label_3c70f8:
    // 0x3c70f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3c70fc:
    if (ctx->pc == 0x3C70FCu) {
        ctx->pc = 0x3C70FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C70F8u;
        // 0x3c70fc: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7100u;
        goto label_3c7100;
    }
    ctx->pc = 0x3C70F8u;
    {
        const bool branch_taken_0x3c70f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C70FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C70F8u;
        // 0x3c70fc: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c70f8) {
            ctx->pc = 0x3C7110u;
            goto label_3c7110;
        }
    }
    ctx->pc = 0x3C7100u;
label_3c7100:
    // 0x3c7100: 0x1222000a  beq         $s1, $v0, . + 4 + (0xA << 2)
label_3c7104:
    if (ctx->pc == 0x3C7104u) {
        ctx->pc = 0x3C7108u;
        goto label_3c7108;
    }
    ctx->pc = 0x3C7100u;
    {
        const bool branch_taken_0x3c7100 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x3c7100) {
            ctx->pc = 0x3C712Cu;
            goto label_3c712c;
        }
    }
    ctx->pc = 0x3C7108u;
label_3c7108:
    // 0x3c7108: 0x10000021  b           . + 4 + (0x21 << 2)
label_3c710c:
    if (ctx->pc == 0x3C710Cu) {
        ctx->pc = 0x3C710Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7108u;
        // 0x3c710c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7110u;
        goto label_3c7110;
    }
    ctx->pc = 0x3C7108u;
    {
        const bool branch_taken_0x3c7108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C710Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7108u;
        // 0x3c710c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7108) {
            ctx->pc = 0x3C7190u;
            goto label_3c7190;
        }
    }
    ctx->pc = 0x3C7110u;
label_3c7110:
    // 0x3c7110: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3c7110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3c7114:
    // 0x3c7114: 0x1222001d  beq         $s1, $v0, . + 4 + (0x1D << 2)
label_3c7118:
    if (ctx->pc == 0x3C7118u) {
        ctx->pc = 0x3C7118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7114u;
        // 0x3c7118: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C711Cu;
        goto label_3c711c;
    }
    ctx->pc = 0x3C7114u;
    {
        const bool branch_taken_0x3c7114 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C7118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7114u;
        // 0x3c7118: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7114) {
            ctx->pc = 0x3C718Cu;
            goto label_3c718c;
        }
    }
    ctx->pc = 0x3C711Cu;
label_3c711c:
    // 0x3c711c: 0x12220012  beq         $s1, $v0, . + 4 + (0x12 << 2)
label_3c7120:
    if (ctx->pc == 0x3C7120u) {
        ctx->pc = 0x3C7120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C711Cu;
        // 0x3c7120: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7124u;
        goto label_3c7124;
    }
    ctx->pc = 0x3C711Cu;
    {
        const bool branch_taken_0x3c711c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C7120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C711Cu;
        // 0x3c7120: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c711c) {
            ctx->pc = 0x3C7168u;
            goto label_3c7168;
        }
    }
    ctx->pc = 0x3C7124u;
label_3c7124:
    // 0x3c7124: 0x1000001b  b           . + 4 + (0x1B << 2)
label_3c7128:
    if (ctx->pc == 0x3C7128u) {
        ctx->pc = 0x3C7128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7124u;
        // 0x3c7128: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C712Cu;
        goto label_3c712c;
    }
    ctx->pc = 0x3C7124u;
    {
        const bool branch_taken_0x3c7124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7124u;
        // 0x3c7128: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7124) {
            ctx->pc = 0x3C7194u;
            goto label_3c7194;
        }
    }
    ctx->pc = 0x3C712Cu;
label_3c712c:
    // 0x3c712c: 0xc0ea146  jal         func_3A8518
label_3c7130:
    if (ctx->pc == 0x3C7130u) {
        ctx->pc = 0x3C7130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C712Cu;
        // 0x3c7130: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7134u;
        goto label_3c7134;
    }
    ctx->pc = 0x3C712Cu;
    SET_GPR_U32(ctx, 31, 0x3C7134u);
    ctx->pc = 0x3C7130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C712Cu;
    // 0x3c7130: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3C712Cu, 0x3C7134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7134u;
label_3c7134:
    // 0x3c7134: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_3c7138:
    if (ctx->pc == 0x3C7138u) {
        ctx->pc = 0x3C7138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7134u;
        // 0x3c7138: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C713Cu;
        goto label_3c713c;
    }
    ctx->pc = 0x3C7134u;
    {
        const bool branch_taken_0x3c7134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c7134) {
            ctx->pc = 0x3C7138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C7134u;
            // 0x3c7138: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C7154u;
            goto label_3c7154;
        }
    }
    ctx->pc = 0x3C713Cu;
label_3c713c:
    // 0x3c713c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3c713cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c7140:
    // 0x3c7140: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x3c7140u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_3c7144:
    // 0x3c7144: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3c7144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3c7148:
    // 0x3c7148: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3c7148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_3c714c:
    // 0x3c714c: 0x1000000f  b           . + 4 + (0xF << 2)
label_3c7150:
    if (ctx->pc == 0x3C7150u) {
        ctx->pc = 0x3C7150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C714Cu;
        // 0x3c7150: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7154u;
        goto label_3c7154;
    }
    ctx->pc = 0x3C714Cu;
    {
        const bool branch_taken_0x3c714c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C714Cu;
        // 0x3c7150: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c714c) {
            ctx->pc = 0x3C718Cu;
            goto label_3c718c;
        }
    }
    ctx->pc = 0x3C7154u;
label_3c7154:
    // 0x3c7154: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x3c7154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3c7158:
    // 0x3c7158: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3c7158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3c715c:
    // 0x3c715c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3c715cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3c7160:
    // 0x3c7160: 0x1000000a  b           . + 4 + (0xA << 2)
label_3c7164:
    if (ctx->pc == 0x3C7164u) {
        ctx->pc = 0x3C7164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7160u;
        // 0x3c7164: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7168u;
        goto label_3c7168;
    }
    ctx->pc = 0x3C7160u;
    {
        const bool branch_taken_0x3c7160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7160u;
        // 0x3c7164: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7160) {
            ctx->pc = 0x3C718Cu;
            goto label_3c718c;
        }
    }
    ctx->pc = 0x3C7168u;
label_3c7168:
    // 0x3c7168: 0xc0ea13a  jal         func_3A84E8
label_3c716c:
    if (ctx->pc == 0x3C716Cu) {
        ctx->pc = 0x3C716Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7168u;
        // 0x3c716c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7170u;
        goto label_3c7170;
    }
    ctx->pc = 0x3C7168u;
    SET_GPR_U32(ctx, 31, 0x3C7170u);
    ctx->pc = 0x3C716Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7168u;
    // 0x3c716c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3C7168u, 0x3C7170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7170u;
label_3c7170:
    // 0x3c7170: 0x10000006  b           . + 4 + (0x6 << 2)
label_3c7174:
    if (ctx->pc == 0x3C7174u) {
        ctx->pc = 0x3C7174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7170u;
        // 0x3c7174: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7178u;
        goto label_3c7178;
    }
    ctx->pc = 0x3C7170u;
    {
        const bool branch_taken_0x3c7170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7170u;
        // 0x3c7174: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7170) {
            ctx->pc = 0x3C718Cu;
            goto label_3c718c;
        }
    }
    ctx->pc = 0x3C7178u;
label_3c7178:
    // 0x3c7178: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3c7178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c717c:
    // 0x3c717c: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x3c717cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_3c7180:
    // 0x3c7180: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x3c7180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_3c7184:
    // 0x3c7184: 0x60f809  jalr        $v1
label_3c7188:
    if (ctx->pc == 0x3C7188u) {
        ctx->pc = 0x3C7188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7184u;
        // 0x3c7188: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C718Cu;
        goto label_3c718c;
    }
    ctx->pc = 0x3C7184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3C718Cu);
        ctx->pc = 0x3C7188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7184u;
        // 0x3c7188: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C7184u, 0x3C718Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C718Cu;
label_3c718c:
    // 0x3c718c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3c718cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c7190:
    // 0x3c7190: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3c7190u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c7194:
    // 0x3c7194: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c7194u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c7198:
    // 0x3c7198: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3c7198u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c719c:
    // 0x3c719c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c719cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3c71a0:
    // 0x3c71a0: 0x3e00008  jr          $ra
label_3c71a4:
    if (ctx->pc == 0x3C71A4u) {
        ctx->pc = 0x3C71A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C71A0u;
        // 0x3c71a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C71A8u;
        goto label_fallthrough_0x3c71a0;
    }
    ctx->pc = 0x3C71A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C71A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C71A0u;
        // 0x3c71a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C71A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3c71a0:
    ctx->pc = 0x3C71A8u;
}
