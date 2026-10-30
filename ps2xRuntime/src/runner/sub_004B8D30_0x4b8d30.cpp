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

// Function: sub_004B8D30
// Address: 0x4b8d30 - 0x4b8db8
void sub_004B8D30_0x4b8d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B8D30_0x4b8d30");
#endif

    switch (ctx->pc) {
        case 0x4b8d8cu: goto label_4b8d8c;
        case 0x4b8dacu: goto label_4b8dac;
        default: break;
    }

    ctx->pc = 0x4b8d30u;

    // 0x4b8d30: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x4b8d30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4b8d34: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b8d34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b8d38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4b8d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8d3c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x4b8d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x4b8d40: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b8d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b8d44: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x4b8d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x4b8d48: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4b8d48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4b8d4c: 0x34420fda  ori         $v0, $v0, 0xFDA
    ctx->pc = 0x4b8d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4058);
    // 0x4b8d50: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x4b8d50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x4b8d54: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B8D54u;
    {
        const bool branch_taken_0x4b8d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B8D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8D54u;
        // 0x4b8d58: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8d54) {
            ctx->pc = 0x4B8D68u;
            goto label_4b8d68;
        }
    }
    ctx->pc = 0x4B8D5Cu;
    // 0x4b8d5c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x4b8d5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x4b8d60: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4B8D60u;
    {
        const bool branch_taken_0x4b8d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B8D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8D60u;
        // 0x4b8d64: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8d60) {
            ctx->pc = 0x4B8DA4u;
            goto label_4b8da4;
        }
    }
    ctx->pc = 0x4B8D68u;
label_4b8d68:
    // 0x4b8d68: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x4b8d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x4b8d6c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b8d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b8d70: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x4b8d70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x4b8d74: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B8D74u;
    {
        const bool branch_taken_0x4b8d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b8d74) {
            ctx->pc = 0x4B8D84u;
            goto label_4b8d84;
        }
    }
    ctx->pc = 0x4B8D7Cu;
    // 0x4b8d7c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4B8D7Cu;
    {
        const bool branch_taken_0x4b8d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B8D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8D7Cu;
        // 0x4b8d80: 0x460c6001  sub.s       $f0, $f12, $f12 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8d7c) {
            ctx->pc = 0x4B8DACu;
            goto label_4b8dac;
        }
    }
    ctx->pc = 0x4B8D84u;
label_4b8d84:
    // 0x4b8d84: 0xc12f3d8  jal         func_4BCF60
    ctx->pc = 0x4B8D84u;
    SET_GPR_U32(ctx, 31, 0x4B8D8Cu);
    ctx->pc = 0x4B8D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8D84u;
    // 0x4b8d88: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BCF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BCF60u, 0x4B8D84u, 0x4B8D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8D8Cu;
label_4b8d8c:
    // 0x4b8d8c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4b8d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4b8d90: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4b8d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b8d94: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4b8d94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4b8d98: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x4b8d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4b8d9c: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x4b8d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x4b8da0: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x4b8da0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4b8da4:
    // 0x4b8da4: 0xc12f80a  jal         func_4BE028
    ctx->pc = 0x4B8DA4u;
    SET_GPR_U32(ctx, 31, 0x4B8DACu);
    ctx->pc = 0x4BE028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE028u, 0x4B8DA4u, 0x4B8DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8DACu;
label_4b8dac:
    // 0x4b8dac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b8dacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b8db0: 0x3e00008  jr          $ra
    ctx->pc = 0x4B8DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B8DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8DB0u;
        // 0x4b8db4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B8DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B8DB8u;
}
