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

// Function: sub_0031CBC0
// Address: 0x31cbc0 - 0x31cce0
void sub_0031CBC0_0x31cbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031CBC0_0x31cbc0");
#endif

    switch (ctx->pc) {
        case 0x31cc50u: goto label_31cc50;
        default: break;
    }

    ctx->pc = 0x31cbc0u;

    // 0x31cbc0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x31cbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x31cbc4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x31cbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x31cbc8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x31cbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x31cbcc: 0x24423260  addiu       $v0, $v0, 0x3260
    ctx->pc = 0x31cbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12896));
    // 0x31cbd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31cbd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cbd4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x31cbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x31cbd8: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x31cbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x31cbdc: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x31cbdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x31cbe0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x31cbe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x31cbe4: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x31cbe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x31cbe8: 0xb9400  sll         $s2, $t3, 16
    ctx->pc = 0x31cbe8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x31cbec: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x31cbecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x31cbf0: 0x129403  sra         $s2, $s2, 16
    ctx->pc = 0x31cbf0u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 16));
    // 0x31cbf4: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x31cbf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x31cbf8: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x31cbf8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cbfc: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x31cbfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x31cc00: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x31cc00u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cc04: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x31cc04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x31cc08: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x31cc08u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cc0c: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x31cc0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x31cc10: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x31cc10u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cc14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31cc14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31cc18: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x31cc18u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cc1c: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x31cc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x31cc20: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x31cc20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x31cc24: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x31cc24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cc28: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x31cc28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x31cc2c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x31cc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x31cc30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31cc30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cc34: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x31cc34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x31cc38: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x31cc38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x31cc3c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x31cc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x31cc40: 0xa2000018  sb          $zero, 0x18($s0)
    ctx->pc = 0x31cc40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x31cc44: 0x8fb300a0  lw          $s3, 0xA0($sp)
    ctx->pc = 0x31cc44u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x31cc48: 0xc0c1a3e  jal         func_3068F8
    ctx->pc = 0x31CC48u;
    SET_GPR_U32(ctx, 31, 0x31CC50u);
    ctx->pc = 0x31CC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CC48u;
    // 0x31cc4c: 0x8fb100a8  lw          $s1, 0xA8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3068F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3068F8u, 0x31CC48u, 0x31CC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CC50u;
label_31cc50:
    // 0x31cc50: 0xa2110044  sb          $s1, 0x44($s0)
    ctx->pc = 0x31cc50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 68), (uint8_t)GPR_U32(ctx, 17));
    // 0x31cc54: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x31cc54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x31cc58: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x31cc58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x31cc5c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x31cc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31cc60: 0x8c65b734  lw          $a1, -0x48CC($v1)
    ctx->pc = 0x31cc60u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x50B734u));
    // 0x31cc64: 0x24423f80  addiu       $v0, $v0, 0x3F80
    ctx->pc = 0x31cc64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16256));
    // 0x31cc68: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x31cc68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x31cc6c: 0xae1e0020  sw          $fp, 0x20($s0)
    ctx->pc = 0x31cc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 30));
    // 0x31cc70: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x31cc70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cc74: 0xae160024  sw          $s6, 0x24($s0)
    ctx->pc = 0x31cc74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 22));
    // 0x31cc78: 0xae130028  sw          $s3, 0x28($s0)
    ctx->pc = 0x31cc78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 19));
    // 0x31cc7c: 0xae17002c  sw          $s7, 0x2C($s0)
    ctx->pc = 0x31cc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 23));
    // 0x31cc80: 0xae150030  sw          $s5, 0x30($s0)
    ctx->pc = 0x31cc80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 21));
    // 0x31cc84: 0xae140038  sw          $s4, 0x38($s0)
    ctx->pc = 0x31cc84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 20));
    // 0x31cc88: 0xae12003c  sw          $s2, 0x3C($s0)
    ctx->pc = 0x31cc88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 18));
    // 0x31cc8c: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x31cc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x31cc90: 0xae040040  sw          $a0, 0x40($s0)
    ctx->pc = 0x31cc90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 4));
    // 0x31cc94: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x31cc94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x31cc98: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x31cc98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x31cc9c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x31cc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x31cca0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x31cca0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31cca4: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x31cca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x31cca8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x31cca8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31ccac: 0x24630bb8  addiu       $v1, $v1, 0xBB8
    ctx->pc = 0x31ccacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3000));
    // 0x31ccb0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x31ccb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31ccb4: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x31ccb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x31ccb8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x31ccb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x31ccbc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x31ccbcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31ccc0: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x31ccc0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31ccc4: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x31ccc4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31ccc8: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x31ccc8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31cccc: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x31ccccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31ccd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31ccd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31ccd4: 0x3e00008  jr          $ra
    ctx->pc = 0x31CCD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31CCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CCD4u;
        // 0x31ccd8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31CCD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31CCDCu;
    // 0x31ccdc: 0x0  nop
    ctx->pc = 0x31ccdcu;
    // NOP
    ctx->pc = 0x31cce0u;
}
