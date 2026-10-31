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

// Function: sub_00490190
// Address: 0x490190 - 0x490570
void sub_00490190_0x490190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00490190_0x490190");
#endif

    switch (ctx->pc) {
        case 0x49038cu: goto label_49038c;
        case 0x49052cu: goto label_49052c;
        case 0x490538u: goto label_490538;
        default: break;
    }

    ctx->pc = 0x490190u;

    // 0x490190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x490190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x490194: 0x30c20007  andi        $v0, $a2, 0x7
    ctx->pc = 0x490194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
    // 0x490198: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x490198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x49019c: 0x30c300f8  andi        $v1, $a2, 0xF8
    ctx->pc = 0x49019cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)248);
    // 0x4901a0: 0xa0a20020  sb          $v0, 0x20($a1)
    ctx->pc = 0x4901a0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x4901a4: 0x30c89000  andi        $t0, $a2, 0x9000
    ctx->pc = 0x4901a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)36864);
    // 0x4901a8: 0xa0a30021  sb          $v1, 0x21($a1)
    ctx->pc = 0x4901a8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 33), (uint8_t)GPR_U32(ctx, 3));
    // 0x4901ac: 0x30c70f00  andi        $a3, $a2, 0xF00
    ctx->pc = 0x4901acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3840);
    // 0x4901b0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x4901b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4901b4: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x4901b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x4901b8: 0x104000df  beqz        $v0, . + 4 + (0xDF << 2)
    ctx->pc = 0x4901B8u;
    {
        const bool branch_taken_0x4901b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4901BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4901B8u;
        // 0x4901bc: 0x30c66000  andi        $a2, $a2, 0x6000 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)24576);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4901b8) {
            ctx->pc = 0x490538u;
            goto label_490538;
        }
    }
    ctx->pc = 0x4901C0u;
    // 0x4901c0: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4901c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4901c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4901c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4901c8: 0x2442f280  addiu       $v0, $v0, -0xD80
    ctx->pc = 0x4901c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963840));
    // 0x4901cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4901ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4901d0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4901d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4901d4: 0x800008  jr          $a0
    ctx->pc = 0x4901D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4901DCu: goto label_4901dc;
            case 0x4901F0u: goto label_4901f0;
            case 0x4901F8u: goto label_4901f8;
            case 0x4903E0u: goto label_4903e0;
            case 0x4904B0u: goto label_4904b0;
            case 0x490538u: goto label_490538;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4901D4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4901DCu;
label_4901dc:
    // 0x4901dc: 0x14c000ce  bnez        $a2, . + 4 + (0xCE << 2)
    ctx->pc = 0x4901DCu;
    {
        const bool branch_taken_0x4901dc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4901E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4901DCu;
        // 0x4901e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4901dc) {
            ctx->pc = 0x490518u;
            goto label_490518;
        }
    }
    ctx->pc = 0x4901E4u;
    // 0x4901e4: 0x150000cc  bnez        $t0, . + 4 + (0xCC << 2)
    ctx->pc = 0x4901E4u;
    {
        const bool branch_taken_0x4901e4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x4901e4) {
            ctx->pc = 0x490518u;
            goto label_490518;
        }
    }
    ctx->pc = 0x4901ECu;
    // 0x4901ec: 0x0  nop
    ctx->pc = 0x4901ecu;
    // NOP
label_4901f0:
    // 0x4901f0: 0x14c000c9  bnez        $a2, . + 4 + (0xC9 << 2)
    ctx->pc = 0x4901F0u;
    {
        const bool branch_taken_0x4901f0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4901F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4901F0u;
        // 0x4901f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4901f0) {
            ctx->pc = 0x490518u;
            goto label_490518;
        }
    }
    ctx->pc = 0x4901F8u;
