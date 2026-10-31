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

// Function: sub_00387498
// Address: 0x387498 - 0x3875b8
void sub_00387498_0x387498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00387498_0x387498");
#endif

    switch (ctx->pc) {
        case 0x3874d8u: goto label_3874d8;
        case 0x387500u: goto label_387500;
        case 0x38750cu: goto label_38750c;
        default: break;
    }

    ctx->pc = 0x387498u;

    // 0x387498: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x387498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x38749c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x38749cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x3874a0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3874a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3874a4: 0x24424c08  addiu       $v0, $v0, 0x4C08
    ctx->pc = 0x3874a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19464));
    // 0x3874a8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3874a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3874ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3874acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3874b0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3874b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3874b4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3874b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3874b8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3874b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3874bc: 0x3c14006f  lui         $s4, 0x6F
    ctx->pc = 0x3874bcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)111 << 16));
    // 0x3874c0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3874c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3874c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3874c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3874c8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3874c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3874cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3874ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3874d0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3874d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3874d4: 0x0  nop
    ctx->pc = 0x3874d4u;
    // NOP
label_3874d8:
    // 0x3874d8: 0x0  nop
    ctx->pc = 0x3874d8u;
    // NOP
    // 0x3874dc: 0x0  nop
    ctx->pc = 0x3874dcu;
    // NOP
    // 0x3874e0: 0x0  nop
    ctx->pc = 0x3874e0u;
    // NOP
    // 0x3874e4: 0x0  nop
    ctx->pc = 0x3874e4u;
    // NOP
    // 0x3874e8: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3874E8u;
    {
        const bool branch_taken_0x3874e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3874ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3874E8u;
        // 0x3874ec: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3874e8) {
            ctx->pc = 0x3874D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3874d8;
        }
    }
    ctx->pc = 0x3874F0u;
    // 0x3874f0: 0x261101a0  addiu       $s1, $s0, 0x1A0
    ctx->pc = 0x3874f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x3874f4: 0x24120019  addiu       $s2, $zero, 0x19
    ctx->pc = 0x3874f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x3874f8: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x3874f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3874fc: 0x0  nop
    ctx->pc = 0x3874fcu;
    // NOP
label_387500:
    // 0x387500: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x387500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387504: 0xc0e1cda  jal         func_387368
    ctx->pc = 0x387504u;
    SET_GPR_U32(ctx, 31, 0x38750Cu);
    ctx->pc = 0x387508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387504u;
    // 0x387508: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387368u, 0x387504u, 0x38750Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38750Cu;
