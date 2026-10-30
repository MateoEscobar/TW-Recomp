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

// Function: sub_00230D00
// Address: 0x230d00 - 0x231090
void sub_00230D00_0x230d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230D00_0x230d00");
#endif

    switch (ctx->pc) {
        case 0x230d34u: goto label_230d34;
        case 0x230d70u: goto label_230d70;
        case 0x230d7cu: goto label_230d7c;
        case 0x230d8cu: goto label_230d8c;
        case 0x230da4u: goto label_230da4;
        case 0x230dc4u: goto label_230dc4;
        case 0x230df0u: goto label_230df0;
        case 0x230e14u: goto label_230e14;
        case 0x230e2cu: goto label_230e2c;
        case 0x230e44u: goto label_230e44;
        case 0x230f24u: goto label_230f24;
        case 0x230f68u: goto label_230f68;
        case 0x230facu: goto label_230fac;
        case 0x230fe4u: goto label_230fe4;
        case 0x230ff4u: goto label_230ff4;
        case 0x231034u: goto label_231034;
        default: break;
    }

    ctx->pc = 0x230d00u;

    // 0x230d00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x230d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x230d04: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x230d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x230d08: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x230d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x230d0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x230d0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230d10: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x230d10u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x230d14: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x230d14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230d18: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x230d18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x230d1c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x230d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x230d20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x230d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x230d24: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x230d24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x230d28: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x230d28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x230d2c: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x230D2Cu;
    SET_GPR_U32(ctx, 31, 0x230D34u);
    ctx->pc = 0x230D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230D2Cu;
    // 0x230d30: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x230D2Cu, 0x230D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230D34u;
label_230d34:
    // 0x230d34: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x230D34u;
    {
        const bool branch_taken_0x230d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x230D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D34u;
        // 0x230d38: 0x2e22000a  sltiu       $v0, $s1, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x230d34) {
            ctx->pc = 0x230DE8u;
            goto label_230de8;
        }
    }
    ctx->pc = 0x230D3Cu;
    // 0x230d3c: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x230D3Cu;
    {
        const bool branch_taken_0x230d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D3Cu;
        // 0x230d40: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230d3c) {
            ctx->pc = 0x230E58u;
            goto label_230e58;
        }
    }
    ctx->pc = 0x230D44u;
    // 0x230d44: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x230d44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x230d48: 0x2442c0e0  addiu       $v0, $v0, -0x3F20
    ctx->pc = 0x230d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951136));
    // 0x230d4c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x230d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x230d50: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x230d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x230d54: 0x800008  jr          $a0
    ctx->pc = 0x230D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x230D5Cu: goto label_230d5c;
            case 0x230D68u: goto label_230d68;
            case 0x230DDCu: goto label_230ddc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230D54u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x230D5Cu;
label_230d5c:
    // 0x230d5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230d60: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x230D60u;
    {
        const bool branch_taken_0x230d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D60u;
        // 0x230d64: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230d60) {
            ctx->pc = 0x230FDCu;
            goto label_230fdc;
        }
    }
    ctx->pc = 0x230D68u;
label_230d68:
    // 0x230d68: 0xc089b98  jal         func_226E60
    ctx->pc = 0x230D68u;
    SET_GPR_U32(ctx, 31, 0x230D70u);
    ctx->pc = 0x230D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230D68u;
    // 0x230d6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x230D68u, 0x230D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230D70u;
label_230d70:
    // 0x230d70: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x230d70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230d74: 0xc088e98  jal         func_223A60
    ctx->pc = 0x230D74u;
    SET_GPR_U32(ctx, 31, 0x230D7Cu);
    ctx->pc = 0x230D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230D74u;
    // 0x230d78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A60u, 0x230D74u, 0x230D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230D7Cu;
label_230d7c:
    // 0x230d7c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x230D7Cu;
    {
        const bool branch_taken_0x230d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x230D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D7Cu;
        // 0x230d80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230d7c) {
            ctx->pc = 0x230D94u;
            goto label_230d94;
        }
    }
    ctx->pc = 0x230D84u;
    // 0x230d84: 0xc088ea6  jal         func_223A98
    ctx->pc = 0x230D84u;
    SET_GPR_U32(ctx, 31, 0x230D8Cu);
    ctx->pc = 0x230D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230D84u;
    // 0x230d88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A98u, 0x230D84u, 0x230D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230D8Cu;