label_4901f8:
    // 0x4901f8: 0x14e00018  bnez        $a3, . + 4 + (0x18 << 2)
    ctx->pc = 0x4901F8u;
    {
        const bool branch_taken_0x4901f8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x4901FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4901F8u;
        // 0x4901fc: 0xe81025  or          $v0, $a3, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4901f8) {
            ctx->pc = 0x49025Cu;
            goto label_49025c;
        }
    }
    ctx->pc = 0x490200u;
    // 0x490200: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x490200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x490204: 0x2444fffc  addiu       $a0, $v0, -0x4
    ctx->pc = 0x490204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x490208: 0x2c83001d  sltiu       $v1, $a0, 0x1D
    ctx->pc = 0x490208u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)29) ? 1 : 0);
    // 0x49020c: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x49020Cu;
    {
        const bool branch_taken_0x49020c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x490210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49020Cu;
        // 0x490210: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49020c) {
            ctx->pc = 0x490254u;
            goto label_490254;
        }
    }
    ctx->pc = 0x490214u;
    // 0x490214: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x490214u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x490218: 0x2442f2a0  addiu       $v0, $v0, -0xD60
    ctx->pc = 0x490218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963872));
    // 0x49021c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x49021cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x490220: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x490220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x490224: 0x800008  jr          $a0
    ctx->pc = 0x490224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x49022Cu: goto label_49022c;
            case 0x490238u: goto label_490238;
            case 0x490244u: goto label_490244;
            case 0x49024Cu: goto label_49024c;
            case 0x490254u: goto label_490254;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x490224u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x49022Cu;
label_49022c:
    // 0x49022c: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x49022cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x490230: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x490230u;
    {
        const bool branch_taken_0x490230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x490234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490230u;
        // 0x490234: 0x24064000  addiu       $a2, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490230) {
            ctx->pc = 0x490258u;
            goto label_490258;
        }
    }
    ctx->pc = 0x490238u;
label_490238:
    // 0x490238: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x490238u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x49023c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x49023Cu;
    {
        const bool branch_taken_0x49023c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x490240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49023Cu;
        // 0x490240: 0x24062000  addiu       $a2, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49023c) {
            ctx->pc = 0x490258u;
            goto label_490258;
        }
    }
    ctx->pc = 0x490244u;
label_490244:
    // 0x490244: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x490244u;
    {
        const bool branch_taken_0x490244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x490248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490244u;
        // 0x490248: 0x24070600  addiu       $a3, $zero, 0x600 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490244) {
            ctx->pc = 0x490258u;
            goto label_490258;
        }
    }
    ctx->pc = 0x49024Cu;
label_49024c:
    // 0x49024c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x49024Cu;
    {
        const bool branch_taken_0x49024c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x490250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49024Cu;
        // 0x490250: 0x24070500  addiu       $a3, $zero, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49024c) {
            ctx->pc = 0x490258u;
            goto label_490258;
        }
    }
    ctx->pc = 0x490254u;
label_490254:
    // 0x490254: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x490254u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_490258:
    // 0x490258: 0xe81025  or          $v0, $a3, $t0
    ctx->pc = 0x490258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
label_49025c:
    // 0x49025c: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x49025cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x490260: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x490260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x490264: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x490264u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x490268: 0x10c30051  beq         $a2, $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x490268u;
    {
        const bool branch_taken_0x490268 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x49026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490268u;
        // 0x49026c: 0xa0a20023  sb          $v0, 0x23($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 35), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490268) {
            ctx->pc = 0x4903B0u;
            goto label_4903b0;
        }
    }
    ctx->pc = 0x490270u;
    // 0x490270: 0x28c22001  slti        $v0, $a2, 0x2001
    ctx->pc = 0x490270u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8193) ? 1 : 0);
    // 0x490274: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x490274u;
    {
        const bool branch_taken_0x490274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x490274) {
            ctx->pc = 0x490278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x490274u;
            // 0x490278: 0x24024000  addiu       $v0, $zero, 0x4000 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49028Cu;
            goto label_49028c;
        }
    }
    ctx->pc = 0x49027Cu;
    // 0x49027c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x49027Cu;
    {
        const bool branch_taken_0x49027c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x490280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49027Cu;
        // 0x490280: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49027c) {
            ctx->pc = 0x49029Cu;
            goto label_49029c;
        }
    }
    ctx->pc = 0x490284u;
    // 0x490284: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x490284u;
    {
        const bool branch_taken_0x490284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x490284) {
            ctx->pc = 0x490518u;
            goto label_490518;
        }
    }
    ctx->pc = 0x49028Cu;
