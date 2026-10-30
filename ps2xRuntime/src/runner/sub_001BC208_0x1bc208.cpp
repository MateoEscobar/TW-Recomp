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

// Function: sub_001BC208
// Address: 0x1bc208 - 0x1bc2c0
void sub_001BC208_0x1bc208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC208_0x1bc208");
#endif

    switch (ctx->pc) {
        case 0x1bc208u: goto label_1bc208;
        case 0x1bc20cu: goto label_1bc20c;
        case 0x1bc210u: goto label_1bc210;
        case 0x1bc214u: goto label_1bc214;
        case 0x1bc218u: goto label_1bc218;
        case 0x1bc21cu: goto label_1bc21c;
        case 0x1bc220u: goto label_1bc220;
        case 0x1bc224u: goto label_1bc224;
        case 0x1bc228u: goto label_1bc228;
        case 0x1bc22cu: goto label_1bc22c;
        case 0x1bc230u: goto label_1bc230;
        case 0x1bc234u: goto label_1bc234;
        case 0x1bc238u: goto label_1bc238;
        case 0x1bc23cu: goto label_1bc23c;
        case 0x1bc240u: goto label_1bc240;
        case 0x1bc244u: goto label_1bc244;
        case 0x1bc248u: goto label_1bc248;
        case 0x1bc24cu: goto label_1bc24c;
        case 0x1bc250u: goto label_1bc250;
        case 0x1bc254u: goto label_1bc254;
        case 0x1bc258u: goto label_1bc258;
        case 0x1bc25cu: goto label_1bc25c;
        case 0x1bc260u: goto label_1bc260;
        case 0x1bc264u: goto label_1bc264;
        case 0x1bc268u: goto label_1bc268;
        case 0x1bc26cu: goto label_1bc26c;
        case 0x1bc270u: goto label_1bc270;
        case 0x1bc274u: goto label_1bc274;
        case 0x1bc278u: goto label_1bc278;
        case 0x1bc27cu: goto label_1bc27c;
        case 0x1bc280u: goto label_1bc280;
        case 0x1bc284u: goto label_1bc284;
        case 0x1bc288u: goto label_1bc288;
        case 0x1bc28cu: goto label_1bc28c;
        case 0x1bc290u: goto label_1bc290;
        case 0x1bc294u: goto label_1bc294;
        case 0x1bc298u: goto label_1bc298;
        case 0x1bc29cu: goto label_1bc29c;
        case 0x1bc2a0u: goto label_1bc2a0;
        case 0x1bc2a4u: goto label_1bc2a4;
        case 0x1bc2a8u: goto label_1bc2a8;
        case 0x1bc2acu: goto label_1bc2ac;
        case 0x1bc2b0u: goto label_1bc2b0;
        case 0x1bc2b4u: goto label_1bc2b4;
        case 0x1bc2b8u: goto label_1bc2b8;
        case 0x1bc2bcu: goto label_1bc2bc;
        default: break;
    }

    ctx->pc = 0x1bc208u;

label_1bc208:
    // 0x1bc208: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bc208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1bc20c:
    // 0x1bc20c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1bc20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1bc210:
    // 0x1bc210: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1bc210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1bc214:
    // 0x1bc214: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1bc214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1bc218:
    // 0x1bc218: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bc218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1bc21c:
    // 0x1bc21c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bc21cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bc220:
    // 0x1bc220: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bc220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1bc224:
    // 0x1bc224: 0x2442a3e0  addiu       $v0, $v0, -0x5C20
    ctx->pc = 0x1bc224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943712));
label_1bc228:
    // 0x1bc228: 0x2463a408  addiu       $v1, $v1, -0x5BF8
    ctx->pc = 0x1bc228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943752));
label_1bc22c:
    // 0x1bc22c: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x1bc22cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
label_1bc230:
    // 0x1bc230: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1bc230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1bc234:
    // 0x1bc234: 0xc06f50a  jal         func_1BD428
label_1bc238:
    if (ctx->pc == 0x1BC238u) {
        ctx->pc = 0x1BC238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC234u;
        // 0x1bc238: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC23Cu;
        goto label_1bc23c;
    }
    ctx->pc = 0x1BC234u;
    SET_GPR_U32(ctx, 31, 0x1BC23Cu);
    ctx->pc = 0x1BC238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC234u;
    // 0x1bc238: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD428u, 0x1BC234u, 0x1BC23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC23Cu;
label_1bc23c:
    // 0x1bc23c: 0x26040590  addiu       $a0, $s0, 0x590
    ctx->pc = 0x1bc23cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1424));
label_1bc240:
    // 0x1bc240: 0xc06870c  jal         func_1A1C30
label_1bc244:
    if (ctx->pc == 0x1BC244u) {
        ctx->pc = 0x1BC244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC240u;
        // 0x1bc244: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC248u;
        goto label_1bc248;
    }
    ctx->pc = 0x1BC240u;
    SET_GPR_U32(ctx, 31, 0x1BC248u);
    ctx->pc = 0x1BC244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC240u;
    // 0x1bc244: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x1BC240u, 0x1BC248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC248u;
label_1bc248:
    // 0x1bc248: 0x260402b0  addiu       $a0, $s0, 0x2B0
    ctx->pc = 0x1bc248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
