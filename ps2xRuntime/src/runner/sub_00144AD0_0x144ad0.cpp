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

// Function: sub_00144AD0
// Address: 0x144ad0 - 0x144b88
void sub_00144AD0_0x144ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144AD0_0x144ad0");
#endif

    switch (ctx->pc) {
        case 0x144af0u: goto label_144af0;
        case 0x144b00u: goto label_144b00;
        default: break;
    }

    ctx->pc = 0x144ad0u;

    // 0x144ad0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x144ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x144ad4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x144ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x144ad8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x144ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x144adc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x144adcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144ae0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x144ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x144ae4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x144ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x144ae8: 0xc0512a0  jal         func_144A80
    ctx->pc = 0x144AE8u;
    SET_GPR_U32(ctx, 31, 0x144AF0u);
    ctx->pc = 0x144AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144AE8u;
    // 0x144aec: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144A80u, 0x144AE8u, 0x144AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144AF0u;
label_144af0:
    // 0x144af0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x144af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144af4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x144af4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144af8: 0xc051282  jal         func_144A08
    ctx->pc = 0x144AF8u;
    SET_GPR_U32(ctx, 31, 0x144B00u);
    ctx->pc = 0x144AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144AF8u;
    // 0x144afc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144A08u, 0x144AF8u, 0x144B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144B00u;
label_144b00:
    // 0x144b00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x144b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144b04: 0x30821000  andi        $v0, $a0, 0x1000
    ctx->pc = 0x144b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4096);
    // 0x144b08: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x144B08u;
    {
        const bool branch_taken_0x144b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x144B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144B08u;
        // 0x144b0c: 0x36231000  ori         $v1, $s1, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x144b08) {
            ctx->pc = 0x144B1Cu;
            goto label_144b1c;
        }
    }
    ctx->pc = 0x144B10u;
    // 0x144b10: 0x92420030  lbu         $v0, 0x30($s2)
    ctx->pc = 0x144b10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x144b14: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x144b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
    // 0x144b18: 0x62880a  movz        $s1, $v1, $v0
    ctx->pc = 0x144b18u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_144b1c:
    // 0x144b1c: 0x30824000  andi        $v0, $a0, 0x4000
    ctx->pc = 0x144b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x144b20: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x144B20u;
    {
        const bool branch_taken_0x144b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x144B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144B20u;
        // 0x144b24: 0x36234000  ori         $v1, $s1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x144b20) {
            ctx->pc = 0x144B34u;
            goto label_144b34;
        }
    }
    ctx->pc = 0x144B28u;
    // 0x144b28: 0x92420032  lbu         $v0, 0x32($s2)
    ctx->pc = 0x144b28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 50)));
    // 0x144b2c: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x144b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
    // 0x144b30: 0x62880a  movz        $s1, $v1, $v0
    ctx->pc = 0x144b30u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_144b34:
    // 0x144b34: 0x30822000  andi        $v0, $a0, 0x2000
    ctx->pc = 0x144b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
    // 0x144b38: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x144B38u;
    {
        const bool branch_taken_0x144b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x144B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144B38u;
        // 0x144b3c: 0x36232000  ori         $v1, $s1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x144b38) {
            ctx->pc = 0x144B4Cu;
            goto label_144b4c;
        }
    }
    ctx->pc = 0x144B40u;
    // 0x144b40: 0x92420031  lbu         $v0, 0x31($s2)
    ctx->pc = 0x144b40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 49)));
    // 0x144b44: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x144b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
    // 0x144b48: 0x62880a  movz        $s1, $v1, $v0
    ctx->pc = 0x144b48u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_144b4c:
    // 0x144b4c: 0x30828000  andi        $v0, $a0, 0x8000
    ctx->pc = 0x144b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x144b50: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x144B50u;
    {
        const bool branch_taken_0x144b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x144B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144B50u;
        // 0x144b54: 0x36238000  ori         $v1, $s1, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x144b50) {
            ctx->pc = 0x144B64u;
            goto label_144b64;
        }
    }
    ctx->pc = 0x144B58u;
    // 0x144b58: 0x92420033  lbu         $v0, 0x33($s2)
    ctx->pc = 0x144b58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 51)));
    // 0x144b5c: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x144b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
    // 0x144b60: 0x62880a  movz        $s1, $v1, $v0
    ctx->pc = 0x144b60u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_144b64:
    // 0x144b64: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x144b64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144b68: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x144b68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x144b6c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x144b6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x144b70: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x144b70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144b74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x144b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144b78: 0x3e00008  jr          $ra
    ctx->pc = 0x144B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144B78u;
        // 0x144b7c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144B80u;
    // 0x144b80: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x144b80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144b84: 0x0  nop
    ctx->pc = 0x144b84u;
    // NOP
    ctx->pc = 0x144b88u;
}