label_230d8c:
    // 0x230d8c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x230D8Cu;
    {
        const bool branch_taken_0x230d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D8Cu;
        // 0x230d90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230d8c) {
            ctx->pc = 0x230D9Cu;
            goto label_230d9c;
        }
    }
    ctx->pc = 0x230D94u;
label_230d94:
    // 0x230d94: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x230D94u;
    {
        const bool branch_taken_0x230d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D94u;
        // 0x230d98: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230d94) {
            ctx->pc = 0x230FDCu;
            goto label_230fdc;
        }
    }
    ctx->pc = 0x230D9Cu;
label_230d9c:
    // 0x230d9c: 0xc088e90  jal         func_223A40
    ctx->pc = 0x230D9Cu;
    SET_GPR_U32(ctx, 31, 0x230DA4u);
    ctx->pc = 0x230DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230D9Cu;
    // 0x230da0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A40u, 0x230D9Cu, 0x230DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230DA4u;
label_230da4:
    // 0x230da4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x230DA4u;
    {
        const bool branch_taken_0x230da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230DA4u;
        // 0x230da8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230da4) {
            ctx->pc = 0x230DB4u;
            goto label_230db4;
        }
    }
    ctx->pc = 0x230DACu;
    // 0x230dac: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x230DACu;
    {
        const bool branch_taken_0x230dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230DACu;
        // 0x230db0: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230dac) {
            ctx->pc = 0x230FDCu;
            goto label_230fdc;
        }
    }
    ctx->pc = 0x230DB4u;
label_230db4:
    // 0x230db4: 0x12200089  beqz        $s1, . + 4 + (0x89 << 2)
    ctx->pc = 0x230DB4u;
    {
        const bool branch_taken_0x230db4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x230DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230DB4u;
        // 0x230db8: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230db4) {
            ctx->pc = 0x230FDCu;
            goto label_230fdc;
        }
    }
    ctx->pc = 0x230DBCu;
    // 0x230dbc: 0xc088ee6  jal         func_223B98
    ctx->pc = 0x230DBCu;
    SET_GPR_U32(ctx, 31, 0x230DC4u);
    ctx->pc = 0x230DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230DBCu;
    // 0x230dc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B98u, 0x230DBCu, 0x230DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230DC4u;
label_230dc4:
    // 0x230dc4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x230DC4u;
    {
        const bool branch_taken_0x230dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230DC4u;
        // 0x230dc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230dc4) {
            ctx->pc = 0x230DD4u;
            goto label_230dd4;
        }
    }
    ctx->pc = 0x230DCCu;
    // 0x230dcc: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x230DCCu;
    {
        const bool branch_taken_0x230dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230DCCu;
        // 0x230dd0: 0x240500c2  addiu       $a1, $zero, 0xC2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230dcc) {
            ctx->pc = 0x230FDCu;
            goto label_230fdc;
        }
    }
    ctx->pc = 0x230DD4u;
label_230dd4:
    // 0x230dd4: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x230DD4u;
    {
        const bool branch_taken_0x230dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230DD4u;
        // 0x230dd8: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230dd4) {
            ctx->pc = 0x230FDCu;
            goto label_230fdc;
        }
    }
    ctx->pc = 0x230DDCu;
label_230ddc:
    // 0x230ddc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230de0: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x230DE0u;
    {
        const bool branch_taken_0x230de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230DE0u;
        // 0x230de4: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230de0) {
            ctx->pc = 0x230FDCu;
            goto label_230fdc;
        }
    }
    ctx->pc = 0x230DE8u;
label_230de8:
    // 0x230de8: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x230DE8u;
    SET_GPR_U32(ctx, 31, 0x230DF0u);
    ctx->pc = 0x230DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230DE8u;
    // 0x230dec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x230DE8u, 0x230DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230DF0u;
