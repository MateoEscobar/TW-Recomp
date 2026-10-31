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

// Function: sub_0026B0A0
// Address: 0x26b0a0 - 0x26b170
void sub_0026B0A0_0x26b0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026B0A0_0x26b0a0");
#endif

    switch (ctx->pc) {
        case 0x26b0d4u: goto label_26b0d4;
        case 0x26b100u: goto label_26b100;
        case 0x26b110u: goto label_26b110;
        case 0x26b124u: goto label_26b124;
        case 0x26b14cu: goto label_26b14c;
        default: break;
    }

    ctx->pc = 0x26b0a0u;

    // 0x26b0a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x26b0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x26b0a4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x26b0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x26b0a8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x26b0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x26b0ac: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x26b0acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b0b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26b0b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b0b4: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x26b0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x26b0b8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x26b0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x26b0bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26b0bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b0c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26b0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26b0c4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x26b0c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x26b0c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26b0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26b0cc: 0xc095358  jal         func_254D60
    ctx->pc = 0x26B0CCu;
    SET_GPR_U32(ctx, 31, 0x26B0D4u);
    ctx->pc = 0x26B0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B0CCu;
    // 0x26b0d0: 0x2410000a  addiu       $s0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254D60u, 0x26B0CCu, 0x26B0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B0D4u;
label_26b0d4:
    // 0x26b0d4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x26b0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x26b0d8: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x26b0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26b0dc: 0x24630798  addiu       $v1, $v1, 0x798
    ctx->pc = 0x26b0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1944));
    // 0x26b0e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26b0e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26b0e4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x26b0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x26b0e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26b0e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b0ec: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x26b0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x26b0f0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x26b0f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b0f4: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x26b0f4u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x26b0f8: 0xc099cb4  jal         func_2672D0
    ctx->pc = 0x26B0F8u;
    SET_GPR_U32(ctx, 31, 0x26B100u);
    ctx->pc = 0x26B0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B0F8u;
    // 0x26b0fc: 0x43800b  movn        $s0, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2672D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2672D0u, 0x26B0F8u, 0x26B100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B100u;
label_26b100:
    // 0x26b100: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26b100u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b104: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26b104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b108: 0xc08a684  jal         func_229A10
    ctx->pc = 0x26B108u;
    SET_GPR_U32(ctx, 31, 0x26B110u);
    ctx->pc = 0x26B10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B108u;
    // 0x26b10c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229A10u, 0x26B108u, 0x26B110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B110u;
label_26b110:
    // 0x26b110: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x26b110u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x26b114: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26b114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b118: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x26b118u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b11c: 0xc099bce  jal         func_266F38
    ctx->pc = 0x26B11Cu;
    SET_GPR_U32(ctx, 31, 0x26B124u);
    ctx->pc = 0x26B120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B11Cu;
    // 0x26b120: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266F38u, 0x26B11Cu, 0x26B124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B124u;
label_26b124:
    // 0x26b124: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x26b124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x26b128: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x26b128u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b12c: 0x3c013d08  lui         $at, 0x3D08
    ctx->pc = 0x26b12cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15624 << 16));
    // 0x26b130: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x26b130u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x26b134: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26b134u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26b138: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26b138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b13c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x26b13cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b140: 0xa4600118  sh          $zero, 0x118($v1)
    ctx->pc = 0x26b140u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 280), (uint16_t)GPR_U32(ctx, 0));
    // 0x26b144: 0xc09a9b4  jal         func_26A6D0
    ctx->pc = 0x26B144u;
    SET_GPR_U32(ctx, 31, 0x26B14Cu);
    ctx->pc = 0x26B148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B144u;
    // 0x26b148: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26A6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A6D0u, 0x26B144u, 0x26B14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B14Cu;
label_26b14c:
    // 0x26b14c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x26b14cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26b150: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26b150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26b154: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x26b154u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26b158: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26b158u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26b15c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x26b15cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b160: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26b160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26b164: 0x3e00008  jr          $ra
    ctx->pc = 0x26B164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B164u;
        // 0x26b168: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26B16Cu;
    // 0x26b16c: 0x0  nop
    ctx->pc = 0x26b16cu;
    // NOP
    ctx->pc = 0x26b170u;
}