label_38750c:
    // 0x38750c: 0x0  nop
    ctx->pc = 0x38750cu;
    // NOP
    // 0x387510: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x387510u;
    {
        const bool branch_taken_0x387510 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x387514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387510u;
        // 0x387514: 0x263100a0  addiu       $s1, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387510) {
            ctx->pc = 0x387500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_387500;
        }
    }
    ctx->pc = 0x387518u;
    // 0x387518: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x387518u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x38751c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x38751cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x387520: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x387520u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x387524: 0xae0211e0  sw          $v0, 0x11E0($s0)
    ctx->pc = 0x387524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4576), GPR_U32(ctx, 2));
    // 0x387528: 0xae0011e4  sw          $zero, 0x11E4($s0)
    ctx->pc = 0x387528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4580), GPR_U32(ctx, 0));
    // 0x38752c: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x38752cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x387530: 0xae0011e8  sw          $zero, 0x11E8($s0)
    ctx->pc = 0x387530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4584), GPR_U32(ctx, 0));
    // 0x387534: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x387534u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387538: 0xae0011ec  sw          $zero, 0x11EC($s0)
    ctx->pc = 0x387538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4588), GPR_U32(ctx, 0));
    // 0x38753c: 0xae0011f0  sw          $zero, 0x11F0($s0)
    ctx->pc = 0x38753cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4592), GPR_U32(ctx, 0));
    // 0x387540: 0xae0011f4  sw          $zero, 0x11F4($s0)
    ctx->pc = 0x387540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4596), GPR_U32(ctx, 0));
    // 0x387544: 0xae0011f8  sw          $zero, 0x11F8($s0)
    ctx->pc = 0x387544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4600), GPR_U32(ctx, 0));
    // 0x387548: 0xae0511fc  sw          $a1, 0x11FC($s0)
    ctx->pc = 0x387548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4604), GPR_U32(ctx, 5));
    // 0x38754c: 0xae001200  sw          $zero, 0x1200($s0)
    ctx->pc = 0x38754cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4608), GPR_U32(ctx, 0));
    // 0x387550: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x387550u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x387554: 0x8e83bd30  lw          $v1, -0x42D0($s4)
    ctx->pc = 0x387554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950192)));
    // 0x387558: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x387558u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38755c: 0xae031204  sw          $v1, 0x1204($s0)
    ctx->pc = 0x38755cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4612), GPR_U32(ctx, 3));
    // 0x387560: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x387560u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x387564: 0x8e84bd30  lw          $a0, -0x42D0($s4)
    ctx->pc = 0x387564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950192)));
    // 0x387568: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x387568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38756c: 0xae041208  sw          $a0, 0x1208($s0)
    ctx->pc = 0x38756cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4616), GPR_U32(ctx, 4));
    // 0x387570: 0x8e83bd30  lw          $v1, -0x42D0($s4)
    ctx->pc = 0x387570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950192)));
    // 0x387574: 0xae03120c  sw          $v1, 0x120C($s0)
    ctx->pc = 0x387574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4620), GPR_U32(ctx, 3));
    // 0x387578: 0x8e84bd30  lw          $a0, -0x42D0($s4)
    ctx->pc = 0x387578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950192)));
    // 0x38757c: 0xa60612d8  sh          $a2, 0x12D8($s0)
    ctx->pc = 0x38757cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4824), (uint16_t)GPR_U32(ctx, 6));
    // 0x387580: 0xae041210  sw          $a0, 0x1210($s0)
    ctx->pc = 0x387580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4624), GPR_U32(ctx, 4));
    // 0x387584: 0xae0512fc  sw          $a1, 0x12FC($s0)
    ctx->pc = 0x387584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4860), GPR_U32(ctx, 5));
    // 0x387588: 0xae0012d0  sw          $zero, 0x12D0($s0)
    ctx->pc = 0x387588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4816), GPR_U32(ctx, 0));
    // 0x38758c: 0xa20012d4  sb          $zero, 0x12D4($s0)
    ctx->pc = 0x38758cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4820), (uint8_t)GPR_U32(ctx, 0));
    // 0x387590: 0xa20012d5  sb          $zero, 0x12D5($s0)
    ctx->pc = 0x387590u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4821), (uint8_t)GPR_U32(ctx, 0));
    // 0x387594: 0xa20012d6  sb          $zero, 0x12D6($s0)
    ctx->pc = 0x387594u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4822), (uint8_t)GPR_U32(ctx, 0));
    // 0x387598: 0xa20012d7  sb          $zero, 0x12D7($s0)
    ctx->pc = 0x387598u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4823), (uint8_t)GPR_U32(ctx, 0));
    // 0x38759c: 0xa20012e4  sb          $zero, 0x12E4($s0)
    ctx->pc = 0x38759cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4836), (uint8_t)GPR_U32(ctx, 0));
    // 0x3875a0: 0xa20012e5  sb          $zero, 0x12E5($s0)
    ctx->pc = 0x3875a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4837), (uint8_t)GPR_U32(ctx, 0));
    // 0x3875a4: 0xae0512f4  sw          $a1, 0x12F4($s0)
    ctx->pc = 0x3875a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4852), GPR_U32(ctx, 5));
    // 0x3875a8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3875a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3875ac: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3875acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3875b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3875B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3875B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3875B0u;
        // 0x3875b4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3875B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3875B8u;
}