label_1bc24c:
    // 0x1bc24c: 0xc073aac  jal         func_1CEAB0
label_1bc250:
    if (ctx->pc == 0x1BC250u) {
        ctx->pc = 0x1BC250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC24Cu;
        // 0x1bc250: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC254u;
        goto label_1bc254;
    }
    ctx->pc = 0x1BC24Cu;
    SET_GPR_U32(ctx, 31, 0x1BC254u);
    ctx->pc = 0x1BC250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC24Cu;
    // 0x1bc250: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEAB0u, 0x1BC24Cu, 0x1BC254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC254u;
label_1bc254:
    // 0x1bc254: 0x260401b0  addiu       $a0, $s0, 0x1B0
    ctx->pc = 0x1bc254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
label_1bc258:
    // 0x1bc258: 0xc06870c  jal         func_1A1C30
label_1bc25c:
    if (ctx->pc == 0x1BC25Cu) {
        ctx->pc = 0x1BC25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC258u;
        // 0x1bc25c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC260u;
        goto label_1bc260;
    }
    ctx->pc = 0x1BC258u;
    SET_GPR_U32(ctx, 31, 0x1BC260u);
    ctx->pc = 0x1BC25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC258u;
    // 0x1bc25c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x1BC258u, 0x1BC260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC260u;
label_1bc260:
    // 0x1bc260: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1bc260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bc264:
    // 0x1bc264: 0xc06870c  jal         func_1A1C30
label_1bc268:
    if (ctx->pc == 0x1BC268u) {
        ctx->pc = 0x1BC268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC264u;
        // 0x1bc268: 0x260400a0  addiu       $a0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC26Cu;
        goto label_1bc26c;
    }
    ctx->pc = 0x1BC264u;
    SET_GPR_U32(ctx, 31, 0x1BC26Cu);
    ctx->pc = 0x1BC268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC264u;
    // 0x1bc268: 0x260400a0  addiu       $a0, $s0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x1BC264u, 0x1BC26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC26Cu;
label_1bc26c:
    // 0x1bc26c: 0x8e050074  lw          $a1, 0x74($s0)
    ctx->pc = 0x1bc26cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_1bc270:
    // 0x1bc270: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_1bc274:
    if (ctx->pc == 0x1BC274u) {
        ctx->pc = 0x1BC274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC270u;
        // 0x1bc274: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC278u;
        goto label_1bc278;
    }
    ctx->pc = 0x1BC270u;
    {
        const bool branch_taken_0x1bc270 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC270u;
        // 0x1bc274: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc270) {
            ctx->pc = 0x1BC29Cu;
            goto label_1bc29c;
        }
    }
    ctx->pc = 0x1BC278u;
label_1bc278:
    // 0x1bc278: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x1bc278u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_1bc27c:
    // 0x1bc27c: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x1bc27cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_1bc280:
    // 0x1bc280: 0x24c64b20  addiu       $a2, $a2, 0x4B20
    ctx->pc = 0x1bc280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19232));
label_1bc284:
    // 0x1bc284: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x1bc284u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_1bc288:
    // 0x1bc288: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1bc288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1bc28c:
    // 0x1bc28c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x1bc28cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_1bc290:
    // 0x1bc290: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x1bc290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_1bc294:
    // 0x1bc294: 0x60f809  jalr        $v1
label_1bc298:
    if (ctx->pc == 0x1BC298u) {
        ctx->pc = 0x1BC298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC294u;
        // 0x1bc298: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC29Cu;
        goto label_1bc29c;
    }
    ctx->pc = 0x1BC294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BC29Cu);
        ctx->pc = 0x1BC298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC294u;
        // 0x1bc298: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC294u, 0x1BC29Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BC29Cu;
label_1bc29c:
    // 0x1bc29c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bc29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bc2a0:
    // 0x1bc2a0: 0xc06a39e  jal         func_1A8E78
label_1bc2a4:
    if (ctx->pc == 0x1BC2A4u) {
        ctx->pc = 0x1BC2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC2A0u;
        // 0x1bc2a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC2A8u;
        goto label_1bc2a8;
    }
    ctx->pc = 0x1BC2A0u;
    SET_GPR_U32(ctx, 31, 0x1BC2A8u);
    ctx->pc = 0x1BC2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC2A0u;
    // 0x1bc2a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x1BC2A0u, 0x1BC2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC2A8u;
label_1bc2a8:
    // 0x1bc2a8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1bc2a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1bc2ac:
    // 0x1bc2ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bc2acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bc2b0:
    // 0x1bc2b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bc2b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bc2b4:
    // 0x1bc2b4: 0x3e00008  jr          $ra
label_1bc2b8:
    if (ctx->pc == 0x1BC2B8u) {
        ctx->pc = 0x1BC2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC2B4u;
        // 0x1bc2b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC2BCu;
        goto label_1bc2bc;
    }
    ctx->pc = 0x1BC2B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC2B4u;
        // 0x1bc2b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC2B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BC2BCu;
label_1bc2bc:
    // 0x1bc2bc: 0x0  nop
    ctx->pc = 0x1bc2bcu;
    // NOP
    ctx->pc = 0x1bc2c0u;
}
