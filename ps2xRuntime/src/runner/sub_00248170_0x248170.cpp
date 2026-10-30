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

// Function: sub_00248170
// Address: 0x248170 - 0x248270
void sub_00248170_0x248170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248170_0x248170");
#endif

    switch (ctx->pc) {
        case 0x248170u: goto label_248170;
        case 0x248174u: goto label_248174;
        case 0x248178u: goto label_248178;
        case 0x24817cu: goto label_24817c;
        case 0x248180u: goto label_248180;
        case 0x248184u: goto label_248184;
        case 0x248188u: goto label_248188;
        case 0x24818cu: goto label_24818c;
        case 0x248190u: goto label_248190;
        case 0x248194u: goto label_248194;
        case 0x248198u: goto label_248198;
        case 0x24819cu: goto label_24819c;
        case 0x2481a0u: goto label_2481a0;
        case 0x2481a4u: goto label_2481a4;
        case 0x2481a8u: goto label_2481a8;
        case 0x2481acu: goto label_2481ac;
        case 0x2481b0u: goto label_2481b0;
        case 0x2481b4u: goto label_2481b4;
        case 0x2481b8u: goto label_2481b8;
        case 0x2481bcu: goto label_2481bc;
        case 0x2481c0u: goto label_2481c0;
        case 0x2481c4u: goto label_2481c4;
        case 0x2481c8u: goto label_2481c8;
        case 0x2481ccu: goto label_2481cc;
        case 0x2481d0u: goto label_2481d0;
        case 0x2481d4u: goto label_2481d4;
        case 0x2481d8u: goto label_2481d8;
        case 0x2481dcu: goto label_2481dc;
        case 0x2481e0u: goto label_2481e0;
        case 0x2481e4u: goto label_2481e4;
        case 0x2481e8u: goto label_2481e8;
        case 0x2481ecu: goto label_2481ec;
        case 0x2481f0u: goto label_2481f0;
        case 0x2481f4u: goto label_2481f4;
        case 0x2481f8u: goto label_2481f8;
        case 0x2481fcu: goto label_2481fc;
        case 0x248200u: goto label_248200;
        case 0x248204u: goto label_248204;
        case 0x248208u: goto label_248208;
        case 0x24820cu: goto label_24820c;
        case 0x248210u: goto label_248210;
        case 0x248214u: goto label_248214;
        case 0x248218u: goto label_248218;
        case 0x24821cu: goto label_24821c;
        case 0x248220u: goto label_248220;
        case 0x248224u: goto label_248224;
        case 0x248228u: goto label_248228;
        case 0x24822cu: goto label_24822c;
        case 0x248230u: goto label_248230;
        case 0x248234u: goto label_248234;
        case 0x248238u: goto label_248238;
        case 0x24823cu: goto label_24823c;
        case 0x248240u: goto label_248240;
        case 0x248244u: goto label_248244;
        case 0x248248u: goto label_248248;
        case 0x24824cu: goto label_24824c;
        case 0x248250u: goto label_248250;
        case 0x248254u: goto label_248254;
        case 0x248258u: goto label_248258;
        case 0x24825cu: goto label_24825c;
        case 0x248260u: goto label_248260;
        case 0x248264u: goto label_248264;
        case 0x248268u: goto label_248268;
        case 0x24826cu: goto label_24826c;
        default: break;
    }

    ctx->pc = 0x248170u;

label_248170:
    // 0x248170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x248170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_248174:
    // 0x248174: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x248174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_248178:
    // 0x248178: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x248178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_24817c:
    // 0x24817c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24817cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_248180:
    // 0x248180: 0x8e0801a0  lw          $t0, 0x1A0($s0)
    ctx->pc = 0x248180u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
label_248184:
    // 0x248184: 0x1100000e  beqz        $t0, . + 4 + (0xE << 2)
label_248188:
    if (ctx->pc == 0x248188u) {
        ctx->pc = 0x248188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248184u;
        // 0x248188: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24818Cu;
        goto label_24818c;
    }
    ctx->pc = 0x248184u;
    {
        const bool branch_taken_0x248184 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x248188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248184u;
        // 0x248188: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248184) {
            ctx->pc = 0x2481C0u;
            goto label_2481c0;
        }
    }
    ctx->pc = 0x24818Cu;
