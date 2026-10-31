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

// Function: sub_0032FC18
// Address: 0x32fc18 - 0x32fcc0
void sub_0032FC18_0x32fc18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032FC18_0x32fc18");
#endif

    switch (ctx->pc) {
        case 0x32fc48u: goto label_32fc48;
        case 0x32fc9cu: goto label_32fc9c;
        default: break;
    }

    ctx->pc = 0x32fc18u;

    // 0x32fc18: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x32fc18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x32fc1c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x32fc1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x32fc20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32fc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32fc24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32fc24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fc28: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x32fc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x32fc2c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x32fc2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fc30: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x32fc30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fc34: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x32fc34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x32fc38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32fc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32fc3c: 0x26460018  addiu       $a2, $s2, 0x18
    ctx->pc = 0x32fc3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x32fc40: 0xc0cb1d6  jal         func_32C758
    ctx->pc = 0x32FC40u;
    SET_GPR_U32(ctx, 31, 0x32FC48u);
    ctx->pc = 0x32FC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FC40u;
    // 0x32fc44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C758u, 0x32FC40u, 0x32FC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FC48u;
label_32fc48:
    // 0x32fc48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32fc48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fc4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32fc4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fc50: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x32fc50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x32fc54: 0xa6120008  sh          $s2, 0x8($s0)
    ctx->pc = 0x32fc54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 18));
    // 0x32fc58: 0x272100a  movz        $v0, $s3, $s2
    ctx->pc = 0x32fc58u;
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 19));
    // 0x32fc5c: 0xa600000a  sh          $zero, 0xA($s0)
    ctx->pc = 0x32fc5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x32fc60: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x32fc60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x32fc64: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x32fc64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fc68: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x32fc68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x32fc6c: 0x24850038  addiu       $a1, $a0, 0x38
    ctx->pc = 0x32fc6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 56));
    // 0x32fc70: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x32fc70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x32fc74: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x32fc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x32fc78: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x32fc78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x32fc7c: 0x24420011  addiu       $v0, $v0, 0x11
    ctx->pc = 0x32fc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17));
    // 0x32fc80: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x32fc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x32fc84: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x32fc84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x32fc88: 0xae220060  sw          $v0, 0x60($s1)
    ctx->pc = 0x32fc88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
    // 0x32fc8c: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x32fc8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x32fc90: 0x738c2  srl         $a3, $a3, 3
    ctx->pc = 0x32fc90u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 3));
    // 0x32fc94: 0xc0cbeb2  jal         func_32FAC8
    ctx->pc = 0x32FC94u;
    SET_GPR_U32(ctx, 31, 0x32FC9Cu);
    ctx->pc = 0x32FC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FC94u;
    // 0x32fc98: 0xe33824  and         $a3, $a3, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FAC8u, 0x32FC94u, 0x32FC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FC9Cu;
label_32fc9c:
    // 0x32fc9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32fc9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fca0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x32fca0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32fca4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x32fca4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32fca8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32fca8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32fcac: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x32fcacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32fcb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32fcb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32fcb4: 0x3e00008  jr          $ra
    ctx->pc = 0x32FCB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32FCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FCB4u;
        // 0x32fcb8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FCB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32FCBCu;
    // 0x32fcbc: 0x0  nop
    ctx->pc = 0x32fcbcu;
    // NOP
    ctx->pc = 0x32fcc0u;
}
