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

// Function: sub_004AE198
// Address: 0x4ae198 - 0x4ae2b8
void sub_004AE198_0x4ae198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AE198_0x4ae198");
#endif

    ctx->pc = 0x4ae198u;

    // 0x4ae198: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ae198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4ae19c: 0xa0782d  daddu       $t7, $a1, $zero
    ctx->pc = 0x4ae19cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae1a0: 0x11e00014  beqz        $t7, . + 4 + (0x14 << 2)
    ctx->pc = 0x4AE1A0u;
    {
        const bool branch_taken_0x4ae1a0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AE1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE1A0u;
        // 0x4ae1a4: 0x80582d  daddu       $t3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae1a0) {
            ctx->pc = 0x4AE1F4u;
            goto label_4ae1f4;
        }
    }
    ctx->pc = 0x4AE1A8u;
    // 0x4ae1a8: 0x25620010  addiu       $v0, $t3, 0x10
    ctx->pc = 0x4ae1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x4ae1ac: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4ae1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4ae1b0: 0xad620008  sw          $v0, 0x8($t3)
    ctx->pc = 0x4ae1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 2));
    // 0x4ae1b4: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x4ae1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x4ae1b8: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x4ae1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x4ae1bc: 0x24630668  addiu       $v1, $v1, 0x668
    ctx->pc = 0x4ae1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1640));
    // 0x4ae1c0: 0xa044001a  sb          $a0, 0x1A($v0)
    ctx->pc = 0x4ae1c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 26), (uint8_t)GPR_U32(ctx, 4));
    // 0x4ae1c4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x4ae1c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4ae1c8: 0xa040001b  sb          $zero, 0x1B($v0)
    ctx->pc = 0x4ae1c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x4ae1cc: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x4ae1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x4ae1d0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4ae1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4ae1d4: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x4ae1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x4ae1d8: 0xa4460018  sh          $a2, 0x18($v0)
    ctx->pc = 0x4ae1d8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 24), (uint16_t)GPR_U32(ctx, 6));
    // 0x4ae1dc: 0xfc440010  sd          $a0, 0x10($v0)
    ctx->pc = 0x4ae1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 4));
    // 0x4ae1e0: 0xac45001c  sw          $a1, 0x1C($v0)
    ctx->pc = 0x4ae1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 5));
    // 0x4ae1e4: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x4ae1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x4ae1e8: 0xad600010  sw          $zero, 0x10($t3)
    ctx->pc = 0x4ae1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 0));
    // 0x4ae1ec: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x4ae1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x4ae1f0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x4ae1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_4ae1f4:
    // 0x4ae1f4: 0x8d6c0000  lw          $t4, 0x0($t3)
    ctx->pc = 0x4ae1f4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4ae1f8: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x4ae1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x4ae1fc: 0x24620490  addiu       $v0, $v1, 0x490
    ctx->pc = 0x4ae1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1168));
    // 0x4ae200: 0x8d690008  lw          $t1, 0x8($t3)
    ctx->pc = 0x4ae200u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x4ae204: 0xad820028  sw          $v0, 0x28($t4)
    ctx->pc = 0x4ae204u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 40), GPR_U32(ctx, 2));
    // 0x4ae208: 0x3c0a0059  lui         $t2, 0x59
    ctx->pc = 0x4ae208u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)89 << 16));
    // 0x4ae20c: 0x94480008  lhu         $t0, 0x8($v0)
    ctx->pc = 0x4ae20cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)FAST_READ16(0x590498u));
    // 0x4ae210: 0x254704a0  addiu       $a3, $t2, 0x4A0
    ctx->pc = 0x4ae210u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 1184));
    // 0x4ae214: 0xdc450008  ld          $a1, 0x8($v0)
    ctx->pc = 0x4ae214u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x590498u));
    // 0x4ae218: 0x1693023  subu        $a2, $t3, $t1
    ctx->pc = 0x4ae218u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x4ae21c: 0xdc640490  ld          $a0, 0x490($v1)
    ctx->pc = 0x4ae21cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 1168)));
    // 0x4ae220: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4ae220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4ae224: 0xffa50008  sd          $a1, 0x8($sp)
    ctx->pc = 0x4ae224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 5));
    // 0x4ae228: 0x2583fff8  addiu       $v1, $t4, -0x8
    ctx->pc = 0x4ae228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967288));
    // 0x4ae22c: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x4ae22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
    // 0x4ae230: 0x1631823  subu        $v1, $t3, $v1
    ctx->pc = 0x4ae230u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x4ae234: 0xad9d0028  sw          $sp, 0x28($t4)
    ctx->pc = 0x4ae234u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 40), GPR_U32(ctx, 29));
    // 0x4ae238: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x4ae238u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x4ae23c: 0xad270028  sw          $a3, 0x28($t1)
    ctx->pc = 0x4ae23cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 7));
    // 0x4ae240: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x4ae240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4ae244: 0xad600004  sw          $zero, 0x4($t3)
    ctx->pc = 0x4ae244u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 0));
    // 0x4ae248: 0x3c0e0059  lui         $t6, 0x59
    ctx->pc = 0x4ae248u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)89 << 16));
    // 0x4ae24c: 0x94e20008  lhu         $v0, 0x8($a3)
    ctx->pc = 0x4ae24cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x4ae250: 0x25cd0480  addiu       $t5, $t6, 0x480
    ctx->pc = 0x4ae250u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 14), 1152));
    // 0x4ae254: 0xdce30008  ld          $v1, 0x8($a3)
    ctx->pc = 0x4ae254u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x4ae258: 0xdd4404a0  ld          $a0, 0x4A0($t2)
    ctx->pc = 0x4ae258u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 10), 1184)));
    // 0x4ae25c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4ae25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4ae260: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x4ae260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    // 0x4ae264: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x4ae264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
    // 0x4ae268: 0xad250028  sw          $a1, 0x28($t1)
    ctx->pc = 0x4ae268u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 5));
    // 0x4ae26c: 0xa7a80008  sh          $t0, 0x8($sp)
    ctx->pc = 0x4ae26cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 8));
    // 0x4ae270: 0xa7a20018  sh          $v0, 0x18($sp)
    ctx->pc = 0x4ae270u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ae274: 0x15e0000c  bnez        $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x4AE274u;
    {
        const bool branch_taken_0x4ae274 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AE278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE274u;
        // 0x4ae278: 0xad8d0028  sw          $t5, 0x28($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 40), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae274) {
            ctx->pc = 0x4AE2A8u;
            goto label_4ae2a8;
        }
    }
    ctx->pc = 0x4AE27Cu;
    // 0x4ae27c: 0xddc60480  ld          $a2, 0x480($t6)
    ctx->pc = 0x4ae27cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 14), 1152)));
    // 0x4ae280: 0x2582fff0  addiu       $v0, $t4, -0x10
    ctx->pc = 0x4ae280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967280));
    // 0x4ae284: 0xdda40008  ld          $a0, 0x8($t5)
    ctx->pc = 0x4ae284u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x4ae288: 0x1621023  subu        $v0, $t3, $v0
    ctx->pc = 0x4ae288u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x4ae28c: 0x95a30008  lhu         $v1, 0x8($t5)
    ctx->pc = 0x4ae28cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x4ae290: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x4ae290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4ae294: 0xffa40028  sd          $a0, 0x28($sp)
    ctx->pc = 0x4ae294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 4));
    // 0x4ae298: 0xffa60020  sd          $a2, 0x20($sp)
    ctx->pc = 0x4ae298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 6));
    // 0x4ae29c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4ae29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4ae2a0: 0xad850028  sw          $a1, 0x28($t4)
    ctx->pc = 0x4ae2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 40), GPR_U32(ctx, 5));
    // 0x4ae2a4: 0xa7a30028  sh          $v1, 0x28($sp)
    ctx->pc = 0x4ae2a4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 40), (uint16_t)GPR_U32(ctx, 3));
label_4ae2a8:
    // 0x4ae2a8: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x4ae2a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae2ac: 0x3e00008  jr          $ra
    ctx->pc = 0x4AE2ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE2ACu;
        // 0x4ae2b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE2ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE2B4u;
    // 0x4ae2b4: 0x0  nop
    ctx->pc = 0x4ae2b4u;
    // NOP
    ctx->pc = 0x4ae2b8u;
}
