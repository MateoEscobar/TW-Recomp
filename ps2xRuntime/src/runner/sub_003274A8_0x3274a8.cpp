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

// Function: sub_003274A8
// Address: 0x3274a8 - 0x327590
void sub_003274A8_0x3274a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003274A8_0x3274a8");
#endif

    switch (ctx->pc) {
        case 0x327500u: goto label_327500;
        default: break;
    }

    ctx->pc = 0x3274a8u;

    // 0x3274a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3274a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3274ac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3274acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3274b0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3274b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3274b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3274b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3274b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3274b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3274bc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3274bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3274c0: 0x8e320008  lw          $s2, 0x8($s1)
    ctx->pc = 0x3274c0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3274c4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x3274c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x3274c8: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x3274c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x3274cc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3274ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3274d0: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x3274D0u;
    {
        const bool branch_taken_0x3274d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3274D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3274D0u;
        // 0x3274d4: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3274d0) {
            ctx->pc = 0x327574u;
            goto label_327574;
        }
    }
    ctx->pc = 0x3274D8u;
    // 0x3274d8: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x3274d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3274dc: 0x3c090057  lui         $t1, 0x57
    ctx->pc = 0x3274dcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)87 << 16));
    // 0x3274e0: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x3274e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x3274e4: 0x3c0a7fff  lui         $t2, 0x7FFF
    ctx->pc = 0x3274e4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32767 << 16));
    // 0x3274e8: 0x86060030  lh          $a2, 0x30($s0)
    ctx->pc = 0x3274e8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x3274ec: 0x25294f08  addiu       $t1, $t1, 0x4F08
    ctx->pc = 0x3274ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 20232));
    // 0x3274f0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x3274f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3274f4: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x3274f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3274f8: 0xc0cb1ac  jal         func_32C6B0
    ctx->pc = 0x3274F8u;
    SET_GPR_U32(ctx, 31, 0x327500u);
    ctx->pc = 0x3274FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3274F8u;
    // 0x3274fc: 0x354afffd  ori         $t2, $t2, 0xFFFD (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65533);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C6B0u, 0x3274F8u, 0x327500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327500u;
label_327500:
    // 0x327500: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x327500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327504: 0xae04002c  sw          $a0, 0x2C($s0)
    ctx->pc = 0x327504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 4));
    // 0x327508: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x327508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x32750c: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x32750cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x327510: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x327510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x327514: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x327514u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x327518: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x327518u;
    {
        const bool branch_taken_0x327518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32751Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327518u;
        // 0x32751c: 0x96020030  lhu         $v0, 0x30($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327518) {
            ctx->pc = 0x32754Cu;
            goto label_32754c;
        }
    }
    ctx->pc = 0x327520u;
    // 0x327520: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x327520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x327524: 0xa6030030  sh          $v1, 0x30($s0)
    ctx->pc = 0x327524u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 3));
    // 0x327528: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x327528u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32752c: 0x21383  sra         $v0, $v0, 14
    ctx->pc = 0x32752cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 14));
    // 0x327530: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x327530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x327534: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x327534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x327538: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x327538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x32753c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x32753cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x327540: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x327540u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x327544: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x327544u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x327548: 0x96020030  lhu         $v0, 0x30($s0)
    ctx->pc = 0x327548u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
label_32754c:
    // 0x32754c: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x32754cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x327550: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x327550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x327554: 0xa6030030  sh          $v1, 0x30($s0)
    ctx->pc = 0x327554u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 3));
    // 0x327558: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x327558u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32755c: 0x21383  sra         $v0, $v0, 14
    ctx->pc = 0x32755cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 14));
    // 0x327560: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x327560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x327564: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x327564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x327568: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x327568u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32756c: 0x8e440038  lw          $a0, 0x38($s2)
    ctx->pc = 0x32756cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x327570: 0xae240024  sw          $a0, 0x24($s1)
    ctx->pc = 0x327570u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 4));
label_327574:
    // 0x327574: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x327574u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x327578: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x327578u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32757c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x32757cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x327580: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x327580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327584: 0x3e00008  jr          $ra
    ctx->pc = 0x327584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327584u;
        // 0x327588: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32758Cu;
    // 0x32758c: 0x0  nop
    ctx->pc = 0x32758cu;
    // NOP
    ctx->pc = 0x327590u;
}
