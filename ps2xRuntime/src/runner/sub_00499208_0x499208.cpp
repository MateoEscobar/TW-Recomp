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

// Function: sub_00499208
// Address: 0x499208 - 0x499350
void sub_00499208_0x499208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00499208_0x499208");
#endif

    switch (ctx->pc) {
        case 0x49921cu: goto label_49921c;
        case 0x4992ccu: goto label_4992cc;
        default: break;
    }

    ctx->pc = 0x499208u;

    // 0x499208: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x499208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49920c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x49920cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x499210: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x499210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x499214: 0xc1233da  jal         func_48CF68
    ctx->pc = 0x499214u;
    SET_GPR_U32(ctx, 31, 0x49921Cu);
    ctx->pc = 0x499218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499214u;
    // 0x499218: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF68u, 0x499214u, 0x49921Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49921Cu;
label_49921c:
    // 0x49921c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x49921cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x499220: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x499220u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x499224: 0x34c68005  ori         $a2, $a2, 0x8005
    ctx->pc = 0x499224u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32773);
    // 0x499228: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x499228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x49922c: 0x70461389  pcpyld      $v0, $v0, $a2
    ctx->pc = 0x49922cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x499230: 0x8f83898c  lw          $v1, -0x7674($gp)
    ctx->pc = 0x499230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x499234: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x499234u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x499238: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x499238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x49923c: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x49923cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x499240: 0xdf8686f0  ld          $a2, -0x7910($gp)
    ctx->pc = 0x499240u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294936304)));
    // 0x499244: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x499244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x499248: 0x70461389  pcpyld      $v0, $v0, $a2
    ctx->pc = 0x499248u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x49924c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x49924cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x499250: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x499250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x499254: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x499254u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x499258: 0xdf8686e8  ld          $a2, -0x7918($gp)
    ctx->pc = 0x499258u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294936296)));
    // 0x49925c: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x49925cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x499260: 0x70461389  pcpyld      $v0, $v0, $a2
    ctx->pc = 0x499260u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x499264: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x499264u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
    // 0x499268: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x499268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x49926c: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x49926cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x499270: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x499270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x499274: 0xdf828720  ld          $v0, -0x78E0($gp)
    ctx->pc = 0x499274u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936352)));
    // 0x499278: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x499278u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x49927c: 0x7c620020  sq          $v0, 0x20($v1)
    ctx->pc = 0x49927cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 2));
    // 0x499280: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x499280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x499284: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x499284u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x499288: 0xdf848718  ld          $a0, -0x78E8($gp)
    ctx->pc = 0x499288u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294936344)));
    // 0x49928c: 0xdf838a70  ld          $v1, -0x7590($gp)
    ctx->pc = 0x49928cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294937200)));
    // 0x499290: 0x2402fe1f  addiu       $v0, $zero, -0x1E1
    ctx->pc = 0x499290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966815));
    // 0x499294: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x499294u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x499298: 0xdf868700  ld          $a2, -0x7900($gp)
    ctx->pc = 0x499298u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294936320)));
    // 0x49929c: 0x306301e0  andi        $v1, $v1, 0x1E0
    ctx->pc = 0x49929cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)480);
    // 0x4992a0: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x4992a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x4992a4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x4992a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x4992a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4992a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4992ac: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x4992acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x4992b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4992b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4992b4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4992b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x4992b8: 0x93858998  lbu         $a1, -0x7668($gp)
    ctx->pc = 0x4992b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936984)));
    // 0x4992bc: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4992bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4992c0: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x4992C0u;
    {
        const bool branch_taken_0x4992c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4992C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4992C0u;
        // 0x4992c4: 0xff848718  sd          $a0, -0x78E8($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294936344), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4992c0) {
            ctx->pc = 0x499310u;
            goto label_499310;
        }
    }
    ctx->pc = 0x4992C8u;
    // 0x4992c8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4992c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_4992cc:
    // 0x4992cc: 0x42000039  di
    ctx->pc = 0x4992ccu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x4992d0: 0x40f  sync.p
    ctx->pc = 0x4992d0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x4992d4: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x4992d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x4992d8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4992d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4992dc: 0x0  nop
    ctx->pc = 0x4992dcu;
    // NOP
    // 0x4992e0: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4992E0u;
    {
        const bool branch_taken_0x4992e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4992e0) {
            ctx->pc = 0x4992CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4992cc;
        }
    }
    ctx->pc = 0x4992E8u;
    // 0x4992e8: 0x9383899a  lbu         $v1, -0x7666($gp)
    ctx->pc = 0x4992e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936986)));
    // 0x4992ec: 0x93828999  lbu         $v0, -0x7667($gp)
    ctx->pc = 0x4992ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936985)));
    // 0x4992f0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4992f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4992f4: 0x9384899b  lbu         $a0, -0x7665($gp)
    ctx->pc = 0x4992f4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936987)));
    // 0x4992f8: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x4992f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x4992fc: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x4992fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x499300: 0x42000038  ei
    ctx->pc = 0x499300u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x499304: 0x210fc  dsll32      $v0, $v0, 3
    ctx->pc = 0x499304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 3));
    // 0x499308: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x499308u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x49930c: 0x0  nop
    ctx->pc = 0x49930cu;
    // NOP
label_499310:
    // 0x499310: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x499310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x499314: 0x70461389  pcpyld      $v0, $v0, $a2
    ctx->pc = 0x499314u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x499318: 0x8f83898c  lw          $v1, -0x7674($gp)
    ctx->pc = 0x499318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x49931c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x49931cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x499320: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x499320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x499324: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x499324u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x499328: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x499328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x49932c: 0x70461389  pcpyld      $v0, $v0, $a2
    ctx->pc = 0x49932cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x499330: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x499330u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x499334: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x499334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x499338: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x499338u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x49933c: 0xaf808a28  sw          $zero, -0x75D8($gp)
    ctx->pc = 0x49933cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937128), GPR_U32(ctx, 0));
    // 0x499340: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x499340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x499344: 0x3e00008  jr          $ra
    ctx->pc = 0x499344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x499348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499344u;
        // 0x499348: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x499344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49934Cu;
    // 0x49934c: 0x0  nop
    ctx->pc = 0x49934cu;
    // NOP
    ctx->pc = 0x499350u;
}
