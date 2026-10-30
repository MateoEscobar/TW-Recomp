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

// Function: sub_0020D1B8
// Address: 0x20d1b8 - 0x20d2c0
void sub_0020D1B8_0x20d1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020D1B8_0x20d1b8");
#endif

    switch (ctx->pc) {
        case 0x20d1b8u: goto label_20d1b8;
        case 0x20d1bcu: goto label_20d1bc;
        case 0x20d1c0u: goto label_20d1c0;
        case 0x20d1c4u: goto label_20d1c4;
        case 0x20d1c8u: goto label_20d1c8;
        case 0x20d1ccu: goto label_20d1cc;
        case 0x20d1d0u: goto label_20d1d0;
        case 0x20d1d4u: goto label_20d1d4;
        case 0x20d1d8u: goto label_20d1d8;
        case 0x20d1dcu: goto label_20d1dc;
        case 0x20d1e0u: goto label_20d1e0;
        case 0x20d1e4u: goto label_20d1e4;
        case 0x20d1e8u: goto label_20d1e8;
        case 0x20d1ecu: goto label_20d1ec;
        case 0x20d1f0u: goto label_20d1f0;
        case 0x20d1f4u: goto label_20d1f4;
        case 0x20d1f8u: goto label_20d1f8;
        case 0x20d1fcu: goto label_20d1fc;
        case 0x20d200u: goto label_20d200;
        case 0x20d204u: goto label_20d204;
        case 0x20d208u: goto label_20d208;
        case 0x20d20cu: goto label_20d20c;
        case 0x20d210u: goto label_20d210;
        case 0x20d214u: goto label_20d214;
        case 0x20d218u: goto label_20d218;
        case 0x20d21cu: goto label_20d21c;
        case 0x20d220u: goto label_20d220;
        case 0x20d224u: goto label_20d224;
        case 0x20d228u: goto label_20d228;
        case 0x20d22cu: goto label_20d22c;
        case 0x20d230u: goto label_20d230;
        case 0x20d234u: goto label_20d234;
        case 0x20d238u: goto label_20d238;
        case 0x20d23cu: goto label_20d23c;
        case 0x20d240u: goto label_20d240;
        case 0x20d244u: goto label_20d244;
        case 0x20d248u: goto label_20d248;
        case 0x20d24cu: goto label_20d24c;
        case 0x20d250u: goto label_20d250;
        case 0x20d254u: goto label_20d254;
        case 0x20d258u: goto label_20d258;
        case 0x20d25cu: goto label_20d25c;
        case 0x20d260u: goto label_20d260;
        case 0x20d264u: goto label_20d264;
        case 0x20d268u: goto label_20d268;
        case 0x20d26cu: goto label_20d26c;
        case 0x20d270u: goto label_20d270;
        case 0x20d274u: goto label_20d274;
        case 0x20d278u: goto label_20d278;
        case 0x20d27cu: goto label_20d27c;
        case 0x20d280u: goto label_20d280;
        case 0x20d284u: goto label_20d284;
        case 0x20d288u: goto label_20d288;
        case 0x20d28cu: goto label_20d28c;
        case 0x20d290u: goto label_20d290;
        case 0x20d294u: goto label_20d294;
        case 0x20d298u: goto label_20d298;
        case 0x20d29cu: goto label_20d29c;
        case 0x20d2a0u: goto label_20d2a0;
        case 0x20d2a4u: goto label_20d2a4;
        case 0x20d2a8u: goto label_20d2a8;
        case 0x20d2acu: goto label_20d2ac;
        case 0x20d2b0u: goto label_20d2b0;
        case 0x20d2b4u: goto label_20d2b4;
        case 0x20d2b8u: goto label_20d2b8;
        case 0x20d2bcu: goto label_20d2bc;
        default: break;
    }

    ctx->pc = 0x20d1b8u;

label_20d1b8:
    // 0x20d1b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20d1b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_20d1bc:
    // 0x20d1bc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x20d1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_20d1c0:
    // 0x20d1c0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x20d1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_20d1c4:
    // 0x20d1c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20d1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_20d1c8:
    // 0x20d1c8: 0xc06a38c  jal         func_1A8E30
label_20d1cc:
    if (ctx->pc == 0x20D1CCu) {
        ctx->pc = 0x20D1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D1C8u;
        // 0x20d1cc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D1D0u;
        goto label_20d1d0;
    }
    ctx->pc = 0x20D1C8u;
    SET_GPR_U32(ctx, 31, 0x20D1D0u);
    ctx->pc = 0x20D1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D1C8u;
    // 0x20d1cc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x20D1C8u, 0x20D1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D1D0u;
label_20d1d0:
    // 0x20d1d0: 0x26110078  addiu       $s1, $s0, 0x78
    ctx->pc = 0x20d1d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_20d1d4:
    // 0x20d1d4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x20d1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_20d1d8:
    // 0x20d1d8: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x20d1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_20d1dc:
    // 0x20d1dc: 0x24638778  addiu       $v1, $v1, -0x7888
    ctx->pc = 0x20d1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936440));
label_20d1e0:
    // 0x20d1e0: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x20d1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_20d1e4:
    // 0x20d1e4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x20d1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_20d1e8:
    // 0x20d1e8: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x20d1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_20d1ec:
    // 0x20d1ec: 0x24428510  addiu       $v0, $v0, -0x7AF0
    ctx->pc = 0x20d1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935824));