label_230df0:
    // 0x230df0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x230df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230df4: 0x54430019  bnel        $v0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x230DF4u;
    {
        const bool branch_taken_0x230df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x230df4) {
            ctx->pc = 0x230DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230DF4u;
            // 0x230df8: 0x2623fff6  addiu       $v1, $s1, -0xA (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967286));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230E5Cu;
            goto label_230e5c;
        }
    }
    ctx->pc = 0x230DFCu;
    // 0x230dfc: 0x6200016  bltz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x230DFCu;
    {
        const bool branch_taken_0x230dfc = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x230E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230DFCu;
        // 0x230e00: 0x2a220002  slti        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x230dfc) {
            ctx->pc = 0x230E58u;
            goto label_230e58;
        }
    }
    ctx->pc = 0x230E04u;
    // 0x230e04: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x230E04u;
    {
        const bool branch_taken_0x230e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x230E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230E04u;
        // 0x230e08: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230e04) {
            ctx->pc = 0x230E24u;
            goto label_230e24;
        }
    }
    ctx->pc = 0x230E0Cu;
    // 0x230e0c: 0x16220013  bne         $s1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x230E0Cu;
    {
        const bool branch_taken_0x230e0c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x230E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230E0Cu;
        // 0x230e10: 0x2623fff6  addiu       $v1, $s1, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967286));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230e0c) {
            ctx->pc = 0x230E5Cu;
            goto label_230e5c;
        }
    }
    ctx->pc = 0x230E14u;
label_230e14:
    // 0x230e14: 0x3c014310  lui         $at, 0x4310
    ctx->pc = 0x230e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17168 << 16));
    // 0x230e18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x230e18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230e1c: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x230E1Cu;
    {
        const bool branch_taken_0x230e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230E1Cu;
        // 0x230e20: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230e1c) {
            ctx->pc = 0x23106Cu;
            goto label_23106c;
        }
    }
    ctx->pc = 0x230E24u;
label_230e24:
    // 0x230e24: 0xc087502  jal         func_21D408
    ctx->pc = 0x230E24u;
    SET_GPR_U32(ctx, 31, 0x230E2Cu);
    ctx->pc = 0x230E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230E24u;
    // 0x230e28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x230E24u, 0x230E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230E2Cu;
label_230e2c:
    // 0x230e2c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x230e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x230e30: 0x38630005  xori        $v1, $v1, 0x5
    ctx->pc = 0x230e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)5);
    // 0x230e34: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x230E34u;
    {
        const bool branch_taken_0x230e34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x230E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230E34u;
        // 0x230e38: 0x2623fff6  addiu       $v1, $s1, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967286));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230e34) {
            ctx->pc = 0x230E5Cu;
            goto label_230e5c;
        }
    }
    ctx->pc = 0x230E3Cu;
    // 0x230e3c: 0xc0a5198  jal         func_294660
    ctx->pc = 0x230E3Cu;
    SET_GPR_U32(ctx, 31, 0x230E44u);
    ctx->pc = 0x294660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294660u, 0x230E3Cu, 0x230E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230E44u;
label_230e44:
    // 0x230e44: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x230e44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x230e48: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x230e48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x230e4c: 0x0  nop
    ctx->pc = 0x230e4cu;
    // NOP
    // 0x230e50: 0x4501fff0  bc1t        . + 4 + (-0x10 << 2)
    ctx->pc = 0x230E50u;
    {
        const bool branch_taken_0x230e50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x230e50) {
            ctx->pc = 0x230E14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_230e14;
        }
    }
    ctx->pc = 0x230E58u;
label_230e58:
    // 0x230e58: 0x2623fff6  addiu       $v1, $s1, -0xA
    ctx->pc = 0x230e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967286));
