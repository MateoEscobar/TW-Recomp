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

// Function: sub_004A95C8
// Address: 0x4a95c8 - 0x4a96d0
void sub_004A95C8_0x4a95c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A95C8_0x4a95c8");
#endif

    ctx->pc = 0x4a95c8u;

    // 0x4a95c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4a95c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4a95cc: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4a95ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x4a95d0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4a95d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4a95d4: 0x2463ad18  addiu       $v1, $v1, -0x52E8
    ctx->pc = 0x4a95d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
    // 0x4a95d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4a95d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4a95dc: 0x3c100043  lui         $s0, 0x43
    ctx->pc = 0x4a95dcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)67 << 16));
    // 0x4a95e0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4a95e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4a95e4: 0x3c11004b  lui         $s1, 0x4B
    ctx->pc = 0x4a95e4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)75 << 16));
    // 0x4a95e8: 0x7fb30000  sq          $s3, 0x0($sp)
    ctx->pc = 0x4a95e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 19));
    // 0x4a95ec: 0x3c12004b  lui         $s2, 0x4B
    ctx->pc = 0x4a95ecu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)75 << 16));
    // 0x4a95f0: 0x3c130043  lui         $s3, 0x43
    ctx->pc = 0x4a95f0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)67 << 16));
    // 0x4a95f4: 0x26100eb0  addiu       $s0, $s0, 0xEB0
    ctx->pc = 0x4a95f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3760));
    // 0x4a95f8: 0x26319af0  addiu       $s1, $s1, -0x6510
    ctx->pc = 0x4a95f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941424));
    // 0x4a95fc: 0x26529b38  addiu       $s2, $s2, -0x64C8
    ctx->pc = 0x4a95fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941496));
    // 0x4a9600: 0x26735da8  addiu       $s3, $s3, 0x5DA8
    ctx->pc = 0x4a9600u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 23976));
    // 0x4a9604: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x4a9604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x4a9608: 0x24422928  addiu       $v0, $v0, 0x2928
    ctx->pc = 0x4a9608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10536));
    // 0x4a960c: 0xac7000f4  sw          $s0, 0xF4($v1)
    ctx->pc = 0x4a960cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x70AE0Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x70AE0Cu, _value); } while (0);
    // 0x4a9610: 0xac7100f8  sw          $s1, 0xF8($v1)
    ctx->pc = 0x4a9610u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x70AE10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x70AE10u, _value); } while (0);
    // 0x4a9614: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x4a9614u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x4a9618: 0xac7200fc  sw          $s2, 0xFC($v1)
    ctx->pc = 0x4a9618u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x70AE14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x70AE14u, _value); } while (0);
    // 0x4a961c: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x4a961cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x4a9620: 0xac730100  sw          $s3, 0x100($v1)
    ctx->pc = 0x4a9620u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x70AE18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x70AE18u, _value); } while (0);
    // 0x4a9624: 0x3c060043  lui         $a2, 0x43
    ctx->pc = 0x4a9624u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)67 << 16));
    // 0x4a9628: 0x3c070043  lui         $a3, 0x43
    ctx->pc = 0x4a9628u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)67 << 16));
    // 0x4a962c: 0x3c080043  lui         $t0, 0x43
    ctx->pc = 0x4a962cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)67 << 16));
    // 0x4a9630: 0x3c090043  lui         $t1, 0x43
    ctx->pc = 0x4a9630u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)67 << 16));
    // 0x4a9634: 0x3c0a004b  lui         $t2, 0x4B
    ctx->pc = 0x4a9634u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)75 << 16));
    // 0x4a9638: 0x3c0b004b  lui         $t3, 0x4B
    ctx->pc = 0x4a9638u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)75 << 16));
    // 0x4a963c: 0x3c0c0043  lui         $t4, 0x43
    ctx->pc = 0x4a963cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)67 << 16));
    // 0x4a9640: 0x3c0d0043  lui         $t5, 0x43
    ctx->pc = 0x4a9640u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)67 << 16));
    // 0x4a9644: 0x3c0e0043  lui         $t6, 0x43
    ctx->pc = 0x4a9644u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)67 << 16));
    // 0x4a9648: 0x3c0f004b  lui         $t7, 0x4B
    ctx->pc = 0x4a9648u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)75 << 16));
    // 0x4a964c: 0x248428a0  addiu       $a0, $a0, 0x28A0
    ctx->pc = 0x4a964cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10400));
    // 0x4a9650: 0x24a538c8  addiu       $a1, $a1, 0x38C8
    ctx->pc = 0x4a9650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14536));
    // 0x4a9654: 0x24c60d98  addiu       $a2, $a2, 0xD98
    ctx->pc = 0x4a9654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3480));
    // 0x4a9658: 0x24e71378  addiu       $a3, $a3, 0x1378
    ctx->pc = 0x4a9658u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4984));
    // 0x4a965c: 0x2508097c  addiu       $t0, $t0, 0x97C
    ctx->pc = 0x4a965cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2428));
    // 0x4a9660: 0x25290ff8  addiu       $t1, $t1, 0xFF8
    ctx->pc = 0x4a9660u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4088));
    // 0x4a9664: 0x254a9bb8  addiu       $t2, $t2, -0x6448
    ctx->pc = 0x4a9664u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294941624));
    // 0x4a9668: 0x256b9b80  addiu       $t3, $t3, -0x6480
    ctx->pc = 0x4a9668u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294941568));
    // 0x4a966c: 0x258c5d30  addiu       $t4, $t4, 0x5D30
    ctx->pc = 0x4a966cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 23856));
    // 0x4a9670: 0x25ad0c4c  addiu       $t5, $t5, 0xC4C
    ctx->pc = 0x4a9670u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 3148));
    // 0x4a9674: 0x25ce11b0  addiu       $t6, $t6, 0x11B0
    ctx->pc = 0x4a9674u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4528));
    // 0x4a9678: 0x25ef9a80  addiu       $t7, $t7, -0x6580
    ctx->pc = 0x4a9678u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294941312));
    // 0x4a967c: 0xac620104  sw          $v0, 0x104($v1)
    ctx->pc = 0x4a967cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x70AE1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x70AE1Cu, _value); } while (0);
    // 0x4a9680: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4a9680u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a9684: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a9684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a9688: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4a9688u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a968c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4a968cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a9690: 0x7bb30000  lq          $s3, 0x0($sp)
    ctx->pc = 0x4a9690u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a9694: 0xac6400c4  sw          $a0, 0xC4($v1)
    ctx->pc = 0x4a9694u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x70ADDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x70ADDCu, _value); } while (0);
    // 0x4a9698: 0xac6500c8  sw          $a1, 0xC8($v1)
    ctx->pc = 0x4a9698u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x70ADE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x70ADE0u, _value); } while (0);
    // 0x4a969c: 0xac6600cc  sw          $a2, 0xCC($v1)
    ctx->pc = 0x4a969cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x70ADE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x70ADE4u, _value); } while (0);
    // 0x4a96a0: 0xac6700d0  sw          $a3, 0xD0($v1)
    ctx->pc = 0x4a96a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x70ADE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x70ADE8u, _value); } while (0);
    // 0x4a96a4: 0xac6800d4  sw          $t0, 0xD4($v1)
    ctx->pc = 0x4a96a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x70ADECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x70ADECu, _value); } while (0);
    // 0x4a96a8: 0xac6900d8  sw          $t1, 0xD8($v1)
    ctx->pc = 0x4a96a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x70ADF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x70ADF0u, _value); } while (0);
    // 0x4a96ac: 0xac6a00dc  sw          $t2, 0xDC($v1)
    ctx->pc = 0x4a96acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x70ADF4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x70ADF4u, _value); } while (0);
    // 0x4a96b0: 0xac6b00e0  sw          $t3, 0xE0($v1)
    ctx->pc = 0x4a96b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x70ADF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x70ADF8u, _value); } while (0);
    // 0x4a96b4: 0xac6c00e4  sw          $t4, 0xE4($v1)
    ctx->pc = 0x4a96b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x70ADFCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x70ADFCu, _value); } while (0);
    // 0x4a96b8: 0xac6d00e8  sw          $t5, 0xE8($v1)
    ctx->pc = 0x4a96b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x70AE00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x70AE00u, _value); } while (0);
    // 0x4a96bc: 0xac6e00ec  sw          $t6, 0xEC($v1)
    ctx->pc = 0x4a96bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x70AE04u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x70AE04u, _value); } while (0);
    // 0x4a96c0: 0xac6f00f0  sw          $t7, 0xF0($v1)
    ctx->pc = 0x4a96c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 15)); ps2TraceGuestWrite(rdram, 0x70AE08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x70AE08u, _value); } while (0);
    // 0x4a96c4: 0x3e00008  jr          $ra
    ctx->pc = 0x4A96C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A96C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A96C4u;
        // 0x4a96c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A96C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A96CCu;
    // 0x4a96cc: 0x0  nop
    ctx->pc = 0x4a96ccu;
    // NOP
    ctx->pc = 0x4a96d0u;
}