label_49028c:
    // 0x49028c: 0x50c20036  beql        $a2, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x49028Cu;
    {
        const bool branch_taken_0x49028c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x49028c) {
            ctx->pc = 0x490290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49028Cu;
            // 0x490290: 0x8ca30014  lw          $v1, 0x14($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x490368u;
            goto label_490368;
        }
    }
    ctx->pc = 0x490294u;
    // 0x490294: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x490294u;
    {
        const bool branch_taken_0x490294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x490298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490294u;
        // 0x490298: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490294) {
            ctx->pc = 0x490518u;
            goto label_490518;
        }
    }
    ctx->pc = 0x49029Cu;
label_49029c:
    // 0x49029c: 0x24020500  addiu       $v0, $zero, 0x500
    ctx->pc = 0x49029cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x4902a0: 0x10e20024  beq         $a3, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x4902A0u;
    {
        const bool branch_taken_0x4902a0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x4902A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4902A0u;
        // 0x4902a4: 0x28e20501  slti        $v0, $a3, 0x501 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)1281) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4902a0) {
            ctx->pc = 0x490334u;
            goto label_490334;
        }
    }
    ctx->pc = 0x4902A8u;
    // 0x4902a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4902A8u;
    {
        const bool branch_taken_0x4902a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4902ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4902A8u;
        // 0x4902ac: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4902a8) {
            ctx->pc = 0x4902C0u;
            goto label_4902c0;
        }
    }
    ctx->pc = 0x4902B0u;
    // 0x4902b0: 0x10e20008  beq         $a3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4902B0u;
    {
        const bool branch_taken_0x4902b0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x4902B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4902B0u;
        // 0x4902b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4902b0) {
            ctx->pc = 0x4902D4u;
            goto label_4902d4;
        }
    }
    ctx->pc = 0x4902B8u;
    // 0x4902b8: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x4902B8u;
    {
        const bool branch_taken_0x4902b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4902b8) {
            ctx->pc = 0x490518u;
            goto label_490518;
        }
    }
    ctx->pc = 0x4902C0u;
label_4902c0:
    // 0x4902c0: 0x24020600  addiu       $v0, $zero, 0x600
    ctx->pc = 0x4902c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    // 0x4902c4: 0x10e2000f  beq         $a3, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4902C4u;
    {
        const bool branch_taken_0x4902c4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x4902C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4902C4u;
        // 0x4902c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4902c4) {
            ctx->pc = 0x490304u;
            goto label_490304;
        }
    }
    ctx->pc = 0x4902CCu;
    // 0x4902cc: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x4902CCu;
    {
        const bool branch_taken_0x4902cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4902cc) {
            ctx->pc = 0x490518u;
            goto label_490518;
        }
    }
    ctx->pc = 0x4902D4u;
label_4902d4:
    // 0x4902d4: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x4902d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x4902d8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4902D8u;
    {
        const bool branch_taken_0x4902d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4902DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4902D8u;
        // 0x4902dc: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4902d8) {
            ctx->pc = 0x4902F8u;
            goto label_4902f8;
        }
    }
    ctx->pc = 0x4902E0u;
    // 0x4902e0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4902E0u;
    {
        const bool branch_taken_0x4902e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4902E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4902E0u;
        // 0x4902e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4902e0) {
            ctx->pc = 0x4902F8u;
            goto label_4902f8;
        }
    }
    ctx->pc = 0x4902E8u;
    // 0x4902e8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4902e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x4902ec: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4902ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4902f0: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x4902F0u;
    {
        const bool branch_taken_0x4902f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4902F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4902F0u;
        // 0x4902f4: 0x3484000c  ori         $a0, $a0, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4902f0) {
            ctx->pc = 0x490524u;
            goto label_490524;
        }
    }
    ctx->pc = 0x4902F8u;