label_230e5c:
    // 0x230e5c: 0x2c620017  sltiu       $v0, $v1, 0x17
    ctx->pc = 0x230e5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x230e60: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x230E60u;
    {
        const bool branch_taken_0x230e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230E60u;
        // 0x230e64: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230e60) {
            ctx->pc = 0x230F1Cu;
            goto label_230f1c;
        }
    }
    ctx->pc = 0x230E68u;
    // 0x230e68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x230e68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x230e6c: 0x2442c110  addiu       $v0, $v0, -0x3EF0
    ctx->pc = 0x230e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951184));
    // 0x230e70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x230e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x230e74: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x230e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x230e78: 0x800008  jr          $a0
    ctx->pc = 0x230E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x230E14u: goto label_230e14;
            case 0x230E80u: goto label_230e80;
            case 0x230E8Cu: goto label_230e8c;
            case 0x230E98u: goto label_230e98;
            case 0x230EA4u: goto label_230ea4;
            case 0x230EB0u: goto label_230eb0;
            case 0x230EBCu: goto label_230ebc;
            case 0x230EC8u: goto label_230ec8;
            case 0x230ED4u: goto label_230ed4;
            case 0x230EE0u: goto label_230ee0;
            case 0x230EECu: goto label_230eec;
            case 0x230EF8u: goto label_230ef8;
            case 0x230F04u: goto label_230f04;
            case 0x230F10u: goto label_230f10;
            case 0x230F1Cu: goto label_230f1c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230E78u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x230E80u;
label_230e80:
    // 0x230e80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230e84: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x230E84u;
    {
        const bool branch_taken_0x230e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230E84u;
        // 0x230e88: 0x24050048  addiu       $a1, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230e84) {
            ctx->pc = 0x230FDCu;
            goto label_230fdc;
        }
    }
    ctx->pc = 0x230E8Cu;
label_230e8c:
    // 0x230e8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230e90: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x230E90u;
    {
        const bool branch_taken_0x230e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230E90u;
        // 0x230e94: 0x24050068  addiu       $a1, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230e90) {
            ctx->pc = 0x230FDCu;
            goto label_230fdc;
        }
    }
    ctx->pc = 0x230E98u;
label_230e98:
    // 0x230e98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230e9c: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x230E9Cu;
    {
        const bool branch_taken_0x230e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230E9Cu;
        // 0x230ea0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230e9c) {
            ctx->pc = 0x230FDCu;
            goto label_230fdc;
        }
    }
    ctx->pc = 0x230EA4u;
label_230ea4:
    // 0x230ea4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230ea8: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x230EA8u;
    {
        const bool branch_taken_0x230ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230EA8u;
        // 0x230eac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230ea8) {
            ctx->pc = 0x230FDCu;
            goto label_230fdc;
        }
    }
    ctx->pc = 0x230EB0u;
label_230eb0:
    // 0x230eb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230eb4: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x230EB4u;
    {
        const bool branch_taken_0x230eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230EB4u;
        // 0x230eb8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230eb4) {
            ctx->pc = 0x230FDCu;
            goto label_230fdc;
        }
    }
    ctx->pc = 0x230EBCu;
label_230ebc:
    // 0x230ebc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230ec0: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x230EC0u;
    {
        const bool branch_taken_0x230ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230EC0u;
        // 0x230ec4: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230ec0) {
            ctx->pc = 0x230FDCu;
            goto label_230fdc;
        }
    }
    ctx->pc = 0x230EC8u;
label_230ec8:
    // 0x230ec8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230ecc: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x230ECCu;
    {
        const bool branch_taken_0x230ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230ECCu;
        // 0x230ed0: 0x240500c1  addiu       $a1, $zero, 0xC1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230ecc) {
            ctx->pc = 0x230FDCu;
            goto label_230fdc;
        }
    }
    ctx->pc = 0x230ED4u;
label_230ed4:
    // 0x230ed4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230ed8: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x230ED8u;
    {
        const bool branch_taken_0x230ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230ED8u;
        // 0x230edc: 0x240500c2  addiu       $a1, $zero, 0xC2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230ed8) {
            ctx->pc = 0x230FDCu;
            goto label_230fdc;
        }
    }
    ctx->pc = 0x230EE0u;
label_230ee0:
    // 0x230ee0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230ee4: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x230EE4u;
    {
        const bool branch_taken_0x230ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230EE4u;
        // 0x230ee8: 0x240500ed  addiu       $a1, $zero, 0xED (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 237));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230ee4) {
            ctx->pc = 0x230FDCu;
            goto label_230fdc;
        }
    }
    ctx->pc = 0x230EECu;