label_20d1f0:
    // 0x20d1f0: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x20d1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_20d1f4:
    // 0x20d1f4: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x20d1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
label_20d1f8:
    // 0x20d1f8: 0x2463cc88  addiu       $v1, $v1, -0x3378
    ctx->pc = 0x20d1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954120));
label_20d1fc:
    // 0x20d1fc: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x20d1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_20d200:
    // 0x20d200: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x20d200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_20d204:
    // 0x20d204: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x20d204u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_20d208:
    // 0x20d208: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x20d208u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_20d20c:
    // 0x20d20c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x20d20cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_20d210:
    // 0x20d210: 0x3c080056  lui         $t0, 0x56
    ctx->pc = 0x20d210u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)86 << 16));
label_20d214:
    // 0x20d214: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x20d214u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_20d218:
    // 0x20d218: 0x3c0a0056  lui         $t2, 0x56
    ctx->pc = 0x20d218u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)86 << 16));
label_20d21c:
    // 0x20d21c: 0xae030088  sw          $v1, 0x88($s0)
    ctx->pc = 0x20d21cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 3));
label_20d220:
    // 0x20d220: 0x24a59428  addiu       $a1, $a1, -0x6BD8
    ctx->pc = 0x20d220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939688));
label_20d224:
    // 0x20d224: 0x8c4cb9c0  lw          $t4, -0x4640($v0)
    ctx->pc = 0x20d224u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_20d228:
    // 0x20d228: 0x25089430  addiu       $t0, $t0, -0x6BD0
    ctx->pc = 0x20d228u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294939696));
label_20d22c:
    // 0x20d22c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x20d22cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_20d230:
    // 0x20d230: 0x254a9458  addiu       $t2, $t2, -0x6BA8
    ctx->pc = 0x20d230u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294939736));
label_20d234:
    // 0x20d234: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x20d234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_20d238:
    // 0x20d238: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x20d238u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20d23c:
    // 0x20d23c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x20d23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_20d240:
    // 0x20d240: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x20d240u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_20d244:
    // 0x20d244: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x20d244u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d248:
    // 0x20d248: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x20d248u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_20d24c:
    // 0x20d24c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x20d24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_20d250:
    // 0x20d250: 0x40f809  jalr        $v0
label_20d254:
    if (ctx->pc == 0x20D254u) {
        ctx->pc = 0x20D254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D250u;
        // 0x20d254: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D258u;
        goto label_20d258;
    }
    ctx->pc = 0x20D250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20D258u);
        ctx->pc = 0x20D254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D250u;
        // 0x20d254: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D250u, 0x20D258u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20D258u;
label_20d258:
    // 0x20d258: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x20d258u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_20d25c:
    // 0x20d25c: 0x3c070054  lui         $a3, 0x54
    ctx->pc = 0x20d25cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)84 << 16));
label_20d260:
    // 0x20d260: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x20d260u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_20d264:
    // 0x20d264: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x20d264u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_20d268:
    // 0x20d268: 0xa220000c  sb          $zero, 0xC($s1)
    ctx->pc = 0x20d268u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 0));
label_20d26c:
    // 0x20d26c: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x20d26cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
label_20d270:
    // 0x20d270: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x20d270u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_20d274:
    // 0x20d274: 0x24e7e8b0  addiu       $a3, $a3, -0x1750
    ctx->pc = 0x20d274u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961328));
label_20d278:
    // 0x20d278: 0x24c6e8d8  addiu       $a2, $a2, -0x1728
    ctx->pc = 0x20d278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961368));
label_20d27c:
    // 0x20d27c: 0x24a5e908  addiu       $a1, $a1, -0x16F8
    ctx->pc = 0x20d27cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961416));
label_20d280:
    // 0x20d280: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x20d280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_20d284:
    // 0x20d284: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x20d284u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20d288:
    // 0x20d288: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20d288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20d28c:
    // 0x20d28c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x20d28cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_20d290:
    // 0x20d290: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x20d290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_20d294:
    // 0x20d294: 0xac630008  sw          $v1, 0x8($v1)
    ctx->pc = 0x20d294u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 3));
label_20d298:
    // 0x20d298: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x20d298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_20d29c:
    // 0x20d29c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x20d29cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20d2a0:
    // 0x20d2a0: 0xac84000c  sw          $a0, 0xC($a0)
    ctx->pc = 0x20d2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 4));
label_20d2a4:
    // 0x20d2a4: 0xae07006c  sw          $a3, 0x6C($s0)
    ctx->pc = 0x20d2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 7));
label_20d2a8:
    // 0x20d2a8: 0xae060088  sw          $a2, 0x88($s0)
    ctx->pc = 0x20d2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 6));
label_20d2ac:
    // 0x20d2ac: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x20d2acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_20d2b0:
    // 0x20d2b0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x20d2b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20d2b4:
    // 0x20d2b4: 0x3e00008  jr          $ra
label_20d2b8:
    if (ctx->pc == 0x20D2B8u) {
        ctx->pc = 0x20D2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D2B4u;
        // 0x20d2b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D2BCu;
        goto label_20d2bc;
    }
    ctx->pc = 0x20D2B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D2B4u;
        // 0x20d2b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D2B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D2BCu;
label_20d2bc:
    // 0x20d2bc: 0x0  nop
    ctx->pc = 0x20d2bcu;
    // NOP
    ctx->pc = 0x20d2c0u;
}
