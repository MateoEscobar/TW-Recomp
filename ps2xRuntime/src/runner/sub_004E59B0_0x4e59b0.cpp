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

// Function: sub_004E59B0
// Address: 0x4e59b0 - 0x4e5ab8
void sub_004E59B0_0x4e59b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E59B0_0x4e59b0");
#endif

    switch (ctx->pc) {
        case 0x4e59f8u: goto label_4e59f8;
        case 0x4e5a10u: goto label_4e5a10;
        case 0x4e5a20u: goto label_4e5a20;
        case 0x4e5a5cu: goto label_4e5a5c;
        case 0x4e5a78u: goto label_4e5a78;
        default: break;
    }

    ctx->pc = 0x4e59b0u;

    // 0x4e59b0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4e59b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x4e59b4: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x4e59b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x4e59b8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x4e59b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x4e59bc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4e59bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e59c0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x4e59c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x4e59c4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x4e59c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e59c8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x4e59c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x4e59cc: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x4e59ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x4e59d0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4e59d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x4e59d4: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x4e59d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x4e59d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e59d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4e59dc: 0x1295002a  beq         $s4, $s5, . + 4 + (0x2A << 2)
    ctx->pc = 0x4E59DCu;
    {
        const bool branch_taken_0x4e59dc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 21));
        ctx->pc = 0x4E59E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E59DCu;
        // 0x4e59e0: 0xe7b40080  swc1        $f20, 0x80($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e59dc) {
            ctx->pc = 0x4E5A88u;
            goto label_4e5a88;
        }
    }
    ctx->pc = 0x4E59E4u;
    // 0x4e59e4: 0x26920004  addiu       $s2, $s4, 0x4
    ctx->pc = 0x4e59e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x4e59e8: 0x12550027  beq         $s2, $s5, . + 4 + (0x27 << 2)
    ctx->pc = 0x4E59E8u;
    {
        const bool branch_taken_0x4e59e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 21));
        ctx->pc = 0x4E59ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E59E8u;
        // 0x4e59ec: 0x3c160051  lui         $s6, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e59e8) {
            ctx->pc = 0x4E5A88u;
            goto label_4e5a88;
        }
    }
    ctx->pc = 0x4E59F0u;
    // 0x4e59f0: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x4e59f0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e59f4: 0x0  nop
    ctx->pc = 0x4e59f4u;
    // NOP
label_4e59f8:
    // 0x4e59f8: 0x8ed0489c  lw          $s0, 0x489C($s6)
    ctx->pc = 0x4e59f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18588)));
    // 0x4e59fc: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x4e59fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e5a00: 0x261014d4  addiu       $s0, $s0, 0x14D4
    ctx->pc = 0x4e5a00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5332));
    // 0x4e5a04: 0x8e910000  lw          $s1, 0x0($s4)
    ctx->pc = 0x4e5a04u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e5a08: 0xc107d50  jal         func_41F540
    ctx->pc = 0x4E5A08u;
    SET_GPR_U32(ctx, 31, 0x4E5A10u);
    ctx->pc = 0x4E5A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5A08u;
    // 0x4e5a0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F540u, 0x4E5A08u, 0x4E5A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5A10u;
label_4e5a10:
    // 0x4e5a10: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4e5a10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e5a14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e5a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5a18: 0xc107d50  jal         func_41F540
    ctx->pc = 0x4E5A18u;
    SET_GPR_U32(ctx, 31, 0x4E5A20u);
    ctx->pc = 0x4E5A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5A18u;
    // 0x4e5a1c: 0xc4540004  lwc1        $f20, 0x4($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F540u, 0x4E5A18u, 0x4E5A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5A20u;
label_4e5a20:
    // 0x4e5a20: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x4e5a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4e5a24: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x4e5a24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4e5a28: 0x0  nop
    ctx->pc = 0x4e5a28u;
    // NOP
    // 0x4e5a2c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x4E5A2Cu;
    {
        const bool branch_taken_0x4e5a2c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4E5A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5A2Cu;
        // 0x4e5a30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5a2c) {
            ctx->pc = 0x4E5A38u;
            goto label_4e5a38;
        }
    }
    ctx->pc = 0x4E5A34u;
    // 0x4e5a34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4e5a34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e5a38:
    // 0x4e5a38: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4E5A38u;
    {
        const bool branch_taken_0x4e5a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E5A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5A38u;
        // 0x4e5a3c: 0x2542023  subu        $a0, $s2, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5a38) {
            ctx->pc = 0x4E5A68u;
            goto label_4e5a68;
        }
    }
    ctx->pc = 0x4E5A40u;
    // 0x4e5a40: 0x26500004  addiu       $s0, $s2, 0x4
    ctx->pc = 0x4e5a40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4e5a44: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x4e5a44u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x4e5a48: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4e5a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5a4c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4e5a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4e5a50: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4e5a50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5a54: 0xc10c1bb  jal         func_4306EC
    ctx->pc = 0x4E5A54u;
    SET_GPR_U32(ctx, 31, 0x4E5A5Cu);
    ctx->pc = 0x4E5A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5A54u;
    // 0x4e5a58: 0x2042023  subu        $a0, $s0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4E5A54u, 0x4E5A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5A5Cu;
label_4e5a5c:
    // 0x4e5a5c: 0xae930000  sw          $s3, 0x0($s4)
    ctx->pc = 0x4e5a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 19));
    // 0x4e5a60: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4E5A60u;
    {
        const bool branch_taken_0x4e5a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E5A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5A60u;
        // 0x4e5a64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5a60) {
            ctx->pc = 0x4E5A7Cu;
            goto label_4e5a7c;
        }
    }
    ctx->pc = 0x4E5A68u;
label_4e5a68:
    // 0x4e5a68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4e5a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5a6c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4e5a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5a70: 0xc13963e  jal         func_4E58F8
    ctx->pc = 0x4E5A70u;
    SET_GPR_U32(ctx, 31, 0x4E5A78u);
    ctx->pc = 0x4E5A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5A70u;
    // 0x4e5a74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E58F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E58F8u, 0x4E5A70u, 0x4E5A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5A78u;
label_4e5a78:
    // 0x4e5a78: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x4e5a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_4e5a7c:
    // 0x4e5a7c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4e5a7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5a80: 0x5655ffdd  bnel        $s2, $s5, . + 4 + (-0x23 << 2)
    ctx->pc = 0x4E5A80u;
    {
        const bool branch_taken_0x4e5a80 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 21));
        if (branch_taken_0x4e5a80) {
            ctx->pc = 0x4E5A84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5A80u;
            // 0x4e5a84: 0x8e530000  lw          $s3, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E59F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e59f8;
        }
    }
    ctx->pc = 0x4E5A88u;
label_4e5a88:
    // 0x4e5a88: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x4e5a88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4e5a8c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x4e5a8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4e5a90: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x4e5a90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4e5a94: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4e5a94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e5a98: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x4e5a98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e5a9c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x4e5a9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e5aa0: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x4e5aa0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e5aa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e5aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e5aa8: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x4e5aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4e5aac: 0x3e00008  jr          $ra
    ctx->pc = 0x4E5AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E5AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5AACu;
        // 0x4e5ab0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E5AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E5AB4u;
    // 0x4e5ab4: 0x0  nop
    ctx->pc = 0x4e5ab4u;
    // NOP
    ctx->pc = 0x4e5ab8u;
}