label_230eec:
    // 0x230eec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230ef0: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x230EF0u;
    {
        const bool branch_taken_0x230ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230EF0u;
        // 0x230ef4: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230ef0) {
            ctx->pc = 0x230FDCu;
            goto label_230fdc;
        }
    }
    ctx->pc = 0x230EF8u;
label_230ef8:
    // 0x230ef8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230efc: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x230EFCu;
    {
        const bool branch_taken_0x230efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230EFCu;
        // 0x230f00: 0x24050298  addiu       $a1, $zero, 0x298 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230efc) {
            ctx->pc = 0x230FDCu;
            goto label_230fdc;
        }
    }
    ctx->pc = 0x230F04u;
label_230f04:
    // 0x230f04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230f08: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x230F08u;
    {
        const bool branch_taken_0x230f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F08u;
        // 0x230f0c: 0x2405028d  addiu       $a1, $zero, 0x28D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 653));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230f08) {
            ctx->pc = 0x230FDCu;
            goto label_230fdc;
        }
    }
    ctx->pc = 0x230F10u;
label_230f10:
    // 0x230f10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230f14: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x230F14u;
    {
        const bool branch_taken_0x230f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F14u;
        // 0x230f18: 0x24050291  addiu       $a1, $zero, 0x291 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 657));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230f14) {
            ctx->pc = 0x230FDCu;
            goto label_230fdc;
        }
    }
    ctx->pc = 0x230F1Cu;
label_230f1c:
    // 0x230f1c: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x230F1Cu;
    SET_GPR_U32(ctx, 31, 0x230F24u);
    ctx->pc = 0x230F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230F1Cu;
    // 0x230f20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x230F1Cu, 0x230F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230F24u;
label_230f24:
    // 0x230f24: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x230f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x230f28: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x230F28u;
    {
        const bool branch_taken_0x230f28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x230f28) {
            ctx->pc = 0x230F60u;
            goto label_230f60;
        }
    }
    ctx->pc = 0x230F30u;
    // 0x230f30: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x230F30u;
    {
        const bool branch_taken_0x230f30 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x230F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F30u;
        // 0x230f34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230f30) {
            ctx->pc = 0x230F44u;
            goto label_230f44;
        }
    }
    ctx->pc = 0x230F38u;
    // 0x230f38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230f3c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x230F3Cu;
    {
        const bool branch_taken_0x230f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F3Cu;
        // 0x230f40: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230f3c) {
            ctx->pc = 0x230FDCu;
            goto label_230fdc;
        }
    }
    ctx->pc = 0x230F44u;
label_230f44:
    // 0x230f44: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x230F44u;
    {
        const bool branch_taken_0x230f44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x230F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F44u;
        // 0x230f48: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230f44) {
            ctx->pc = 0x230F54u;
            goto label_230f54;
        }
    }
    ctx->pc = 0x230F4Cu;
    // 0x230f4c: 0x56220046  bnel        $s1, $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x230F4Cu;
    {
        const bool branch_taken_0x230f4c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x230f4c) {
            ctx->pc = 0x230F50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230F4Cu;
            // 0x230f50: 0x4615a802  mul.s       $f0, $f21, $f21 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x231068u;
            goto label_231068;
        }
    }
    ctx->pc = 0x230F54u;
label_230f54:
    // 0x230f54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230f58: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x230F58u;
    {
        const bool branch_taken_0x230f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F58u;
        // 0x230f5c: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230f58) {
            ctx->pc = 0x230FDCu;
            goto label_230fdc;
        }
    }
    ctx->pc = 0x230F60u;
label_230f60:
    // 0x230f60: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x230F60u;
    SET_GPR_U32(ctx, 31, 0x230F68u);
    ctx->pc = 0x230F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230F60u;
    // 0x230f64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x230F60u, 0x230F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230F68u;
