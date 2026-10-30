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

// Function: sub_004A99E0
// Address: 0x4a99e0 - 0x4a9a70
void sub_004A99E0_0x4a99e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A99E0_0x4a99e0");
#endif

    switch (ctx->pc) {
        case 0x4a99e0u: goto label_4a99e0;
        case 0x4a99e4u: goto label_4a99e4;
        case 0x4a99e8u: goto label_4a99e8;
        case 0x4a99ecu: goto label_4a99ec;
        case 0x4a99f0u: goto label_4a99f0;
        case 0x4a99f4u: goto label_4a99f4;
        case 0x4a99f8u: goto label_4a99f8;
        case 0x4a99fcu: goto label_4a99fc;
        case 0x4a9a00u: goto label_4a9a00;
        case 0x4a9a04u: goto label_4a9a04;
        case 0x4a9a08u: goto label_4a9a08;
        case 0x4a9a0cu: goto label_4a9a0c;
        case 0x4a9a10u: goto label_4a9a10;
        case 0x4a9a14u: goto label_4a9a14;
        case 0x4a9a18u: goto label_4a9a18;
        case 0x4a9a1cu: goto label_4a9a1c;
        case 0x4a9a20u: goto label_4a9a20;
        case 0x4a9a24u: goto label_4a9a24;
        case 0x4a9a28u: goto label_4a9a28;
        case 0x4a9a2cu: goto label_4a9a2c;
        case 0x4a9a30u: goto label_4a9a30;
        case 0x4a9a34u: goto label_4a9a34;
        case 0x4a9a38u: goto label_4a9a38;
        case 0x4a9a3cu: goto label_4a9a3c;
        case 0x4a9a40u: goto label_4a9a40;
        case 0x4a9a44u: goto label_4a9a44;
        case 0x4a9a48u: goto label_4a9a48;
        case 0x4a9a4cu: goto label_4a9a4c;
        case 0x4a9a50u: goto label_4a9a50;
        case 0x4a9a54u: goto label_4a9a54;
        case 0x4a9a58u: goto label_4a9a58;
        case 0x4a9a5cu: goto label_4a9a5c;
        case 0x4a9a60u: goto label_4a9a60;
        case 0x4a9a64u: goto label_4a9a64;
        case 0x4a9a68u: goto label_4a9a68;
        case 0x4a9a6cu: goto label_4a9a6c;
        default: break;
    }

    ctx->pc = 0x4a99e0u;

label_4a99e0:
    // 0x4a99e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4a99e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4a99e4:
    // 0x4a99e4: 0x278687f8  addiu       $a2, $gp, -0x7808
    ctx->pc = 0x4a99e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936568));
label_4a99e8:
    // 0x4a99e8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4a99e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4a99ec:
    // 0x4a99ec: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4a99ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_4a99f0:
    // 0x4a99f0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x4a99f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4a99f4:
    // 0x4a99f4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4a99f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4a99f8:
    // 0x4a99f8: 0x84800b  movn        $s0, $a0, $a0
    ctx->pc = 0x4a99f8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
label_4a99fc:
    // 0x4a99fc: 0x8c62ae0c  lw          $v0, -0x51F4($v1)
    ctx->pc = 0x4a99fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946316)));
label_4a9a00:
    // 0x4a9a00: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x4a9a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4a9a04:
    // 0x4a9a04: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4a9a04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4a9a08:
    // 0x4a9a08: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4a9a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4a9a0c:
    // 0x4a9a0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a9a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4a9a10:
    // 0x4a9a10: 0x40f809  jalr        $v0
label_4a9a14:
    if (ctx->pc == 0x4A9A14u) {
        ctx->pc = 0x4A9A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9A10u;
        // 0x4a9a14: 0x210200b  movn        $a0, $s0, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A9A18u;
        goto label_4a9a18;
    }
    ctx->pc = 0x4A9A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A9A18u);
        ctx->pc = 0x4A9A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9A10u;
        // 0x4a9a14: 0x210200b  movn        $a0, $s0, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A9A10u, 0x4A9A18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A9A18u;
label_4a9a18:
    // 0x4a9a18: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4a9a18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_4a9a1c:
    // 0x4a9a1c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x4a9a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_4a9a20:
    // 0x4a9a20: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x4a9a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
label_4a9a24:
    // 0x4a9a24: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x4a9a24u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
label_4a9a28:
    // 0x4a9a28: 0x438824  and         $s1, $v0, $v1
    ctx->pc = 0x4a9a28u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4a9a2c:
    // 0x4a9a2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4a9a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a9a30:
    // 0x4a9a30: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4a9a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4a9a34:
    // 0x4a9a34: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4a9a34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a9a38:
    // 0x4a9a38: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x4a9a38u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
label_4a9a3c:
    // 0x4a9a3c: 0xc11ef26  jal         func_47BC98
label_4a9a40:
    if (ctx->pc == 0x4A9A40u) {
        ctx->pc = 0x4A9A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9A3Cu;
        // 0x4a9a40: 0x2408000a  addiu       $t0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A9A44u;
        goto label_4a9a44;
    }
    ctx->pc = 0x4A9A3Cu;
    SET_GPR_U32(ctx, 31, 0x4A9A44u);
    ctx->pc = 0x4A9A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A9A3Cu;
    // 0x4a9a40: 0x2408000a  addiu       $t0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BC98u, 0x4A9A3Cu, 0x4A9A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9A44u;
label_4a9a44:
    // 0x4a9a44: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_4a9a48:
    if (ctx->pc == 0x4A9A48u) {
        ctx->pc = 0x4A9A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9A44u;
        // 0x4a9a48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A9A4Cu;
        goto label_4a9a4c;
    }
    ctx->pc = 0x4A9A44u;
    {
        const bool branch_taken_0x4a9a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9A44u;
        // 0x4a9a48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9a44) {
            ctx->pc = 0x4A9A64u;
            goto label_4a9a64;
        }
    }
    ctx->pc = 0x4A9A4Cu;
label_4a9a4c:
    // 0x4a9a4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4a9a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a9a50:
    // 0x4a9a50: 0xc11fbba  jal         func_47EEE8
label_4a9a54:
    if (ctx->pc == 0x4A9A54u) {
        ctx->pc = 0x4A9A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9A50u;
        // 0x4a9a54: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A9A58u;
        goto label_4a9a58;
    }
    ctx->pc = 0x4A9A50u;
    SET_GPR_U32(ctx, 31, 0x4A9A58u);
    ctx->pc = 0x4A9A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A9A50u;
    // 0x4a9a54: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47EEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47EEE8u, 0x4A9A50u, 0x4A9A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9A58u;
label_4a9a58:
    // 0x4a9a58: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x4a9a58u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_4a9a5c:
    // 0x4a9a5c: 0x10000002  b           . + 4 + (0x2 << 2)
label_4a9a60:
    if (ctx->pc == 0x4A9A60u) {
        ctx->pc = 0x4A9A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9A5Cu;
        // 0x4a9a60: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A9A64u;
        goto label_4a9a64;
    }
    ctx->pc = 0x4A9A5Cu;
    {
        const bool branch_taken_0x4a9a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9A5Cu;
        // 0x4a9a60: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9a5c) {
            ctx->pc = 0x4A9A68u;
            goto label_4a9a68;
        }
    }
    ctx->pc = 0x4A9A64u;
label_4a9a64:
    // 0x4a9a64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a9a64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a9a68:
    // 0x4a9a68: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4a9a68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a9a6c:
    // 0x4a9a6c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4a9a6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x4a9a70u;
}
