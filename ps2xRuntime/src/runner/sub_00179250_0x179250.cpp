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

// Function: sub_00179250
// Address: 0x179250 - 0x179310
void sub_00179250_0x179250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00179250_0x179250");
#endif

    switch (ctx->pc) {
        case 0x179250u: goto label_179250;
        case 0x179254u: goto label_179254;
        case 0x179258u: goto label_179258;
        case 0x17925cu: goto label_17925c;
        case 0x179260u: goto label_179260;
        case 0x179264u: goto label_179264;
        case 0x179268u: goto label_179268;
        case 0x17926cu: goto label_17926c;
        case 0x179270u: goto label_179270;
        case 0x179274u: goto label_179274;
        case 0x179278u: goto label_179278;
        case 0x17927cu: goto label_17927c;
        case 0x179280u: goto label_179280;
        case 0x179284u: goto label_179284;
        case 0x179288u: goto label_179288;
        case 0x17928cu: goto label_17928c;
        case 0x179290u: goto label_179290;
        case 0x179294u: goto label_179294;
        case 0x179298u: goto label_179298;
        case 0x17929cu: goto label_17929c;
        case 0x1792a0u: goto label_1792a0;
        case 0x1792a4u: goto label_1792a4;
        case 0x1792a8u: goto label_1792a8;
        case 0x1792acu: goto label_1792ac;
        case 0x1792b0u: goto label_1792b0;
        case 0x1792b4u: goto label_1792b4;
        case 0x1792b8u: goto label_1792b8;
        case 0x1792bcu: goto label_1792bc;
        case 0x1792c0u: goto label_1792c0;
        case 0x1792c4u: goto label_1792c4;
        case 0x1792c8u: goto label_1792c8;
        case 0x1792ccu: goto label_1792cc;
        case 0x1792d0u: goto label_1792d0;
        case 0x1792d4u: goto label_1792d4;
        case 0x1792d8u: goto label_1792d8;
        case 0x1792dcu: goto label_1792dc;
        case 0x1792e0u: goto label_1792e0;
        case 0x1792e4u: goto label_1792e4;
        case 0x1792e8u: goto label_1792e8;
        case 0x1792ecu: goto label_1792ec;
        case 0x1792f0u: goto label_1792f0;
        case 0x1792f4u: goto label_1792f4;
        case 0x1792f8u: goto label_1792f8;
        case 0x1792fcu: goto label_1792fc;
        case 0x179300u: goto label_179300;
        case 0x179304u: goto label_179304;
        case 0x179308u: goto label_179308;
        case 0x17930cu: goto label_17930c;
        default: break;
    }

    ctx->pc = 0x179250u;

label_179250:
    // 0x179250: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x179250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_179254:
    // 0x179254: 0x24070029  addiu       $a3, $zero, 0x29
    ctx->pc = 0x179254u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_179258:
    // 0x179258: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x179258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_17925c:
    // 0x17925c: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x17925cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_179260:
    // 0x179260: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x179260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_179264:
    // 0x179264: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x179264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_179268:
    // 0x179268: 0x3c100055  lui         $s0, 0x55
    ctx->pc = 0x179268u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
label_17926c:
    // 0x17926c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x17926cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_179270:
    // 0x179270: 0x26102068  addiu       $s0, $s0, 0x2068
    ctx->pc = 0x179270u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8296));
label_179274:
    // 0x179274: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x179274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_179278:
    // 0x179278: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x179278u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17927c:
    // 0x17927c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17927cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_179280:
    // 0x179280: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x179280u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_179284:
    // 0x179284: 0x8e6827e4  lw          $t0, 0x27E4($s3)
    ctx->pc = 0x179284u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10212)));
label_179288:
    // 0x179288: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x179288u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17928c:
    // 0x17928c: 0x8e850040  lw          $a1, 0x40($s4)
    ctx->pc = 0x17928cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_179290:
    // 0x179290: 0x26910040  addiu       $s1, $s4, 0x40
    ctx->pc = 0x179290u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