label_230f68:
    // 0x230f68: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x230f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x230f6c: 0x5443000d  bnel        $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x230F6Cu;
    {
        const bool branch_taken_0x230f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x230f6c) {
            ctx->pc = 0x230F70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230F6Cu;
            // 0x230f70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230FA4u;
            goto label_230fa4;
        }
    }
    ctx->pc = 0x230F74u;
    // 0x230f74: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x230F74u;
    {
        const bool branch_taken_0x230f74 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x230F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F74u;
        // 0x230f78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230f74) {
            ctx->pc = 0x230F88u;
            goto label_230f88;
        }
    }
    ctx->pc = 0x230F7Cu;
    // 0x230f7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230f80: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x230F80u;
    {
        const bool branch_taken_0x230f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F80u;
        // 0x230f84: 0x24050029  addiu       $a1, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230f80) {
            ctx->pc = 0x230FDCu;
            goto label_230fdc;
        }
    }
    ctx->pc = 0x230F88u;
label_230f88:
    // 0x230f88: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x230F88u;
    {
        const bool branch_taken_0x230f88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x230F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F88u;
        // 0x230f8c: 0x2a220006  slti        $v0, $s1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x230f88) {
            ctx->pc = 0x230F98u;
            goto label_230f98;
        }
    }
    ctx->pc = 0x230F90u;
    // 0x230f90: 0x50400035  beql        $v0, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x230F90u;
    {
        const bool branch_taken_0x230f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x230f90) {
            ctx->pc = 0x230F94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230F90u;
            // 0x230f94: 0x4615a802  mul.s       $f0, $f21, $f21 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x231068u;
            goto label_231068;
        }
    }
    ctx->pc = 0x230F98u;
label_230f98:
    // 0x230f98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230f9c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x230F9Cu;
    {
        const bool branch_taken_0x230f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F9Cu;
        // 0x230fa0: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230f9c) {
            ctx->pc = 0x230FDCu;
            goto label_230fdc;
        }
    }
    ctx->pc = 0x230FA4u;
label_230fa4:
    // 0x230fa4: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x230FA4u;
    SET_GPR_U32(ctx, 31, 0x230FACu);
    ctx->pc = 0x230FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230FA4u;
    // 0x230fa8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x230FA4u, 0x230FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230FACu;
label_230fac:
    // 0x230fac: 0x1452000f  bne         $v0, $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x230FACu;
    {
        const bool branch_taken_0x230fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x230fac) {
            ctx->pc = 0x230FECu;
            goto label_230fec;
        }
    }
    ctx->pc = 0x230FB4u;
    // 0x230fb4: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x230FB4u;
    {
        const bool branch_taken_0x230fb4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x230FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230FB4u;
        // 0x230fb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230fb4) {
            ctx->pc = 0x230FC4u;
            goto label_230fc4;
        }
    }
    ctx->pc = 0x230FBCu;
    // 0x230fbc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x230FBCu;
    {
        const bool branch_taken_0x230fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230FBCu;
        // 0x230fc0: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230fbc) {
            ctx->pc = 0x230FDCu;
            goto label_230fdc;
        }
    }
    ctx->pc = 0x230FC4u;
label_230fc4:
    // 0x230fc4: 0x12320003  beq         $s1, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x230FC4u;
    {
        const bool branch_taken_0x230fc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 18));
        ctx->pc = 0x230FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230FC4u;
        // 0x230fc8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230fc4) {
            ctx->pc = 0x230FD4u;
            goto label_230fd4;
        }
    }
    ctx->pc = 0x230FCCu;
    // 0x230fcc: 0x56220026  bnel        $s1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x230FCCu;
    {
        const bool branch_taken_0x230fcc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x230fcc) {
            ctx->pc = 0x230FD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230FCCu;
            // 0x230fd0: 0x4615a802  mul.s       $f0, $f21, $f21 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x231068u;
            goto label_231068;
        }
    }
    ctx->pc = 0x230FD4u;
label_230fd4:
    // 0x230fd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230fd8: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x230fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_230fdc:
    // 0x230fdc: 0xc095128  jal         func_2544A0
    ctx->pc = 0x230FDCu;
    SET_GPR_U32(ctx, 31, 0x230FE4u);
    ctx->pc = 0x2544A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544A0u, 0x230FDCu, 0x230FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230FE4u;
