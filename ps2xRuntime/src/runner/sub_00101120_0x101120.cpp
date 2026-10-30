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

// Function: sub_00101120
// Address: 0x101120 - 0x101250
void sub_00101120_0x101120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101120_0x101120");
#endif

    ctx->pc = 0x101120u;

    // 0x101120: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x101120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x101124: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x101124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x101128: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x101128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x10112c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x10112cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x101130: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x101130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x101134: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x101134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x101138: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x101138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x10113c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x10113cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x101140: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x101140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x101144: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x101144u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x101148: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x101148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x10114c: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x10114cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x101150: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x101150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x101154: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x101154u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x101158: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x101158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x10115c: 0x24150013  addiu       $s5, $zero, 0x13
    ctx->pc = 0x10115cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x101160: 0x7fb70000  sq          $s7, 0x0($sp)
    ctx->pc = 0x101160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 23));
    // 0x101164: 0x24160019  addiu       $s6, $zero, 0x19
    ctx->pc = 0x101164u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x101168: 0x24170002  addiu       $s7, $zero, 0x2
    ctx->pc = 0x101168u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10116c: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x10116cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x101170: 0x240a000c  addiu       $t2, $zero, 0xC
    ctx->pc = 0x101170u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x101174: 0x240b0010  addiu       $t3, $zero, 0x10
    ctx->pc = 0x101174u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x101178: 0x240c0011  addiu       $t4, $zero, 0x11
    ctx->pc = 0x101178u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x10117c: 0x240d0012  addiu       $t5, $zero, 0x12
    ctx->pc = 0x10117cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x101180: 0x240e0016  addiu       $t6, $zero, 0x16
    ctx->pc = 0x101180u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x101184: 0x240f0017  addiu       $t7, $zero, 0x17
    ctx->pc = 0x101184u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x101188: 0x24100018  addiu       $s0, $zero, 0x18
    ctx->pc = 0x101188u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x10118c: 0x2411001c  addiu       $s1, $zero, 0x1C
    ctx->pc = 0x10118cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x101190: 0x2412001d  addiu       $s2, $zero, 0x1D
    ctx->pc = 0x101190u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x101194: 0x2413001f  addiu       $s3, $zero, 0x1F
    ctx->pc = 0x101194u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x101198: 0xac94000c  sw          $s4, 0xC($a0)
    ctx->pc = 0x101198u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 20));
    // 0x10119c: 0x24180020  addiu       $t8, $zero, 0x20
    ctx->pc = 0x10119cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1011a0: 0xac950054  sw          $s5, 0x54($a0)
    ctx->pc = 0x1011a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 21));
    // 0x1011a4: 0xac900064  sw          $s0, 0x64($a0)
    ctx->pc = 0x1011a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 16));
    // 0x1011a8: 0xac96006c  sw          $s6, 0x6C($a0)
    ctx->pc = 0x1011a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 22));
    // 0x1011ac: 0xac910074  sw          $s1, 0x74($a0)
    ctx->pc = 0x1011acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 17));
    // 0x1011b0: 0xac920078  sw          $s2, 0x78($a0)
    ctx->pc = 0x1011b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 18));
    // 0x1011b4: 0xac97007c  sw          $s7, 0x7C($a0)
    ctx->pc = 0x1011b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 23));
    // 0x1011b8: 0xac930080  sw          $s3, 0x80($a0)
    ctx->pc = 0x1011b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 19));
    // 0x1011bc: 0xac940008  sw          $s4, 0x8($a0)
    ctx->pc = 0x1011bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 20));
    // 0x1011c0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1011c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1011c4: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x1011c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x1011c8: 0xac870014  sw          $a3, 0x14($a0)
    ctx->pc = 0x1011c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 7));
    // 0x1011cc: 0xac880024  sw          $t0, 0x24($a0)
    ctx->pc = 0x1011ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 8));
    // 0x1011d0: 0xac89002c  sw          $t1, 0x2C($a0)
    ctx->pc = 0x1011d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 9));
    // 0x1011d4: 0xac8a0034  sw          $t2, 0x34($a0)
    ctx->pc = 0x1011d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 10));
    // 0x1011d8: 0xac82003c  sw          $v0, 0x3C($a0)
    ctx->pc = 0x1011d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
    // 0x1011dc: 0xac8b0044  sw          $t3, 0x44($a0)
    ctx->pc = 0x1011dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 11));
    // 0x1011e0: 0xac8c0048  sw          $t4, 0x48($a0)
    ctx->pc = 0x1011e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 12));
    // 0x1011e4: 0xac8d004c  sw          $t5, 0x4C($a0)
    ctx->pc = 0x1011e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 13));
    // 0x1011e8: 0xac830058  sw          $v1, 0x58($a0)
    ctx->pc = 0x1011e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 3));
    // 0x1011ec: 0xac8e005c  sw          $t6, 0x5C($a0)
    ctx->pc = 0x1011ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 14));
    // 0x1011f0: 0xac8f0060  sw          $t7, 0x60($a0)
    ctx->pc = 0x1011f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 15));
    // 0x1011f4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1011f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1011f8: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x1011f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x1011fc: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x1011fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x101200: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x101200u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x101204: 0xac950050  sw          $s5, 0x50($a0)
    ctx->pc = 0x101204u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 21));
    // 0x101208: 0xac960068  sw          $s6, 0x68($a0)
    ctx->pc = 0x101208u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 22));
    // 0x10120c: 0xac970070  sw          $s7, 0x70($a0)
    ctx->pc = 0x10120cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 23));
    // 0x101210: 0xac820028  sw          $v0, 0x28($a0)
    ctx->pc = 0x101210u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
    // 0x101214: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x101214u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x101218: 0xac820038  sw          $v0, 0x38($a0)
    ctx->pc = 0x101218u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
    // 0x10121c: 0xac830040  sw          $v1, 0x40($a0)
    ctx->pc = 0x10121cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
    // 0x101220: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x101220u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x101224: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x101224u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x101228: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x101228u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10122c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x10122cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x101230: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x101230u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x101234: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x101234u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101238: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x101238u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10123c: 0x7bb70000  lq          $s7, 0x0($sp)
    ctx->pc = 0x10123cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101240: 0xac980084  sw          $t8, 0x84($a0)
    ctx->pc = 0x101240u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 24));
    // 0x101244: 0x3e00008  jr          $ra
    ctx->pc = 0x101244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101244u;
        // 0x101248: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10124Cu;
    // 0x10124c: 0x0  nop
    ctx->pc = 0x10124cu;
    // NOP
    ctx->pc = 0x101250u;
}