label_179294:
    // 0x179294: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x179294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_179298:
    // 0x179298: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x179298u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_17929c:
    // 0x17929c: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x17929cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_1792a0:
    // 0x1792a0: 0x40f809  jalr        $v0
label_1792a4:
    if (ctx->pc == 0x1792A4u) {
        ctx->pc = 0x1792A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1792A0u;
        // 0x1792a4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1792A8u;
        goto label_1792a8;
    }
    ctx->pc = 0x1792A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1792A8u);
        ctx->pc = 0x1792A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1792A0u;
        // 0x1792a4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1792A0u, 0x1792A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1792A8u;
label_1792a8:
    // 0x1792a8: 0x8e6827e4  lw          $t0, 0x27E4($s3)
    ctx->pc = 0x1792a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10212)));
label_1792ac:
    // 0x1792ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1792acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1792b0:
    // 0x1792b0: 0xae800040  sw          $zero, 0x40($s4)
    ctx->pc = 0x1792b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 64), GPR_U32(ctx, 0));
label_1792b4:
    // 0x1792b4: 0x2407002c  addiu       $a3, $zero, 0x2C
    ctx->pc = 0x1792b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_1792b8:
    // 0x1792b8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1792b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1792bc:
    // 0x1792bc: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1792bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1792c0:
    // 0x1792c0: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x1792c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_1792c4:
    // 0x1792c4: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x1792c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_1792c8:
    // 0x1792c8: 0x60f809  jalr        $v1
label_1792cc:
    if (ctx->pc == 0x1792CCu) {
        ctx->pc = 0x1792CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1792C8u;
        // 0x1792cc: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1792D0u;
        goto label_1792d0;
    }
    ctx->pc = 0x1792C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1792D0u);
        ctx->pc = 0x1792CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1792C8u;
        // 0x1792cc: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1792C8u, 0x1792D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1792D0u;
label_1792d0:
    // 0x1792d0: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1792d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_1792d4:
    // 0x1792d4: 0x32520001  andi        $s2, $s2, 0x1
    ctx->pc = 0x1792d4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_1792d8:
    // 0x1792d8: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1792d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_1792dc:
    // 0x1792dc: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_1792e0:
    if (ctx->pc == 0x1792E0u) {
        ctx->pc = 0x1792E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1792DCu;
        // 0x1792e0: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1792E4u;
        goto label_1792e4;
    }
    ctx->pc = 0x1792DCu;
    {
        const bool branch_taken_0x1792dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1792E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1792DCu;
        // 0x1792e0: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1792dc) {
            ctx->pc = 0x1792ECu;
            goto label_1792ec;
        }
    }
    ctx->pc = 0x1792E4u;
label_1792e4:
    // 0x1792e4: 0xc10b208  jal         func_42C820
label_1792e8:
    if (ctx->pc == 0x1792E8u) {
        ctx->pc = 0x1792E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1792E4u;
        // 0x1792e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1792ECu;
        goto label_1792ec;
    }
    ctx->pc = 0x1792E4u;
    SET_GPR_U32(ctx, 31, 0x1792ECu);
    ctx->pc = 0x1792E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1792E4u;
    // 0x1792e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x1792E4u, 0x1792ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1792ECu;
label_1792ec:
    // 0x1792ec: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1792ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1792f0:
    // 0x1792f0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1792f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1792f4:
    // 0x1792f4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1792f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1792f8:
    // 0x1792f8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1792f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1792fc:
    // 0x1792fc: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1792fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_179300:
    // 0x179300: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x179300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_179304:
    // 0x179304: 0x3e00008  jr          $ra
label_179308:
    if (ctx->pc == 0x179308u) {
        ctx->pc = 0x179308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179304u;
        // 0x179308: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17930Cu;
        goto label_17930c;
    }
    ctx->pc = 0x179304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179304u;
        // 0x179308: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17930Cu;
label_17930c:
    // 0x17930c: 0x0  nop
    ctx->pc = 0x17930cu;
    // NOP
    ctx->pc = 0x179310u;
}
