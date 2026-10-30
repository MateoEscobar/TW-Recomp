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

// Function: sub_002AF928
// Address: 0x2af928 - 0x2afa08
void sub_002AF928_0x2af928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AF928_0x2af928");
#endif

    switch (ctx->pc) {
        case 0x2af9bcu: goto label_2af9bc;
        case 0x2af9f0u: goto label_2af9f0;
        default: break;
    }

    ctx->pc = 0x2af928u;

    // 0x2af928: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2af928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2af92c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2af92cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af930: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2af930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2af934: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2af934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2af938: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2af938u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af93c: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2af93cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2af940: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2af940u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af944: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2af944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2af948: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2af948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2af94c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2af94cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2af950: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2af950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2af954: 0x90820036  lbu         $v0, 0x36($a0)
    ctx->pc = 0x2af954u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 54)));
    // 0x2af958: 0x1446000e  bne         $v0, $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x2AF958u;
    {
        const bool branch_taken_0x2af958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x2AF95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF958u;
        // 0x2af95c: 0x8c670000  lw          $a3, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af958) {
            ctx->pc = 0x2AF994u;
            goto label_2af994;
        }
    }
    ctx->pc = 0x2AF960u;
    // 0x2af960: 0xa0800036  sb          $zero, 0x36($a0)
    ctx->pc = 0x2af960u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 54), (uint8_t)GPR_U32(ctx, 0));
    // 0x2af964: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x2af964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x2af968: 0x8c90002c  lw          $s0, 0x2C($a0)
    ctx->pc = 0x2af968u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2af96c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2af96cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af970: 0x80a201b0  lb          $v0, 0x1B0($a1)
    ctx->pc = 0x2af970u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 432)));
    // 0x2af974: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2af974u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2af978: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2af978u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2af97c: 0x1446000b  bne         $v0, $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x2AF97Cu;
    {
        const bool branch_taken_0x2af97c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x2AF980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF97Cu;
        // 0x2af980: 0x70800a  movz        $s0, $v1, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af97c) {
            ctx->pc = 0x2AF9ACu;
            goto label_2af9ac;
        }
    }
    ctx->pc = 0x2AF984u;
    // 0x2af984: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2af984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x2af988: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2af988u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2af98c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2AF98Cu;
    {
        const bool branch_taken_0x2af98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af98c) {
            ctx->pc = 0x2AF9ACu;
            goto label_2af9ac;
        }
    }
    ctx->pc = 0x2AF994u;
label_2af994:
    // 0x2af994: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2af994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2af998: 0x14460004  bne         $v0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AF998u;
    {
        const bool branch_taken_0x2af998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x2af998) {
            ctx->pc = 0x2AF9ACu;
            goto label_2af9ac;
        }
    }
    ctx->pc = 0x2AF9A0u;
    // 0x2af9a0: 0xa0820036  sb          $v0, 0x36($a0)
    ctx->pc = 0x2af9a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 54), (uint8_t)GPR_U32(ctx, 2));
    // 0x2af9a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2af9a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af9a8: 0x2410008a  addiu       $s0, $zero, 0x8A
    ctx->pc = 0x2af9a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
label_2af9ac:
    // 0x2af9ac: 0x52000011  beql        $s0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2AF9ACu;
    {
        const bool branch_taken_0x2af9ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af9ac) {
            ctx->pc = 0x2AF9B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF9ACu;
            // 0x2af9b0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF9F4u;
            goto label_2af9f4;
        }
    }
    ctx->pc = 0x2AF9B4u;
    // 0x2af9b4: 0xc0a47b4  jal         func_291ED0
    ctx->pc = 0x2AF9B4u;
    SET_GPR_U32(ctx, 31, 0x2AF9BCu);
    ctx->pc = 0x2AF9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF9B4u;
    // 0x2af9b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x2AF9B4u, 0x2AF9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF9BCu;
label_2af9bc:
    // 0x2af9bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2af9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af9c0: 0x5443000c  bnel        $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2AF9C0u;
    {
        const bool branch_taken_0x2af9c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2af9c0) {
            ctx->pc = 0x2AF9C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF9C0u;
            // 0x2af9c4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF9F4u;
            goto label_2af9f4;
        }
    }
    ctx->pc = 0x2AF9C8u;
    // 0x2af9c8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2af9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2af9cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2af9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af9d0: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2af9d0u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x2af9d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2af9d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af9d8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2af9d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2af9dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2af9dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af9e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2af9e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af9e4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2af9e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af9e8: 0xc088178  jal         func_2205E0
    ctx->pc = 0x2AF9E8u;
    SET_GPR_U32(ctx, 31, 0x2AF9F0u);
    ctx->pc = 0x2AF9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF9E8u;
    // 0x2af9ec: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2AF9E8u, 0x2AF9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF9F0u;
label_2af9f0:
    // 0x2af9f0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2af9f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2af9f4:
    // 0x2af9f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2af9f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2af9f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2af9f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2af9fc: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2af9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2afa00: 0x3e00008  jr          $ra
    ctx->pc = 0x2AFA00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AFA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFA00u;
        // 0x2afa04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AFA00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AFA08u;
}