label_4902f8:
    // 0x4902f8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x4902f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4902fc: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x4902FCu;
    {
        const bool branch_taken_0x4902fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x490300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4902FCu;
        // 0x490300: 0xaca20014  sw          $v0, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4902fc) {
            ctx->pc = 0x49055Cu;
            goto label_49055c;
        }
    }
    ctx->pc = 0x490304u;
label_490304:
    // 0x490304: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x490304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x490308: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x490308u;
    {
        const bool branch_taken_0x490308 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490308u;
        // 0x49030c: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490308) {
            ctx->pc = 0x490328u;
            goto label_490328;
        }
    }
    ctx->pc = 0x490310u;
    // 0x490310: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x490310u;
    {
        const bool branch_taken_0x490310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x490314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490310u;
        // 0x490314: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490310) {
            ctx->pc = 0x490328u;
            goto label_490328;
        }
    }
    ctx->pc = 0x490318u;
    // 0x490318: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x490318u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x49031c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x49031cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x490320: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x490320u;
    {
        const bool branch_taken_0x490320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x490324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490320u;
        // 0x490324: 0x3484000c  ori         $a0, $a0, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x490320) {
            ctx->pc = 0x490524u;
            goto label_490524;
        }
    }
    ctx->pc = 0x490328u;
label_490328:
    // 0x490328: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x490328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x49032c: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x49032Cu;
    {
        const bool branch_taken_0x49032c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x490330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49032Cu;
        // 0x490330: 0xaca20014  sw          $v0, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49032c) {
            ctx->pc = 0x49055Cu;
            goto label_49055c;
        }
    }
    ctx->pc = 0x490334u;
label_490334:
    // 0x490334: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x490334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x490338: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x490338u;
    {
        const bool branch_taken_0x490338 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49033Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490338u;
        // 0x49033c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490338) {
            ctx->pc = 0x490358u;
            goto label_490358;
        }
    }
    ctx->pc = 0x490340u;
    // 0x490340: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x490340u;
    {
        const bool branch_taken_0x490340 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x490344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490340u;
        // 0x490344: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490340) {
            ctx->pc = 0x490358u;
            goto label_490358;
        }
    }
    ctx->pc = 0x490348u;
    // 0x490348: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x490348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x49034c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x49034cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x490350: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x490350u;
    {
        const bool branch_taken_0x490350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x490354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490350u;
        // 0x490354: 0x3484000c  ori         $a0, $a0, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x490350) {
            ctx->pc = 0x490524u;
            goto label_490524;
        }
    }
    ctx->pc = 0x490358u;
label_490358:
    // 0x490358: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x490358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x49035c: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x49035Cu;
    {
        const bool branch_taken_0x49035c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x490360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49035Cu;
        // 0x490360: 0xaca20014  sw          $v0, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49035c) {
            ctx->pc = 0x49055Cu;
            goto label_49055c;
        }
    }
    ctx->pc = 0x490364u;
    // 0x490364: 0x0  nop
    ctx->pc = 0x490364u;
    // NOP