label_24818c:
    // 0x24818c: 0x8d030074  lw          $v1, 0x74($t0)
    ctx->pc = 0x24818cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 116)));
label_248190:
    // 0x248190: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x248190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_248194:
    // 0x248194: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x248194u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_248198:
    // 0x248198: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x248198u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_24819c:
    // 0x24819c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x24819cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2481a0:
    // 0x2481a0: 0x40f809  jalr        $v0
label_2481a4:
    if (ctx->pc == 0x2481A4u) {
        ctx->pc = 0x2481A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2481A0u;
        // 0x2481a4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2481A8u;
        goto label_2481a8;
    }
    ctx->pc = 0x2481A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2481A8u);
        ctx->pc = 0x2481A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2481A0u;
        // 0x2481a4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2481A0u, 0x2481A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2481A8u;
label_2481a8:
    // 0x2481a8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2481a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2481ac:
    // 0x2481ac: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2481b0:
    if (ctx->pc == 0x2481B0u) {
        ctx->pc = 0x2481B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2481ACu;
        // 0x2481b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2481B4u;
        goto label_2481b4;
    }
    ctx->pc = 0x2481ACu;
    {
        const bool branch_taken_0x2481ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2481B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2481ACu;
        // 0x2481b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2481ac) {
            ctx->pc = 0x2481C4u;
            goto label_2481c4;
        }
    }
    ctx->pc = 0x2481B4u;
label_2481b4:
    // 0x2481b4: 0x94620032  lhu         $v0, 0x32($v1)
    ctx->pc = 0x2481b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 50)));
label_2481b8:
    // 0x2481b8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2481b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_2481bc:
    // 0x2481bc: 0xa4620032  sh          $v0, 0x32($v1)
    ctx->pc = 0x2481bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 50), (uint16_t)GPR_U32(ctx, 2));
label_2481c0:
    // 0x2481c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2481c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2481c4:
    // 0x2481c4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2481c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2481c8:
    // 0x2481c8: 0xc08700c  jal         func_21C030
label_2481cc:
    if (ctx->pc == 0x2481CCu) {
        ctx->pc = 0x2481CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2481C8u;
        // 0x2481cc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2481D0u;
        goto label_2481d0;
    }
    ctx->pc = 0x2481C8u;
    SET_GPR_U32(ctx, 31, 0x2481D0u);
    ctx->pc = 0x2481CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2481C8u;
    // 0x2481cc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C030u, 0x2481C8u, 0x2481D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2481D0u;
label_2481d0:
    // 0x2481d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2481d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2481d4:
    // 0x2481d4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2481d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2481d8:
    // 0x2481d8: 0xc08700c  jal         func_21C030
label_2481dc:
    if (ctx->pc == 0x2481DCu) {
        ctx->pc = 0x2481DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2481D8u;
        // 0x2481dc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2481E0u;
        goto label_2481e0;
    }
    ctx->pc = 0x2481D8u;
    SET_GPR_U32(ctx, 31, 0x2481E0u);
    ctx->pc = 0x2481DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2481D8u;
    // 0x2481dc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C030u, 0x2481D8u, 0x2481E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2481E0u;
label_2481e0:
    // 0x2481e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2481e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2481e4:
    // 0x2481e4: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2481e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_2481e8:
    // 0x2481e8: 0xc08700c  jal         func_21C030
label_2481ec:
    if (ctx->pc == 0x2481ECu) {
        ctx->pc = 0x2481ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2481E8u;
        // 0x2481ec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2481F0u;
        goto label_2481f0;
    }
    ctx->pc = 0x2481E8u;
    SET_GPR_U32(ctx, 31, 0x2481F0u);
    ctx->pc = 0x2481ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2481E8u;
    // 0x2481ec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C030u, 0x2481E8u, 0x2481F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2481F0u;
label_2481f0:
    // 0x2481f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2481f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2481f4:
    // 0x2481f4: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x2481f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_2481f8:
    // 0x2481f8: 0xc08700c  jal         func_21C030
