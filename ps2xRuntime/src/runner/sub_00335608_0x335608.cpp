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

// Function: sub_00335608
// Address: 0x335608 - 0x335670
void sub_00335608_0x335608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335608_0x335608");
#endif

    ctx->pc = 0x335608u;

    // 0x335608: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x335608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x33560c: 0x14a20016  bne         $a1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x33560Cu;
    {
        const bool branch_taken_0x33560c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x33560c) {
            ctx->pc = 0x335668u;
            goto label_335668;
        }
    }
    ctx->pc = 0x335614u;
    // 0x335614: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x335614u;
    {
        const bool branch_taken_0x335614 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x335618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335614u;
        // 0x335618: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335614) {
            ctx->pc = 0x335668u;
            goto label_335668;
        }
    }
    ctx->pc = 0x33561Cu;
    // 0x33561c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x33561cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x335620: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x335620u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x335624: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x335624u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x335628: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x335628u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
    // 0x33562c: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x33562cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
    // 0x335630: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x335630u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x335634: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x335634u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
    // 0x335638: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x335638u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
    // 0x33563c: 0x3c0b006f  lui         $t3, 0x6F
    ctx->pc = 0x33563cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)111 << 16));
    // 0x335640: 0xac40b870  sw          $zero, -0x4790($v0)
    ctx->pc = 0x335640u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294948976), GPR_U32(ctx, 0));
    // 0x335644: 0xac60b878  sw          $zero, -0x4788($v1)
    ctx->pc = 0x335644u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6EB878u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6EB878u, _value); } while (0);
    // 0x335648: 0xac80b880  sw          $zero, -0x4780($a0)
    ctx->pc = 0x335648u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6EB880u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6EB880u, _value); } while (0);
    // 0x33564c: 0xaca0b888  sw          $zero, -0x4778($a1)
    ctx->pc = 0x33564cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6EB888u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6EB888u, _value); } while (0);
    // 0x335650: 0xacc0b890  sw          $zero, -0x4770($a2)
    ctx->pc = 0x335650u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6EB890u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6EB890u, _value); } while (0);
    // 0x335654: 0xace0b898  sw          $zero, -0x4768($a3)
    ctx->pc = 0x335654u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6EB898u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6EB898u, _value); } while (0);
    // 0x335658: 0xad00b8a0  sw          $zero, -0x4760($t0)
    ctx->pc = 0x335658u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6EB8A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6EB8A0u, _value); } while (0);
    // 0x33565c: 0xad20b8a8  sw          $zero, -0x4758($t1)
    ctx->pc = 0x33565cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6EB8A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6EB8A8u, _value); } while (0);
    // 0x335660: 0xad40b8b0  sw          $zero, -0x4750($t2)
    ctx->pc = 0x335660u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6EB8B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6EB8B0u, _value); } while (0);
    // 0x335664: 0xad60b8b8  sw          $zero, -0x4748($t3)
    ctx->pc = 0x335664u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6EB8B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6EB8B8u, _value); } while (0);
label_335668:
    // 0x335668: 0x3e00008  jr          $ra
    ctx->pc = 0x335668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335670u;
}