label_490368:
    // 0x490368: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x490368u;
    {
        const bool branch_taken_0x490368 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49036Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490368u;
        // 0x49036c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490368) {
            ctx->pc = 0x490388u;
            goto label_490388;
        }
    }
    ctx->pc = 0x490370u;
    // 0x490370: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x490370u;
    {
        const bool branch_taken_0x490370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x490374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490370u;
        // 0x490374: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490370) {
            ctx->pc = 0x490388u;
            goto label_490388;
        }
    }
    ctx->pc = 0x490378u;
    // 0x490378: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x490378u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x49037c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x49037cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x490380: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x490380u;
    {
        const bool branch_taken_0x490380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x490384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490380u;
        // 0x490384: 0x3484000c  ori         $a0, $a0, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x490380) {
            ctx->pc = 0x490524u;
            goto label_490524;
        }
    }
    ctx->pc = 0x490388u;
label_490388:
    // 0x490388: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x490388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_49038c:
    // 0x49038c: 0x30e60f00  andi        $a2, $a3, 0xF00
    ctx->pc = 0x49038cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3840);
    // 0x490390: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x490390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x490394: 0x10c20071  beq         $a2, $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x490394u;
    {
        const bool branch_taken_0x490394 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x490398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490394u;
        // 0x490398: 0xaca30014  sw          $v1, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490394) {
            ctx->pc = 0x49055Cu;
            goto label_49055c;
        }
    }
    ctx->pc = 0x49039Cu;
    // 0x49039c: 0x24020500  addiu       $v0, $zero, 0x500
    ctx->pc = 0x49039cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x4903a0: 0x10c2006e  beq         $a2, $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x4903A0u;
    {
        const bool branch_taken_0x4903a0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x4903A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4903A0u;
        // 0x4903a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4903a0) {
            ctx->pc = 0x49055Cu;
            goto label_49055c;
        }
    }
    ctx->pc = 0x4903A8u;
    // 0x4903a8: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x4903A8u;
    {
        const bool branch_taken_0x4903a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4903a8) {
            ctx->pc = 0x490518u;
            goto label_490518;
        }
    }
    ctx->pc = 0x4903B0u;
label_4903b0:
    // 0x4903b0: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x4903b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x4903b4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4903B4u;
    {
        const bool branch_taken_0x4903b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4903B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4903B4u;
        // 0x4903b8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4903b4) {
            ctx->pc = 0x4903D8u;
            goto label_4903d8;
        }
    }
    ctx->pc = 0x4903BCu;
    // 0x4903bc: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4903BCu;
    {
        const bool branch_taken_0x4903bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4903C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4903BCu;
        // 0x4903c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4903bc) {
            ctx->pc = 0x4903D8u;
            goto label_4903d8;
        }
    }
    ctx->pc = 0x4903C4u;
    // 0x4903c4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4903c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x4903c8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4903c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4903cc: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x4903CCu;
    {
        const bool branch_taken_0x4903cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4903D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4903CCu;
        // 0x4903d0: 0x3484000c  ori         $a0, $a0, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4903cc) {
            ctx->pc = 0x490524u;
            goto label_490524;
        }
    }
    ctx->pc = 0x4903D4u;
    // 0x4903d4: 0x0  nop
    ctx->pc = 0x4903d4u;
    // NOP
label_4903d8:
    // 0x4903d8: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x4903D8u;
    {
        const bool branch_taken_0x4903d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4903DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4903D8u;
        // 0x4903dc: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4903d8) {
            ctx->pc = 0x49038Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49038c;
        }
    }
    ctx->pc = 0x4903E0u;