label_230fe4:
    // 0x230fe4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x230FE4u;
    {
        const bool branch_taken_0x230fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230FE4u;
        // 0x230fe8: 0x46000002  mul.s       $f0, $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x230fe4) {
            ctx->pc = 0x231068u;
            goto label_231068;
        }
    }
    ctx->pc = 0x230FECu;
label_230fec:
    // 0x230fec: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x230FECu;
    SET_GPR_U32(ctx, 31, 0x230FF4u);
    ctx->pc = 0x230FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230FECu;
    // 0x230ff0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x230FECu, 0x230FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230FF4u;
label_230ff4:
    // 0x230ff4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x230ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x230ff8: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x230FF8u;
    {
        const bool branch_taken_0x230ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x230ff8) {
            ctx->pc = 0x23102Cu;
            goto label_23102c;
        }
    }
    ctx->pc = 0x231000u;
    // 0x231000: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x231000u;
    {
        const bool branch_taken_0x231000 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x231004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231000u;
        // 0x231004: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231000) {
            ctx->pc = 0x231014u;
            goto label_231014;
        }
    }
    ctx->pc = 0x231008u;
    // 0x231008: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x231008u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x23100c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23100cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231010: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x231010u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_231014:
    // 0x231014: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x231014u;
    {
        const bool branch_taken_0x231014 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x231018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231014u;
        // 0x231018: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231014) {
            ctx->pc = 0x231064u;
            goto label_231064;
        }
    }
    ctx->pc = 0x23101Cu;
    // 0x23101c: 0x3c014461  lui         $at, 0x4461
    ctx->pc = 0x23101cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17505 << 16));
    // 0x231020: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x231020u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231024: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x231024u;
    {
        const bool branch_taken_0x231024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231024u;
        // 0x231028: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231024) {
            ctx->pc = 0x231070u;
            goto label_231070;
        }
    }
    ctx->pc = 0x23102Cu;
label_23102c:
    // 0x23102c: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x23102Cu;
    SET_GPR_U32(ctx, 31, 0x231034u);
    ctx->pc = 0x231030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23102Cu;
    // 0x231030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x23102Cu, 0x231034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231034u;
label_231034:
    // 0x231034: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x231034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x231038: 0x5443000b  bnel        $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x231038u;
    {
        const bool branch_taken_0x231038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x231038) {
            ctx->pc = 0x23103Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231038u;
            // 0x23103c: 0x4615a802  mul.s       $f0, $f21, $f21 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x231068u;
            goto label_231068;
        }
    }
    ctx->pc = 0x231040u;
    // 0x231040: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x231040u;
    {
        const bool branch_taken_0x231040 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x231044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231040u;
        // 0x231044: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231040) {
            ctx->pc = 0x231054u;
            goto label_231054;
        }
    }
    ctx->pc = 0x231048u;
    // 0x231048: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x231048u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x23104c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23104cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231050: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x231050u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_231054:
    // 0x231054: 0x3c014361  lui         $at, 0x4361
    ctx->pc = 0x231054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17249 << 16));
    // 0x231058: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x231058u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23105c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23105Cu;
    {
        const bool branch_taken_0x23105c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x231060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23105Cu;
        // 0x231060: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23105c) {
            ctx->pc = 0x23106Cu;
            goto label_23106c;
        }
    }
    ctx->pc = 0x231064u;
label_231064:
    // 0x231064: 0x4615a802  mul.s       $f0, $f21, $f21
    ctx->pc = 0x231064u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
label_231068:
    // 0x231068: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x231068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23106c:
    // 0x23106c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x23106cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_231070:
    // 0x231070: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x231070u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231074: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x231074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231078: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x231078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x23107c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x23107cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x231080: 0x3e00008  jr          $ra
    ctx->pc = 0x231080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231080u;
        // 0x231084: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231088u;
    // 0x231088: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x231088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x23108c: 0x0  nop
    ctx->pc = 0x23108cu;
    // NOP
    ctx->pc = 0x231090u;
}