label_2481fc:
    if (ctx->pc == 0x2481FCu) {
        ctx->pc = 0x2481FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2481F8u;
        // 0x2481fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248200u;
        goto label_248200;
    }
    ctx->pc = 0x2481F8u;
    SET_GPR_U32(ctx, 31, 0x248200u);
    ctx->pc = 0x2481FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2481F8u;
    // 0x2481fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C030u, 0x2481F8u, 0x248200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248200u;
label_248200:
    // 0x248200: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_248204:
    // 0x248204: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x248204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_248208:
    // 0x248208: 0xc08700c  jal         func_21C030
label_24820c:
    if (ctx->pc == 0x24820Cu) {
        ctx->pc = 0x24820Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248208u;
        // 0x24820c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248210u;
        goto label_248210;
    }
    ctx->pc = 0x248208u;
    SET_GPR_U32(ctx, 31, 0x248210u);
    ctx->pc = 0x24820Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248208u;
    // 0x24820c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C030u, 0x248208u, 0x248210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248210u;
label_248210:
    // 0x248210: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_248214:
    // 0x248214: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x248214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_248218:
    // 0x248218: 0xc08700c  jal         func_21C030
label_24821c:
    if (ctx->pc == 0x24821Cu) {
        ctx->pc = 0x24821Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248218u;
        // 0x24821c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248220u;
        goto label_248220;
    }
    ctx->pc = 0x248218u;
    SET_GPR_U32(ctx, 31, 0x248220u);
    ctx->pc = 0x24821Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248218u;
    // 0x24821c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C030u, 0x248218u, 0x248220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248220u;
label_248220:
    // 0x248220: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_248224:
    // 0x248224: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x248224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_248228:
    // 0x248228: 0xc08700c  jal         func_21C030
label_24822c:
    if (ctx->pc == 0x24822Cu) {
        ctx->pc = 0x24822Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248228u;
        // 0x24822c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248230u;
        goto label_248230;
    }
    ctx->pc = 0x248228u;
    SET_GPR_U32(ctx, 31, 0x248230u);
    ctx->pc = 0x24822Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248228u;
    // 0x24822c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C030u, 0x248228u, 0x248230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248230u;
label_248230:
    // 0x248230: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_248234:
    // 0x248234: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x248234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_248238:
    // 0x248238: 0xc08700c  jal         func_21C030
label_24823c:
    if (ctx->pc == 0x24823Cu) {
        ctx->pc = 0x24823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248238u;
        // 0x24823c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248240u;
        goto label_248240;
    }
    ctx->pc = 0x248238u;
    SET_GPR_U32(ctx, 31, 0x248240u);
    ctx->pc = 0x24823Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248238u;
    // 0x24823c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C030u, 0x248238u, 0x248240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248240u;
label_248240:
    // 0x248240: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_248244:
    // 0x248244: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x248244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_248248:
    // 0x248248: 0xc08700c  jal         func_21C030
label_24824c:
    if (ctx->pc == 0x24824Cu) {
        ctx->pc = 0x24824Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248248u;
        // 0x24824c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248250u;
        goto label_248250;
    }
    ctx->pc = 0x248248u;
    SET_GPR_U32(ctx, 31, 0x248250u);
    ctx->pc = 0x24824Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248248u;
    // 0x24824c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C030u, 0x248248u, 0x248250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248250u;
label_248250:
    // 0x248250: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_248254:
    // 0x248254: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x248254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_248258:
    // 0x248258: 0xc08700c  jal         func_21C030
label_24825c:
    if (ctx->pc == 0x24825Cu) {
        ctx->pc = 0x24825Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248258u;
        // 0x24825c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248260u;
        goto label_248260;
    }
    ctx->pc = 0x248258u;
    SET_GPR_U32(ctx, 31, 0x248260u);
    ctx->pc = 0x24825Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248258u;
    // 0x24825c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C030u, 0x248258u, 0x248260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248260u;
label_248260:
    // 0x248260: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x248260u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_248264:
    // 0x248264: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x248264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_248268:
    // 0x248268: 0x3e00008  jr          $ra
label_24826c:
    if (ctx->pc == 0x24826Cu) {
        ctx->pc = 0x24826Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248268u;
        // 0x24826c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248270u;
        goto label_fallthrough_0x248268;
    }
    ctx->pc = 0x248268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24826Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248268u;
        // 0x24826c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x248268:
    ctx->pc = 0x248270u;
}