label_4903e0:
    // 0x4903e0: 0x1500004d  bnez        $t0, . + 4 + (0x4D << 2)
    ctx->pc = 0x4903E0u;
    {
        const bool branch_taken_0x4903e0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x4903E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4903E0u;
        // 0x4903e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4903e0) {
            ctx->pc = 0x490518u;
            goto label_490518;
        }
    }
    ctx->pc = 0x4903E8u;
    // 0x4903e8: 0x14c0004b  bnez        $a2, . + 4 + (0x4B << 2)
    ctx->pc = 0x4903E8u;
    {
        const bool branch_taken_0x4903e8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x4903e8) {
            ctx->pc = 0x490518u;
            goto label_490518;
        }
    }
    ctx->pc = 0x4903F0u;
    // 0x4903f0: 0x8ca40014  lw          $a0, 0x14($a1)
    ctx->pc = 0x4903f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x4903f4: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x4903F4u;
    {
        const bool branch_taken_0x4903f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4903F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4903F4u;
        // 0x4903f8: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4903f4) {
            ctx->pc = 0x490430u;
            goto label_490430;
        }
    }
    ctx->pc = 0x4903FCu;
    // 0x4903fc: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x4903fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x490400: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x490400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x490404: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x490404u;
    {
        const bool branch_taken_0x490404 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x490404) {
            ctx->pc = 0x490428u;
            goto label_490428;
        }
    }
    ctx->pc = 0x49040Cu;
    // 0x49040c: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x49040cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x490410: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x490410u;
    {
        const bool branch_taken_0x490410 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x490414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490410u;
        // 0x490414: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490410) {
            ctx->pc = 0x490428u;
            goto label_490428;
        }
    }
    ctx->pc = 0x490418u;
    // 0x490418: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x490418u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x49041c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x49041cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x490420: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x490420u;
    {
        const bool branch_taken_0x490420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x490424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490420u;
        // 0x490424: 0x3484000c  ori         $a0, $a0, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x490420) {
            ctx->pc = 0x490524u;
            goto label_490524;
        }
    }
    ctx->pc = 0x490428u;
label_490428:
    // 0x490428: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x490428u;
    {
        const bool branch_taken_0x490428 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x490428) {
            ctx->pc = 0x49043Cu;
            goto label_49043c;
        }
    }
    ctx->pc = 0x490430u;
label_490430:
    // 0x490430: 0x8f8286c0  lw          $v0, -0x7940($gp)
    ctx->pc = 0x490430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936256)));
    // 0x490434: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x490434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x490438: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x490438u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_49043c:
    // 0x49043c: 0x10e0000c  beqz        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x49043Cu;
    {
        const bool branch_taken_0x49043c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x490440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49043Cu;
        // 0x490440: 0x8f848a44  lw          $a0, -0x75BC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49043c) {
            ctx->pc = 0x490470u;
            goto label_490470;
        }
    }
    ctx->pc = 0x490444u;
    // 0x490444: 0x50e4000b  beql        $a3, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x490444u;
    {
        const bool branch_taken_0x490444 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x490444) {
            ctx->pc = 0x490448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x490444u;
            // 0x490448: 0x8ca30014  lw          $v1, 0x14($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x490474u;
            goto label_490474;
        }
    }
    ctx->pc = 0x49044Cu;
    // 0x49044c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x49044cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x490450: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x490450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x490454: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x490454u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x710064u));
    // 0x490458: 0x50e30006  beql        $a3, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x490458u;
    {
        const bool branch_taken_0x490458 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x490458) {
            ctx->pc = 0x49045Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x490458u;
            // 0x49045c: 0x8ca30014  lw          $v1, 0x14($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x490474u;
            goto label_490474;
        }
    }
    ctx->pc = 0x490460u;
    // 0x490460: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x490460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x490464: 0x14e2002c  bne         $a3, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x490464u;
    {
        const bool branch_taken_0x490464 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x490468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490464u;
        // 0x490468: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490464) {
            ctx->pc = 0x490518u;
            goto label_490518;
        }
    }
    ctx->pc = 0x49046Cu;
    // 0x49046c: 0x0  nop
    ctx->pc = 0x49046cu;
    // NOP
label_490470:
    // 0x490470: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x490470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_490474:
    // 0x490474: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x490474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x490478: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x490478u;
    {
        const bool branch_taken_0x490478 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x49047Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490478u;
        // 0x49047c: 0x87380a  movz        $a3, $a0, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490478) {
            ctx->pc = 0x490498u;
            goto label_490498;
        }
    }
    ctx->pc = 0x490480u;
    // 0x490480: 0x24020500  addiu       $v0, $zero, 0x500
    ctx->pc = 0x490480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x490484: 0x50e20008  beql        $a3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x490484u;
    {
        const bool branch_taken_0x490484 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x490484) {
            ctx->pc = 0x490488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x490484u;
            // 0x490488: 0x71203  sra         $v0, $a3, 8 (Delay Slot)
            SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4904A8u;
            goto label_4904a8;
        }
    }
    ctx->pc = 0x49048Cu;
    // 0x49048c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x49048Cu;
    {
        const bool branch_taken_0x49048c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x490490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49048Cu;
        // 0x490490: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49048c) {
            ctx->pc = 0x490518u;
            goto label_490518;
        }
    }
    ctx->pc = 0x490494u;
    // 0x490494: 0x0  nop
    ctx->pc = 0x490494u;
    // NOP
label_490498:
    // 0x490498: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x490498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x49049c: 0x14e2001e  bne         $a3, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x49049Cu;
    {
        const bool branch_taken_0x49049c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x4904A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49049Cu;
        // 0x4904a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49049c) {
            ctx->pc = 0x490518u;
            goto label_490518;
        }
    }
    ctx->pc = 0x4904A4u;
    // 0x4904a4: 0x71203  sra         $v0, $a3, 8
    ctx->pc = 0x4904a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 8));
label_4904a8:
    // 0x4904a8: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x4904A8u;
    {
        const bool branch_taken_0x4904a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4904ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4904A8u;
        // 0x4904ac: 0xa0a20023  sb          $v0, 0x23($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 35), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4904a8) {
            ctx->pc = 0x49055Cu;
            goto label_49055c;
        }
    }
    ctx->pc = 0x4904B0u;
label_4904b0:
    // 0x4904b0: 0x15000019  bnez        $t0, . + 4 + (0x19 << 2)
    ctx->pc = 0x4904B0u;
    {
        const bool branch_taken_0x4904b0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x4904B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4904B0u;
        // 0x4904b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4904b0) {
            ctx->pc = 0x490518u;
            goto label_490518;
        }
    }
    ctx->pc = 0x4904B8u;
    // 0x4904b8: 0x14c00017  bnez        $a2, . + 4 + (0x17 << 2)
    ctx->pc = 0x4904B8u;
    {
        const bool branch_taken_0x4904b8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x4904b8) {
            ctx->pc = 0x490518u;
            goto label_490518;
        }
    }
    ctx->pc = 0x4904C0u;
    // 0x4904c0: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x4904c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x4904c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4904C4u;
    {
        const bool branch_taken_0x4904c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4904C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4904C4u;
        // 0x4904c8: 0x8f83875c  lw          $v1, -0x78A4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4904c4) {
            ctx->pc = 0x4904E8u;
            goto label_4904e8;
        }
    }
    ctx->pc = 0x4904CCu;
    // 0x4904cc: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4904CCu;
    {
        const bool branch_taken_0x4904cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x4904D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4904CCu;
        // 0x4904d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4904cc) {
            ctx->pc = 0x4904E8u;
            goto label_4904e8;
        }
    }
    ctx->pc = 0x4904D4u;
    // 0x4904d4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4904d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x4904d8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4904d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4904dc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x4904DCu;
    {
        const bool branch_taken_0x4904dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4904E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4904DCu;
        // 0x4904e0: 0x3484000c  ori         $a0, $a0, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4904dc) {
            ctx->pc = 0x490524u;
            goto label_490524;
        }
    }
    ctx->pc = 0x4904E4u;
    // 0x4904e4: 0x0  nop
    ctx->pc = 0x4904e4u;
    // NOP
label_4904e8:
    // 0x4904e8: 0x10e00015  beqz        $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x4904E8u;
    {
        const bool branch_taken_0x4904e8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4904ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4904E8u;
        // 0x4904ec: 0xaca30014  sw          $v1, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4904e8) {
            ctx->pc = 0x490540u;
            goto label_490540;
        }
    }
    ctx->pc = 0x4904F0u;
    // 0x4904f0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x4904f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4904f4: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4904F4u;
    {
        const bool branch_taken_0x4904f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4904F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4904F4u;
        // 0x4904f8: 0x24020900  addiu       $v0, $zero, 0x900 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4904f4) {
            ctx->pc = 0x490510u;
            goto label_490510;
        }
    }
    ctx->pc = 0x4904FCu;
    // 0x4904fc: 0x24020700  addiu       $v0, $zero, 0x700
    ctx->pc = 0x4904fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1792));
    // 0x490500: 0x14e20005  bne         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x490500u;
    {
        const bool branch_taken_0x490500 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x490504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490500u;
        // 0x490504: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490500) {
            ctx->pc = 0x490518u;
            goto label_490518;
        }
    }
    ctx->pc = 0x490508u;
    // 0x490508: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x490508u;
    {
        const bool branch_taken_0x490508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49050Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490508u;
        // 0x49050c: 0x8f82875c  lw          $v0, -0x78A4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490508) {
            ctx->pc = 0x490544u;
            goto label_490544;
        }
    }
    ctx->pc = 0x490510u;
label_490510:
    // 0x490510: 0x10e2000b  beq         $a3, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x490510u;
    {
        const bool branch_taken_0x490510 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x490514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490510u;
        // 0x490514: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490510) {
            ctx->pc = 0x490540u;
            goto label_490540;
        }
    }
    ctx->pc = 0x490518u;
label_490518:
    // 0x490518: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x490518u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x49051c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x49051cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x490520: 0x3484000d  ori         $a0, $a0, 0xD
    ctx->pc = 0x490520u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13);
label_490524:
    // 0x490524: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x490524u;
    SET_GPR_U32(ctx, 31, 0x49052Cu);
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x490524u, 0x49052Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49052Cu;
label_49052c:
    // 0x49052c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x49052cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x490530: 0xc11f024  jal         func_47C090
    ctx->pc = 0x490530u;
    SET_GPR_U32(ctx, 31, 0x490538u);
    ctx->pc = 0x490534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x490530u;
    // 0x490534: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x490530u, 0x490538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490538u;
label_490538:
    // 0x490538: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x490538u;
    {
        const bool branch_taken_0x490538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49053Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490538u;
        // 0x49053c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490538) {
            ctx->pc = 0x490560u;
            goto label_490560;
        }
    }
    ctx->pc = 0x490540u;
label_490540:
    // 0x490540: 0x8f82875c  lw          $v0, -0x78A4($gp)
    ctx->pc = 0x490540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936412)));
label_490544:
    // 0x490544: 0x24070900  addiu       $a3, $zero, 0x900
    ctx->pc = 0x490544u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2304));
    // 0x490548: 0x24040700  addiu       $a0, $zero, 0x700
    ctx->pc = 0x490548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1792));
    // 0x49054c: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x49054cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x490550: 0x82380a  movz        $a3, $a0, $v0
    ctx->pc = 0x490550u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
    // 0x490554: 0x71a03  sra         $v1, $a3, 8
    ctx->pc = 0x490554u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 7), 8));
    // 0x490558: 0xa0a30023  sb          $v1, 0x23($a1)
    ctx->pc = 0x490558u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 35), (uint8_t)GPR_U32(ctx, 3));
label_49055c:
    // 0x49055c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49055cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_490560:
    // 0x490560: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x490560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x490564: 0x3e00008  jr          $ra
    ctx->pc = 0x490564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x490568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490564u;
        // 0x490568: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x490564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49056Cu;
    // 0x49056c: 0x0  nop
    ctx->pc = 0x49056cu;
    // NOP
    ctx->pc = 0x490570u;
}
